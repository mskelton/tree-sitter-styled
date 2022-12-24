const CSS = require("tree-sitter-css/grammar");

module.exports = grammar(CSS, {
  name: "styled-components",

  // rules: {
  //   // TODO: add the actual grammar rules
  //   // source_file: $ => 'hello'
  // },
});
