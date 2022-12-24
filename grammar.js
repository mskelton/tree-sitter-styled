const CSS = require("tree-sitter-css/grammar")

module.exports = grammar(CSS, {
  name: "styled",
  rules: {
    _top_level_item: ($, original) => choice(original, $.interpolation),
    _block_item: ($, original) => choice(original, $.interpolation),

    interpolation: $ => seq("${", $.js_expression, choice("}", "};")),

    js_expression: $ => /[A-z_][A-z0-9_]*/,
  },
})
