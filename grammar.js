const CSS = require("tree-sitter-css/grammar")

module.exports = grammar(CSS, {
  name: "styled",
  rules: {
    _top_level_item: ($, original) => choice(original, $.interpolation),

    _block_item: ($, original) => choice(original, $.interpolation),

    _value: ($, original) =>
      prec(
        -1,
        choice(
          ...original.content.members,
          alias($._inline_interpolation, $.interpolation)
        )
      ),

    interpolation: $ =>
      seq("${", alias($._js_expressions, $.js_expression), choice("}", "};")),

    _inline_interpolation: $ =>
      seq("${", alias($._js_expressions, $.js_expression), "}"),

    _js_expressions: $ => repeat1($._js_expression),

    _js_expression: $ => choice($._js_block, $._js_statement),

    _js_block: $ => seq("{", repeat($._js_statement), "}"),

    _js_statement: $ => /[^{}]+/,

    // FIXME: Remove once https://github.com/tree-sitter/tree-sitter-css/pull/30 is merged
    pseudo_element_selector: $ =>
      seq(
        optional($._selector),
        "::",
        alias($.identifier, $.tag_name),
        optional(alias($.pseudo_element_arguments, $.arguments))
      ),

    // FIXME: Remove once https://github.com/tree-sitter/tree-sitter-css/pull/30 is merged
    pseudo_element_arguments: $ =>
      seq(
        token.immediate("("),
        sep(",", choice($._selector, repeat1($._value))),
        ")"
      ),
  },
})

// FIXME: Remove once https://github.com/tree-sitter/tree-sitter-css/pull/30 is merged
function sep(separator, rule) {
  return optional(sep1(separator, rule))
}

// FIXME: Remove once https://github.com/tree-sitter/tree-sitter-css/pull/30 is merged
function sep1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)))
}
