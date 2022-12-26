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
    interpolation: $ => seq("${", $.js_expression, choice("}", "};")),

    _inline_interpolation: $ => seq("${", $.js_expression, "}"),

    js_expression: $ => /[A-z_][A-z0-9_]*/,
  },
})
