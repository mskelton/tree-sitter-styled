#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 399
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 10
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_has = 17,
  anon_sym_not = 18,
  anon_sym_is = 19,
  anon_sym_where = 20,
  anon_sym_host = 21,
  anon_sym_host_DASHcontext = 22,
  anon_sym_nth_DASHchild = 23,
  anon_sym_nth_DASHlast_DASHchild = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  anon_sym_EQ = 28,
  anon_sym_TILDE_EQ = 29,
  anon_sym_CARET_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_DOLLAR_EQ = 33,
  anon_sym_RBRACK = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  anon_sym_PLUS = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_even = 41,
  anon_sym_odd = 42,
  anon_sym_of = 43,
  sym__nth_functional_notation = 44,
  anon_sym_COLON = 45,
  sym_important = 46,
  anon_sym_LPAREN2 = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_only = 50,
  anon_sym_selector = 51,
  aux_sym_color_value_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_value_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_value_token2 = 56,
  sym_escape_sequence = 57,
  aux_sym_integer_value_token1 = 58,
  aux_sym_float_value_token1 = 59,
  sym_unit = 60,
  anon_sym_LBRACK2 = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  sym_identifier = 64,
  sym_at_keyword = 65,
  sym_js_comment = 66,
  sym_comment = 67,
  sym_plain_value = 68,
  anon_sym_DOLLAR_LBRACE = 69,
  anon_sym_RBRACE_SEMI = 70,
  sym__js_statement = 71,
  sym__descendant_operator = 72,
  sym__pseudo_class_selector_colon = 73,
  sym___error_recovery = 74,
  sym_stylesheet = 75,
  sym_import_statement = 76,
  sym_media_statement = 77,
  sym_charset_statement = 78,
  sym_namespace_statement = 79,
  sym_keyframes_statement = 80,
  sym_keyframe_block_list = 81,
  sym_keyframe_block = 82,
  sym_supports_statement = 83,
  sym_postcss_statement = 84,
  sym_at_rule = 85,
  sym_rule_set = 86,
  sym_selectors = 87,
  sym_block = 88,
  sym__selector = 89,
  sym_universal_selector = 90,
  sym_class_selector = 91,
  sym_pseudo_class_selector = 92,
  sym__nth_child_pseudo_class_selector = 93,
  sym_pseudo_element_selector = 94,
  sym_id_selector = 95,
  sym_attribute_selector = 96,
  sym_child_selector = 97,
  sym_descendant_selector = 98,
  sym_sibling_selector = 99,
  sym_adjacent_sibling_selector = 100,
  sym_namespace_selector = 101,
  sym_pseudo_class_arguments = 102,
  sym_pseudo_class_with_selector_arguments = 103,
  sym_pseudo_class_nth_child_arguments = 104,
  sym_pseudo_element_arguments = 105,
  sym_declaration = 106,
  sym_last_declaration = 107,
  sym__query = 108,
  sym_feature_query = 109,
  sym_parenthesized_query = 110,
  sym_binary_query = 111,
  sym_unary_query = 112,
  sym_selector_query = 113,
  sym__value = 114,
  sym_parenthesized_value = 115,
  sym_color_value = 116,
  sym_string_value = 117,
  sym_integer_value = 118,
  sym_float_value = 119,
  sym_grid_value = 120,
  sym_call_expression = 121,
  sym_binary_expression = 122,
  sym_arguments = 123,
  sym_class_name = 124,
  sym_interpolation = 125,
  sym__inline_interpolation = 126,
  aux_sym__js_expressions = 127,
  sym__js_expression = 128,
  sym__js_block = 129,
  aux_sym_stylesheet_repeat1 = 130,
  aux_sym_import_statement_repeat1 = 131,
  aux_sym_keyframe_block_list_repeat1 = 132,
  aux_sym_postcss_statement_repeat1 = 133,
  aux_sym_selectors_repeat1 = 134,
  aux_sym_block_repeat1 = 135,
  aux_sym_pseudo_class_arguments_repeat1 = 136,
  aux_sym_declaration_repeat1 = 137,
  aux_sym_string_value_repeat1 = 138,
  aux_sym_string_value_repeat2 = 139,
  aux_sym_grid_value_repeat1 = 140,
  aux_sym_arguments_repeat1 = 141,
  aux_sym_class_name_repeat1 = 142,
  aux_sym__js_block_repeat1 = 143,
  alias_sym_attribute_name = 144,
  alias_sym_feature_name = 145,
  alias_sym_function_name = 146,
  alias_sym_id_name = 147,
  alias_sym_js_expression = 148,
  alias_sym_keyframes_name = 149,
  alias_sym_keyword_query = 150,
  alias_sym_namespace_name = 151,
  alias_sym_property_name = 152,
  alias_sym_tag_name = 153,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_has] = "class_name",
  [anon_sym_not] = "not",
  [anon_sym_is] = "class_name",
  [anon_sym_where] = "class_name",
  [anon_sym_host] = "class_name",
  [anon_sym_host_DASHcontext] = "class_name",
  [anon_sym_nth_DASHchild] = "class_name",
  [anon_sym_nth_DASHlast_DASHchild] = "class_name",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_even] = "plain_value",
  [anon_sym_odd] = "plain_value",
  [anon_sym_of] = "of",
  [sym__nth_functional_notation] = "plain_value",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE_SEMI] = "};",
  [sym__js_statement] = "_js_statement",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym__nth_child_pseudo_class_selector] = "_nth_child_pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_with_selector_arguments] = "arguments",
  [sym_pseudo_class_nth_child_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_class_name] = "class_name",
  [sym_interpolation] = "interpolation",
  [sym__inline_interpolation] = "interpolation",
  [aux_sym__js_expressions] = "_js_expressions",
  [sym__js_expression] = "_js_expression",
  [sym__js_block] = "_js_block",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_string_value_repeat1] = "string_value_repeat1",
  [aux_sym_string_value_repeat2] = "string_value_repeat2",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [aux_sym__js_block_repeat1] = "_js_block_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_js_expression] = "js_expression",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_has] = sym_class_name,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = sym_class_name,
  [anon_sym_where] = sym_class_name,
  [anon_sym_host] = sym_class_name,
  [anon_sym_host_DASHcontext] = sym_class_name,
  [anon_sym_nth_DASHchild] = sym_class_name,
  [anon_sym_nth_DASHlast_DASHchild] = sym_class_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_even] = sym_plain_value,
  [anon_sym_odd] = sym_plain_value,
  [anon_sym_of] = anon_sym_of,
  [sym__nth_functional_notation] = sym_plain_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [sym__js_statement] = sym__js_statement,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym__nth_child_pseudo_class_selector] = sym__nth_child_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_with_selector_arguments] = sym_arguments,
  [sym_pseudo_class_nth_child_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_class_name] = sym_class_name,
  [sym_interpolation] = sym_interpolation,
  [sym__inline_interpolation] = sym_interpolation,
  [aux_sym__js_expressions] = aux_sym__js_expressions,
  [sym__js_expression] = sym__js_expression,
  [sym__js_block] = sym__js_block,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_string_value_repeat1] = aux_sym_string_value_repeat1,
  [aux_sym_string_value_repeat2] = aux_sym_string_value_repeat2,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [aux_sym__js_block_repeat1] = aux_sym__js_block_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_js_expression] = alias_sym_js_expression,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host_DASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHlast_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_even] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym__nth_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__js_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym__nth_child_pseudo_class_selector] = {
    .visible = false,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_with_selector_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_nth_child_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__js_expressions] = {
    .visible = false,
    .named = false,
  },
  [sym__js_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__js_block] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_js_expression] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_tag_name,
  },
  [5] = {
    [1] = alias_sym_id_name,
  },
  [6] = {
    [1] = sym_class_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [1] = alias_sym_js_expression,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = sym_class_name,
  },
  [16] = {
    [2] = alias_sym_attribute_name,
  },
  [17] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  aux_sym__js_expressions, 2,
    aux_sym__js_expressions,
    alias_sym_js_expression,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 41,
  [51] = 51,
  [52] = 41,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 62,
  [74] = 68,
  [75] = 62,
  [76] = 69,
  [77] = 67,
  [78] = 66,
  [79] = 67,
  [80] = 68,
  [81] = 65,
  [82] = 82,
  [83] = 31,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 91,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 102,
  [110] = 110,
  [111] = 97,
  [112] = 112,
  [113] = 30,
  [114] = 105,
  [115] = 115,
  [116] = 107,
  [117] = 117,
  [118] = 108,
  [119] = 117,
  [120] = 92,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 131,
  [150] = 150,
  [151] = 134,
  [152] = 136,
  [153] = 146,
  [154] = 154,
  [155] = 115,
  [156] = 106,
  [157] = 147,
  [158] = 101,
  [159] = 95,
  [160] = 160,
  [161] = 86,
  [162] = 162,
  [163] = 163,
  [164] = 148,
  [165] = 165,
  [166] = 150,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 31,
  [181] = 30,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 190,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 195,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 200,
  [207] = 207,
  [208] = 208,
  [209] = 61,
  [210] = 162,
  [211] = 211,
  [212] = 212,
  [213] = 168,
  [214] = 214,
  [215] = 214,
  [216] = 163,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 212,
  [221] = 221,
  [222] = 222,
  [223] = 175,
  [224] = 172,
  [225] = 176,
  [226] = 226,
  [227] = 61,
  [228] = 174,
  [229] = 31,
  [230] = 177,
  [231] = 30,
  [232] = 178,
  [233] = 173,
  [234] = 179,
  [235] = 171,
  [236] = 236,
  [237] = 170,
  [238] = 169,
  [239] = 168,
  [240] = 163,
  [241] = 162,
  [242] = 170,
  [243] = 169,
  [244] = 178,
  [245] = 177,
  [246] = 176,
  [247] = 175,
  [248] = 174,
  [249] = 173,
  [250] = 172,
  [251] = 179,
  [252] = 171,
  [253] = 30,
  [254] = 31,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 259,
  [260] = 259,
  [261] = 261,
  [262] = 259,
  [263] = 257,
  [264] = 264,
  [265] = 261,
  [266] = 266,
  [267] = 264,
  [268] = 268,
  [269] = 255,
  [270] = 270,
  [271] = 266,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 277,
  [282] = 275,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 285,
  [290] = 290,
  [291] = 286,
  [292] = 292,
  [293] = 293,
  [294] = 290,
  [295] = 295,
  [296] = 295,
  [297] = 293,
  [298] = 285,
  [299] = 283,
  [300] = 300,
  [301] = 288,
  [302] = 293,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 117,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 148,
  [313] = 304,
  [314] = 303,
  [315] = 95,
  [316] = 316,
  [317] = 307,
  [318] = 318,
  [319] = 304,
  [320] = 316,
  [321] = 321,
  [322] = 322,
  [323] = 304,
  [324] = 318,
  [325] = 307,
  [326] = 318,
  [327] = 327,
  [328] = 328,
  [329] = 328,
  [330] = 318,
  [331] = 306,
  [332] = 307,
  [333] = 316,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 316,
  [338] = 307,
  [339] = 318,
  [340] = 340,
  [341] = 304,
  [342] = 328,
  [343] = 343,
  [344] = 316,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 346,
  [349] = 349,
  [350] = 349,
  [351] = 351,
  [352] = 335,
  [353] = 353,
  [354] = 354,
  [355] = 343,
  [356] = 351,
  [357] = 357,
  [358] = 334,
  [359] = 359,
  [360] = 162,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 349,
  [365] = 363,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 366,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 371,
  [377] = 162,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 379,
  [383] = 379,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 381,
  [389] = 389,
  [390] = 378,
  [391] = 391,
  [392] = 392,
  [393] = 378,
  [394] = 386,
  [395] = 380,
  [396] = 396,
  [397] = 392,
  [398] = 380,
};

static inline bool sym_js_comment_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= '!' || (c < ','
        ? (c >= '(' && c <= '*')
        : c <= ',')))
    : (c <= ';' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(138);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '[') ADVANCE(292);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '~') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '~') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(417);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(414);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 'w') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == 'v') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 45:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 48:
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(428);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 49:
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(428);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '{') ADVANCE(422);
      END_STATE();
    case 53:
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(374);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(196);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 121:
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(422);
      END_STATE();
    case 124:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(258);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 133:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(47);
      END_STATE();
    case 134:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(420);
      END_STATE();
    case 135:
      if (eof) ADVANCE(138);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(294);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'h') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(79);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(191);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '~') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(135)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 136:
      if (eof) ADVANCE(138);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '(') ADVANCE(192);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 137:
      if (eof) ADVANCE(138);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '&') ADVANCE(153);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(140);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '>') ADVANCE(185);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '[') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '{') ADVANCE(147);
      if (lookahead == '|') ADVANCE(190);
      if (lookahead == '}') ADVANCE(148);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(423);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(181);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(249);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 't') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 't') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (lookahead == 'y') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(289);
      if (lookahead == '/') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(414);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(47);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == 'y') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(319);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(407);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(390);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(368);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(394);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'u') ADVANCE(395);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'y') ADVANCE(382);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == 'y') ADVANCE(383);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(381);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(429);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(134);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(416);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(427);
      if (lookahead == '/') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(429);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '/') ADVANCE(419);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(426);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(429);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 136, .external_lex_state = 2},
  [2] = {.lex_state = 136, .external_lex_state = 2},
  [3] = {.lex_state = 136, .external_lex_state = 2},
  [4] = {.lex_state = 136, .external_lex_state = 2},
  [5] = {.lex_state = 136, .external_lex_state = 2},
  [6] = {.lex_state = 136, .external_lex_state = 2},
  [7] = {.lex_state = 136, .external_lex_state = 2},
  [8] = {.lex_state = 136, .external_lex_state = 2},
  [9] = {.lex_state = 136, .external_lex_state = 2},
  [10] = {.lex_state = 136, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 5, .external_lex_state = 3},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 8, .external_lex_state = 3},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 8, .external_lex_state = 3},
  [31] = {.lex_state = 8, .external_lex_state = 3},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 13, .external_lex_state = 3},
  [35] = {.lex_state = 136, .external_lex_state = 2},
  [36] = {.lex_state = 13, .external_lex_state = 3},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 136, .external_lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 136, .external_lex_state = 2},
  [43] = {.lex_state = 136, .external_lex_state = 2},
  [44] = {.lex_state = 136, .external_lex_state = 2},
  [45] = {.lex_state = 136, .external_lex_state = 2},
  [46] = {.lex_state = 136, .external_lex_state = 2},
  [47] = {.lex_state = 136, .external_lex_state = 2},
  [48] = {.lex_state = 136, .external_lex_state = 2},
  [49] = {.lex_state = 136, .external_lex_state = 2},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 136, .external_lex_state = 2},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 13, .external_lex_state = 3},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 13, .external_lex_state = 3},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 13, .external_lex_state = 3},
  [60] = {.lex_state = 13, .external_lex_state = 3},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 13, .external_lex_state = 3},
  [83] = {.lex_state = 13, .external_lex_state = 3},
  [84] = {.lex_state = 13, .external_lex_state = 3},
  [85] = {.lex_state = 13, .external_lex_state = 3},
  [86] = {.lex_state = 136, .external_lex_state = 2},
  [87] = {.lex_state = 13, .external_lex_state = 3},
  [88] = {.lex_state = 13, .external_lex_state = 3},
  [89] = {.lex_state = 13, .external_lex_state = 3},
  [90] = {.lex_state = 13, .external_lex_state = 3},
  [91] = {.lex_state = 136, .external_lex_state = 2},
  [92] = {.lex_state = 136, .external_lex_state = 2},
  [93] = {.lex_state = 13, .external_lex_state = 3},
  [94] = {.lex_state = 13, .external_lex_state = 3},
  [95] = {.lex_state = 136, .external_lex_state = 2},
  [96] = {.lex_state = 136, .external_lex_state = 2},
  [97] = {.lex_state = 136, .external_lex_state = 2},
  [98] = {.lex_state = 136, .external_lex_state = 2},
  [99] = {.lex_state = 136, .external_lex_state = 2},
  [100] = {.lex_state = 136, .external_lex_state = 2},
  [101] = {.lex_state = 136, .external_lex_state = 2},
  [102] = {.lex_state = 136, .external_lex_state = 2},
  [103] = {.lex_state = 13, .external_lex_state = 3},
  [104] = {.lex_state = 13, .external_lex_state = 3},
  [105] = {.lex_state = 136, .external_lex_state = 2},
  [106] = {.lex_state = 136, .external_lex_state = 2},
  [107] = {.lex_state = 136, .external_lex_state = 2},
  [108] = {.lex_state = 136, .external_lex_state = 2},
  [109] = {.lex_state = 136, .external_lex_state = 2},
  [110] = {.lex_state = 13, .external_lex_state = 3},
  [111] = {.lex_state = 136, .external_lex_state = 2},
  [112] = {.lex_state = 13, .external_lex_state = 3},
  [113] = {.lex_state = 13, .external_lex_state = 3},
  [114] = {.lex_state = 136, .external_lex_state = 2},
  [115] = {.lex_state = 136, .external_lex_state = 2},
  [116] = {.lex_state = 136, .external_lex_state = 2},
  [117] = {.lex_state = 136, .external_lex_state = 2},
  [118] = {.lex_state = 136, .external_lex_state = 2},
  [119] = {.lex_state = 136, .external_lex_state = 2},
  [120] = {.lex_state = 136, .external_lex_state = 2},
  [121] = {.lex_state = 136, .external_lex_state = 2},
  [122] = {.lex_state = 136, .external_lex_state = 2},
  [123] = {.lex_state = 13, .external_lex_state = 3},
  [124] = {.lex_state = 136, .external_lex_state = 2},
  [125] = {.lex_state = 13, .external_lex_state = 3},
  [126] = {.lex_state = 136, .external_lex_state = 2},
  [127] = {.lex_state = 13, .external_lex_state = 3},
  [128] = {.lex_state = 13, .external_lex_state = 3},
  [129] = {.lex_state = 13, .external_lex_state = 3},
  [130] = {.lex_state = 13, .external_lex_state = 3},
  [131] = {.lex_state = 136, .external_lex_state = 2},
  [132] = {.lex_state = 13, .external_lex_state = 3},
  [133] = {.lex_state = 13, .external_lex_state = 3},
  [134] = {.lex_state = 136, .external_lex_state = 2},
  [135] = {.lex_state = 13, .external_lex_state = 3},
  [136] = {.lex_state = 136, .external_lex_state = 2},
  [137] = {.lex_state = 13, .external_lex_state = 3},
  [138] = {.lex_state = 13, .external_lex_state = 3},
  [139] = {.lex_state = 13, .external_lex_state = 3},
  [140] = {.lex_state = 13, .external_lex_state = 3},
  [141] = {.lex_state = 13, .external_lex_state = 3},
  [142] = {.lex_state = 13, .external_lex_state = 3},
  [143] = {.lex_state = 13, .external_lex_state = 3},
  [144] = {.lex_state = 13, .external_lex_state = 3},
  [145] = {.lex_state = 13, .external_lex_state = 3},
  [146] = {.lex_state = 136, .external_lex_state = 2},
  [147] = {.lex_state = 136, .external_lex_state = 2},
  [148] = {.lex_state = 136, .external_lex_state = 2},
  [149] = {.lex_state = 136, .external_lex_state = 2},
  [150] = {.lex_state = 136, .external_lex_state = 2},
  [151] = {.lex_state = 136, .external_lex_state = 2},
  [152] = {.lex_state = 136, .external_lex_state = 2},
  [153] = {.lex_state = 136, .external_lex_state = 2},
  [154] = {.lex_state = 13, .external_lex_state = 3},
  [155] = {.lex_state = 136, .external_lex_state = 2},
  [156] = {.lex_state = 136, .external_lex_state = 2},
  [157] = {.lex_state = 136, .external_lex_state = 2},
  [158] = {.lex_state = 136, .external_lex_state = 2},
  [159] = {.lex_state = 136, .external_lex_state = 2},
  [160] = {.lex_state = 136, .external_lex_state = 2},
  [161] = {.lex_state = 136, .external_lex_state = 2},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 136, .external_lex_state = 2},
  [165] = {.lex_state = 13, .external_lex_state = 3},
  [166] = {.lex_state = 136, .external_lex_state = 2},
  [167] = {.lex_state = 13, .external_lex_state = 3},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 13, .external_lex_state = 3},
  [188] = {.lex_state = 13, .external_lex_state = 3},
  [189] = {.lex_state = 13, .external_lex_state = 3},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 13, .external_lex_state = 3},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 20},
  [198] = {.lex_state = 33},
  [199] = {.lex_state = 136, .external_lex_state = 3},
  [200] = {.lex_state = 136, .external_lex_state = 3},
  [201] = {.lex_state = 136, .external_lex_state = 3},
  [202] = {.lex_state = 136, .external_lex_state = 3},
  [203] = {.lex_state = 136, .external_lex_state = 3},
  [204] = {.lex_state = 33},
  [205] = {.lex_state = 136, .external_lex_state = 3},
  [206] = {.lex_state = 136, .external_lex_state = 3},
  [207] = {.lex_state = 136, .external_lex_state = 3},
  [208] = {.lex_state = 136, .external_lex_state = 3},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 136, .external_lex_state = 3},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 15},
  [217] = {.lex_state = 136, .external_lex_state = 3},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 136, .external_lex_state = 3},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 16},
  [240] = {.lex_state = 23},
  [241] = {.lex_state = 23},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 16},
  [246] = {.lex_state = 16},
  [247] = {.lex_state = 16},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 16},
  [250] = {.lex_state = 16},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 26},
  [256] = {.lex_state = 26},
  [257] = {.lex_state = 136},
  [258] = {.lex_state = 26},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 48},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 136},
  [264] = {.lex_state = 26},
  [265] = {.lex_state = 48},
  [266] = {.lex_state = 48},
  [267] = {.lex_state = 26},
  [268] = {.lex_state = 26},
  [269] = {.lex_state = 26},
  [270] = {.lex_state = 26},
  [271] = {.lex_state = 49},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 26},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 49},
  [277] = {.lex_state = 26},
  [278] = {.lex_state = 16},
  [279] = {.lex_state = 26},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 26},
  [282] = {.lex_state = 49},
  [283] = {.lex_state = 26},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 48},
  [286] = {.lex_state = 136},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 16},
  [289] = {.lex_state = 48},
  [290] = {.lex_state = 48},
  [291] = {.lex_state = 136},
  [292] = {.lex_state = 26},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 48},
  [295] = {.lex_state = 136},
  [296] = {.lex_state = 136},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 48},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 31},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 136},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 136},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 26},
  [309] = {.lex_state = 136},
  [310] = {.lex_state = 136},
  [311] = {.lex_state = 26},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 136},
  [315] = {.lex_state = 26},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 2},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 26},
  [323] = {.lex_state = 1},
  [324] = {.lex_state = 2},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 2},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 136},
  [329] = {.lex_state = 136},
  [330] = {.lex_state = 2},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 48},
  [335] = {.lex_state = 48},
  [336] = {.lex_state = 136},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 1},
  [339] = {.lex_state = 2},
  [340] = {.lex_state = 136},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 136},
  [343] = {.lex_state = 48},
  [344] = {.lex_state = 2},
  [345] = {.lex_state = 49},
  [346] = {.lex_state = 49},
  [347] = {.lex_state = 136},
  [348] = {.lex_state = 49},
  [349] = {.lex_state = 136},
  [350] = {.lex_state = 136},
  [351] = {.lex_state = 136},
  [352] = {.lex_state = 49},
  [353] = {.lex_state = 136},
  [354] = {.lex_state = 136},
  [355] = {.lex_state = 49},
  [356] = {.lex_state = 136},
  [357] = {.lex_state = 26},
  [358] = {.lex_state = 49},
  [359] = {.lex_state = 136},
  [360] = {.lex_state = 24},
  [361] = {.lex_state = 136},
  [362] = {.lex_state = 136},
  [363] = {.lex_state = 49},
  [364] = {.lex_state = 136},
  [365] = {.lex_state = 49},
  [366] = {.lex_state = 136},
  [367] = {.lex_state = 136},
  [368] = {.lex_state = 136},
  [369] = {.lex_state = 136},
  [370] = {.lex_state = 34},
  [371] = {.lex_state = 136},
  [372] = {.lex_state = 136},
  [373] = {.lex_state = 136},
  [374] = {.lex_state = 26},
  [375] = {.lex_state = 136},
  [376] = {.lex_state = 136},
  [377] = {.lex_state = 44},
  [378] = {.lex_state = 136},
  [379] = {.lex_state = 46},
  [380] = {.lex_state = 136},
  [381] = {.lex_state = 136},
  [382] = {.lex_state = 46},
  [383] = {.lex_state = 46},
  [384] = {.lex_state = 136},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 136},
  [387] = {.lex_state = 136},
  [388] = {.lex_state = 136},
  [389] = {.lex_state = 136},
  [390] = {.lex_state = 136},
  [391] = {.lex_state = 136},
  [392] = {.lex_state = 136},
  [393] = {.lex_state = 136},
  [394] = {.lex_state = 136},
  [395] = {.lex_state = 136},
  [396] = {.lex_state = 136},
  [397] = {.lex_state = 136},
  [398] = {.lex_state = 136},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_host_DASHcontext] = ACTIONS(1),
    [anon_sym_nth_DASHchild] = ACTIONS(1),
    [anon_sym_nth_DASHlast_DASHchild] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_even] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(391),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(371),
    [sym__selector] = STATE(201),
    [sym_universal_selector] = STATE(201),
    [sym_class_selector] = STATE(201),
    [sym_pseudo_class_selector] = STATE(201),
    [sym_pseudo_element_selector] = STATE(201),
    [sym_id_selector] = STATE(201),
    [sym_attribute_selector] = STATE(201),
    [sym_child_selector] = STATE(201),
    [sym_descendant_selector] = STATE(201),
    [sym_sibling_selector] = STATE(201),
    [sym_adjacent_sibling_selector] = STATE(201),
    [sym_namespace_selector] = STATE(201),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(201),
    [sym_interpolation] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [sym_at_keyword] = ACTIONS(39),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(41),
    [sym__pseudo_class_selector_colon] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(393), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [98] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(378), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [196] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(395), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [294] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(380), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [392] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(390), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [490] = 24,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(45), 1,
      anon_sym_ATimport,
    ACTIONS(47), 1,
      anon_sym_ATmedia,
    ACTIONS(49), 1,
      anon_sym_ATcharset,
    ACTIONS(51), 1,
      anon_sym_ATnamespace,
    ACTIONS(57), 1,
      anon_sym_ATsupports,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_selectors,
    STATE(398), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [588] = 23,
    ACTIONS(75), 1,
      anon_sym_ATimport,
    ACTIONS(78), 1,
      anon_sym_ATmedia,
    ACTIONS(81), 1,
      anon_sym_ATcharset,
    ACTIONS(84), 1,
      anon_sym_ATnamespace,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      anon_sym_ATsupports,
    ACTIONS(95), 1,
      sym_nesting_selector,
    ACTIONS(98), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(104), 1,
      anon_sym_COLON_COLON,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_at_keyword,
    ACTIONS(125), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(128), 1,
      sym__pseudo_class_selector_colon,
    STATE(376), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(87), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 12,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_postcss_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_block_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [683] = 23,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_ATimport,
    ACTIONS(136), 1,
      anon_sym_ATmedia,
    ACTIONS(139), 1,
      anon_sym_ATcharset,
    ACTIONS(142), 1,
      anon_sym_ATnamespace,
    ACTIONS(148), 1,
      anon_sym_ATsupports,
    ACTIONS(151), 1,
      sym_nesting_selector,
    ACTIONS(154), 1,
      anon_sym_STAR,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      anon_sym_COLON_COLON,
    ACTIONS(163), 1,
      anon_sym_POUND,
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_at_keyword,
    ACTIONS(181), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(184), 1,
      sym__pseudo_class_selector_colon,
    STATE(371), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [777] = 23,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_at_keyword,
    ACTIONS(41), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(371), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      sym_interpolation,
      aux_sym_stylesheet_repeat1,
    STATE(201), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [871] = 24,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_LBRACK2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(26), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(28), 1,
      sym_string_value,
    STATE(182), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(205), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [963] = 24,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_LBRACK2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(217), 1,
      sym_nesting_selector,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(28), 1,
      sym_string_value,
    STATE(182), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(207), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1055] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(209), 1,
      anon_sym_LBRACK2,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(221), 1,
      sym_nesting_selector,
    STATE(28), 1,
      sym_string_value,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(208), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [1144] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(241), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(92), 1,
      sym_block,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(258), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1223] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      sym_important,
    ACTIONS(247), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      sym_plain_value,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(357), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(293), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1290] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_LPAREN2,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      sym_important,
    ACTIONS(267), 1,
      sym_plain_value,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(357), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(297), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1357] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(279), 1,
      sym_important,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    STATE(24), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1429] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      sym_important,
    STATE(38), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1498] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    ACTIONS(289), 1,
      sym_important,
    STATE(33), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1567] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(295), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(293), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(299), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(291), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [1613] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(342), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1678] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(329), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1743] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(328), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1808] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1872] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(361), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1936] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(359), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2000] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_POUND,
    ACTIONS(329), 1,
      sym_important,
    ACTIONS(332), 1,
      anon_sym_LPAREN2,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_integer_value_token1,
    ACTIONS(344), 1,
      aux_sym_float_value_token1,
    ACTIONS(347), 1,
      anon_sym_LBRACK2,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(353), 1,
      sym_plain_value,
    ACTIONS(356), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(324), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2062] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(361), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(365), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(359), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [2102] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      sym_important,
    ACTIONS(375), 1,
      anon_sym_LPAREN2,
    ACTIONS(378), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(384), 1,
      aux_sym_integer_value_token1,
    ACTIONS(387), 1,
      aux_sym_float_value_token1,
    ACTIONS(390), 1,
      anon_sym_LBRACK2,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(396), 1,
      sym_plain_value,
    ACTIONS(399), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(367), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2162] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(404), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(402), 16,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2198] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(406), 16,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2234] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(410), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2294] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(412), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2355] = 5,
    STATE(36), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(418), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(414), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2392] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(420), 1,
      sym_nesting_selector,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(202), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2445] = 5,
    STATE(36), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(430), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(426), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2482] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2541] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_plain_value,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    STATE(185), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2602] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2660] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(441), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(138), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2710] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2768] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(445), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(141), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2818] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(140), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2868] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(449), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(139), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2918] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(451), 1,
      sym_nesting_selector,
    ACTIONS(453), 1,
      sym_identifier,
    STATE(187), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(236), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2970] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(455), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(217), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3020] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(199), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3070] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(459), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(129), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3120] = 13,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(451), 1,
      sym_nesting_selector,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(191), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(236), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3172] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3230] = 12,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(424), 1,
      sym_identifier,
    ACTIONS(465), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(211), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3280] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3338] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3396] = 5,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(471), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3431] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3486] = 5,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(477), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3521] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(485), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(483), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(293), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(299), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3562] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_important,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(182), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3617] = 5,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(487), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3652] = 5,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(491), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [3687] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_arguments,
    ACTIONS(299), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(293), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [3723] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(495), 1,
      sym_important,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(501), 1,
      sym_plain_value,
    STATE(260), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3775] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      sym_important,
    ACTIONS(505), 1,
      sym_plain_value,
    STATE(287), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3827] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(507), 1,
      sym_important,
    ACTIONS(509), 1,
      sym_plain_value,
    STATE(284), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3879] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      sym_important,
    ACTIONS(515), 1,
      anon_sym_LPAREN2,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_integer_value_token1,
    ACTIONS(523), 1,
      aux_sym_float_value_token1,
    ACTIONS(525), 1,
      anon_sym_LBRACK2,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(529), 1,
      sym_plain_value,
    ACTIONS(531), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(195), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3931] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(533), 1,
      sym_important,
    ACTIONS(535), 1,
      sym_plain_value,
    STATE(301), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3983] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(537), 1,
      sym_important,
    ACTIONS(539), 1,
      sym_plain_value,
    STATE(246), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4035] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(541), 1,
      sym_important,
    ACTIONS(543), 1,
      sym_plain_value,
    STATE(302), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4087] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(545), 1,
      sym_important,
    ACTIONS(547), 1,
      sym_plain_value,
    STATE(18), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4139] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(549), 1,
      sym_important,
    ACTIONS(551), 1,
      sym_plain_value,
    STATE(186), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4191] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(553), 1,
      sym_important,
    ACTIONS(555), 1,
      sym_plain_value,
    STATE(17), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4243] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_important,
    ACTIONS(559), 1,
      sym_plain_value,
    STATE(278), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4295] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(561), 1,
      sym_important,
    ACTIONS(563), 1,
      sym_plain_value,
    STATE(259), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4347] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(265), 1,
      sym_important,
    ACTIONS(267), 1,
      sym_plain_value,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(297), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4399] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_important,
    ACTIONS(567), 1,
      sym_plain_value,
    STATE(262), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4451] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym_important,
    ACTIONS(571), 1,
      sym_plain_value,
    STATE(19), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4503] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_LPAREN2,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_integer_value_token1,
    ACTIONS(523), 1,
      aux_sym_float_value_token1,
    ACTIONS(525), 1,
      anon_sym_LBRACK2,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(573), 1,
      sym_important,
    ACTIONS(575), 1,
      sym_plain_value,
    STATE(225), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4555] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(577), 1,
      sym_important,
    ACTIONS(579), 1,
      sym_plain_value,
    STATE(288), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4607] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 1,
      aux_sym_integer_value_token1,
    ACTIONS(207), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_LBRACK2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(581), 1,
      sym_important,
    ACTIONS(583), 1,
      sym_plain_value,
    STATE(176), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4659] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      sym_important,
    ACTIONS(249), 1,
      anon_sym_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_integer_value_token1,
    ACTIONS(255), 1,
      aux_sym_float_value_token1,
    ACTIONS(257), 1,
      anon_sym_LBRACK2,
    ACTIONS(261), 1,
      sym_plain_value,
    ACTIONS(263), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(497), 1,
      anon_sym_LPAREN2,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(293), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4711] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      anon_sym_LPAREN2,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_integer_value_token1,
    ACTIONS(523), 1,
      aux_sym_float_value_token1,
    ACTIONS(525), 1,
      anon_sym_LBRACK2,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(585), 1,
      sym_important,
    ACTIONS(587), 1,
      sym_plain_value,
    STATE(196), 10,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4763] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(589), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4792] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(406), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4821] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(593), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4850] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(597), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4879] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(603), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(601), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4908] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(605), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4937] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(609), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4966] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(613), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4995] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(617), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5024] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(623), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(621), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5053] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(627), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5082] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(629), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5111] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(633), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5140] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(639), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(637), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5169] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(641), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(643), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5198] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(645), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(647), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5227] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(623), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(621), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5256] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(649), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(651), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5285] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(649), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(651), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5314] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(655), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(653), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5343] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(659), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(657), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5372] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(661), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5401] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(665), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5430] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(671), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(669), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5459] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(675), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(673), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5488] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(679), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(677), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5517] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(683), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(681), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5546] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(659), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(657), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5575] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(687), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(685), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5604] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(645), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(647), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5633] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(689), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5662] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(402), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5691] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(671), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(669), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5720] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(695), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(693), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5749] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(679), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(677), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5778] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(699), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(697), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5807] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(683), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(681), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5836] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(699), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(697), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5865] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(627), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5894] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(701), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(703), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5923] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(701), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(703), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5952] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(705), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5981] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(709), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(711), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6010] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(493), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(491), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6039] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(709), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(711), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6068] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(713), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6097] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(291), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6126] = 4,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(717), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(723), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6186] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(727), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(729), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6215] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(731), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6244] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(737), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(735), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6273] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(739), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(741), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6302] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(745), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(743), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6331] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(747), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(749), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6360] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(751), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6389] = 4,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(755), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6420] = 4,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(759), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6451] = 4,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(763), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6482] = 4,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(767), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6513] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(771), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6542] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(775), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6571] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(779), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6600] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(783), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6629] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(787), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(789), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6658] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(791), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(793), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6687] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(795), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(797), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6716] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(727), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(729), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6745] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(799), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(801), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6774] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(739), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(741), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6803] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(747), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(749), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6832] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(787), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(789), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6861] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(803), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6890] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(695), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(693), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6919] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(675), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(673), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6948] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(791), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(793), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [6977] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(655), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(653), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7006] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(639), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(637), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7035] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(627), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7064] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(603), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(601), 12,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7093] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(811), 1,
      sym_unit,
    ACTIONS(809), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(807), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7126] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_unit,
    ACTIONS(815), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(813), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7159] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(795), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(797), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7188] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(477), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7217] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(799), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(801), 12,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [7246] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(819), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7275] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(825), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(823), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7305] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(829), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(827), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7335] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(833), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(831), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7365] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(837), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(835), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7395] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(841), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(839), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7425] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(843), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7455] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(849), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(847), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7485] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(853), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(851), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7515] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(857), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(855), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7545] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(861), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(859), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7575] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(865), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(863), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7605] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(869), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(867), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7635] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(406), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7665] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(404), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(402), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7695] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(873), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(871), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7728] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7761] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7794] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(881), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(879), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7827] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_STAR,
    ACTIONS(277), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(883), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(324), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7860] = 5,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(885), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(359), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7890] = 5,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(885), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(291), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7920] = 5,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(889), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(291), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7950] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [7980] = 5,
    ACTIONS(891), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(889), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(359), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8010] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_SEMI,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8040] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8070] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(365), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(361), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8100] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(895), 1,
      anon_sym_SEMI,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(897), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(901), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(283), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8139] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(897), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(901), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(299), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8178] = 9,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(256), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8213] = 8,
    ACTIONS(915), 1,
      sym_escape_sequence,
    ACTIONS(917), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_class_name_repeat1,
    STATE(60), 1,
      sym_class_name,
    STATE(125), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(913), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(911), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [8245] = 12,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(919), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [8285] = 3,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(291), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8307] = 14,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8351] = 14,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    STATE(353), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8395] = 3,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(291), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8417] = 8,
    ACTIONS(915), 1,
      sym_escape_sequence,
    ACTIONS(917), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_class_name_repeat1,
    STATE(56), 1,
      sym_class_name,
    STATE(165), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(913), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(949), 6,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host,
      anon_sym_host_DASHcontext,
  [8449] = 14,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    STATE(359), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8493] = 3,
    ACTIONS(951), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(291), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8515] = 14,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    STATE(361), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8559] = 12,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8598] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(299), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8625] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(955), 1,
      sym_unit,
    ACTIONS(807), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(809), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8649] = 12,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8687] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(277), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8713] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(823), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(825), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8735] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(306), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8761] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(331), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8787] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym_unit,
    ACTIONS(813), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(815), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8811] = 12,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8849] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(963), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(357), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8875] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(292), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8901] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(281), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8927] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(279), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8953] = 6,
    ACTIONS(233), 1,
      anon_sym_selector,
    ACTIONS(899), 1,
      anon_sym_LPAREN2,
    ACTIONS(903), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8979] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(853), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9000] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(839), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(841), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9021] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(855), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(857), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9042] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    ACTIONS(967), 1,
      anon_sym_COLON,
    STATE(252), 1,
      sym_arguments,
    ACTIONS(293), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9071] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_SLASH,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    STATE(252), 1,
      sym_arguments,
    ACTIONS(293), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9096] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(847), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(849), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9117] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(408), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9138] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(859), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(861), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9159] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(402), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(404), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9180] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(863), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(865), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9201] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(843), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(845), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9222] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(867), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(869), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9243] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(835), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(837), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9264] = 11,
    ACTIONS(719), 1,
      anon_sym_DOT,
    ACTIONS(921), 1,
      anon_sym_COLON_COLON,
    ACTIONS(923), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    ACTIONS(927), 1,
      anon_sym_GT,
    ACTIONS(929), 1,
      anon_sym_TILDE,
    ACTIONS(931), 1,
      anon_sym_PLUS,
    ACTIONS(933), 1,
      anon_sym_PIPE,
    ACTIONS(935), 1,
      sym__descendant_operator,
    ACTIONS(937), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9299] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(831), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(833), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9320] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(827), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(829), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9341] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_SLASH,
    ACTIONS(823), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [9361] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_SLASH,
    ACTIONS(969), 1,
      sym_unit,
    ACTIONS(813), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9383] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_SLASH,
    ACTIONS(971), 1,
      sym_unit,
    ACTIONS(807), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9405] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_SLASH,
    ACTIONS(831), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9424] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_SLASH,
    ACTIONS(827), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9443] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_SLASH,
    ACTIONS(863), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9462] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_SLASH,
    ACTIONS(859), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_SLASH,
    ACTIONS(855), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9500] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_SLASH,
    ACTIONS(851), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9519] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_SLASH,
    ACTIONS(847), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9538] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SLASH,
    ACTIONS(843), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9557] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_SLASH,
    ACTIONS(839), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9576] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_SLASH,
    ACTIONS(867), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9595] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_SLASH,
    ACTIONS(835), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9614] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SLASH,
    ACTIONS(402), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9633] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH,
    ACTIONS(406), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9652] = 6,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    ACTIONS(977), 1,
      aux_sym_integer_value_token1,
    STATE(368), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      sym_from,
      sym_to,
    STATE(268), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9674] = 7,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(981), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_block,
    STATE(296), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9698] = 7,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(985), 1,
      sym_identifier,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(381), 2,
      sym_string_value,
      sym_call_expression,
  [9722] = 7,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      anon_sym_SEMI,
    STATE(121), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [9746] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(993), 1,
      anon_sym_RBRACK,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    STATE(364), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9770] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(997), 1,
      anon_sym_RBRACK,
    STATE(350), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9794] = 6,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym__js_statement,
    STATE(266), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1001), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(335), 2,
      sym__js_expression,
      sym__js_block,
  [9816] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1005), 1,
      anon_sym_RBRACK,
    STATE(349), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9840] = 7,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(985), 1,
      sym_identifier,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(388), 2,
      sym_string_value,
      sym_call_expression,
  [9864] = 6,
    ACTIONS(977), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      sym_from,
      sym_to,
    STATE(269), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9886] = 6,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym__js_statement,
    STATE(266), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1009), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(335), 2,
      sym__js_expression,
      sym__js_block,
  [9908] = 6,
    ACTIONS(1011), 1,
      anon_sym_LBRACE,
    ACTIONS(1016), 1,
      sym__js_statement,
    STATE(266), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1014), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(335), 2,
      sym__js_expression,
      sym__js_block,
  [9930] = 6,
    ACTIONS(977), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      sym_from,
      sym_to,
    STATE(255), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9952] = 6,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    ACTIONS(1026), 1,
      aux_sym_integer_value_token1,
    STATE(368), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1023), 2,
      sym_from,
      sym_to,
    STATE(268), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9974] = 6,
    ACTIONS(977), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(975), 2,
      sym_from,
      sym_to,
    STATE(268), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9996] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(483), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10009] = 6,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    ACTIONS(1031), 1,
      anon_sym_LBRACE,
    ACTIONS(1034), 1,
      sym__js_statement,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10030] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1037), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10043] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1039), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10056] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1041), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10069] = 6,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1045), 1,
      anon_sym_RBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10090] = 6,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10111] = 6,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_block,
    STATE(314), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10132] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1051), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10151] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1053), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10164] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10177] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_block,
    STATE(303), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10198] = 6,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10219] = 5,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    STATE(351), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10237] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1061), 1,
      anon_sym_RBRACK,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10255] = 5,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    STATE(276), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10273] = 5,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(397), 2,
      sym_string_value,
      sym_call_expression,
  [10291] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10309] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1067), 1,
      anon_sym_SEMI,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10327] = 5,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    STATE(275), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10345] = 5,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym__js_statement,
    STATE(261), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(335), 2,
      sym__js_expression,
      sym__js_block,
  [10363] = 5,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(1069), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(392), 2,
      sym_string_value,
      sym_call_expression,
  [10381] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1071), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10395] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1073), 1,
      anon_sym_RPAREN,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10413] = 5,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1003), 1,
      sym__js_statement,
    STATE(265), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(335), 2,
      sym__js_expression,
      sym__js_block,
  [10431] = 6,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1075), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_block,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10451] = 6,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1077), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_block,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10471] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10489] = 5,
    ACTIONS(1043), 1,
      anon_sym_LBRACE,
    ACTIONS(1047), 1,
      sym__js_statement,
    STATE(282), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(352), 2,
      sym__js_expression,
      sym__js_block,
  [10507] = 5,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
    STATE(356), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10525] = 4,
    ACTIONS(1085), 1,
      aux_sym_integer_value_token1,
    STATE(374), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1083), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [10541] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10559] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SLASH,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    ACTIONS(991), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10577] = 5,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_block,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10594] = 4,
    ACTIONS(1091), 1,
      anon_sym_SQUOTE,
    STATE(325), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1093), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10609] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(919), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10624] = 4,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10639] = 4,
    ACTIONS(1098), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10654] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(697), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10665] = 4,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1102), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10680] = 4,
    STATE(34), 1,
      aux_sym_class_name_repeat1,
    STATE(145), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(915), 2,
      sym_escape_sequence,
      sym_identifier,
  [10695] = 3,
    ACTIONS(967), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10708] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(797), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10719] = 4,
    ACTIONS(1105), 1,
      anon_sym_SQUOTE,
    STATE(307), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1107), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10734] = 5,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_block,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10751] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10762] = 4,
    ACTIONS(1109), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1111), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10777] = 4,
    ACTIONS(1109), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10792] = 4,
    ACTIONS(1113), 1,
      anon_sym_DQUOTE,
    STATE(316), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1115), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10807] = 4,
    ACTIONS(1113), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1117), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10822] = 4,
    ACTIONS(1119), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1111), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10837] = 4,
    ACTIONS(1121), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1123), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10852] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1126), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10863] = 4,
    ACTIONS(1128), 1,
      anon_sym_SQUOTE,
    STATE(332), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1130), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10878] = 4,
    ACTIONS(1128), 1,
      anon_sym_DQUOTE,
    STATE(333), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1132), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10893] = 4,
    ACTIONS(1119), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [10908] = 4,
    ACTIONS(1091), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1134), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10923] = 4,
    ACTIONS(1136), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1138), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10938] = 4,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10953] = 4,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10968] = 4,
    ACTIONS(1105), 1,
      anon_sym_DQUOTE,
    STATE(344), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1145), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [10983] = 4,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [10998] = 4,
    ACTIONS(1147), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11013] = 4,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1111), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11028] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1149), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11039] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1151), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11050] = 4,
    STATE(34), 1,
      aux_sym_class_name_repeat1,
    STATE(133), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(915), 2,
      sym_escape_sequence,
      sym_identifier,
  [11065] = 4,
    ACTIONS(1153), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1111), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11080] = 4,
    ACTIONS(1153), 1,
      anon_sym_SQUOTE,
    STATE(321), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11095] = 4,
    ACTIONS(1155), 1,
      anon_sym_DQUOTE,
    STATE(337), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1157), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11110] = 4,
    ACTIONS(1159), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11125] = 4,
    ACTIONS(1155), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1162), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11140] = 4,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11155] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1166), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11166] = 4,
    ACTIONS(1098), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1111), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11181] = 4,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
    ACTIONS(1170), 1,
      sym__js_statement,
    STATE(345), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11195] = 4,
    ACTIONS(1173), 1,
      anon_sym_RBRACE,
    ACTIONS(1175), 1,
      sym__js_statement,
    STATE(345), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11209] = 4,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_LBRACE,
    STATE(305), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11223] = 4,
    ACTIONS(1175), 1,
      sym__js_statement,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11237] = 4,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(1181), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11251] = 4,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(1183), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11265] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11279] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1151), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [11289] = 4,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11303] = 4,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11317] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1166), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [11327] = 4,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    ACTIONS(1192), 1,
      anon_sym_SEMI,
    STATE(340), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11341] = 3,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_and,
      anon_sym_or,
  [11353] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1149), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [11363] = 4,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11377] = 4,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    ACTIONS(809), 1,
      anon_sym_of,
    ACTIONS(1198), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11391] = 4,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(354), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11405] = 4,
    ACTIONS(1051), 1,
      anon_sym_RBRACK,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11419] = 4,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    ACTIONS(1207), 1,
      sym__js_statement,
    STATE(348), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11433] = 4,
    ACTIONS(989), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11447] = 4,
    ACTIONS(1211), 1,
      anon_sym_RBRACE,
    ACTIONS(1213), 1,
      sym__js_statement,
    STATE(346), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11461] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11472] = 3,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11483] = 3,
    ACTIONS(1219), 1,
      anon_sym_LBRACE,
    STATE(322), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11494] = 3,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11505] = 3,
    ACTIONS(1223), 1,
      aux_sym_color_value_token1,
    ACTIONS(1225), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11516] = 3,
    ACTIONS(909), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11527] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11538] = 3,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11549] = 3,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    ACTIONS(1231), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11560] = 3,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11571] = 3,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11582] = 3,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    ACTIONS(1233), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11593] = 2,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11601] = 2,
    ACTIONS(1237), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11609] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11617] = 2,
    ACTIONS(1239), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11625] = 2,
    ACTIONS(1241), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11633] = 2,
    ACTIONS(1243), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11641] = 2,
    ACTIONS(1245), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11649] = 2,
    ACTIONS(1247), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11657] = 2,
    ACTIONS(1249), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11665] = 2,
    ACTIONS(1251), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11673] = 2,
    ACTIONS(1253), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11681] = 2,
    ACTIONS(1255), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11689] = 2,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11697] = 2,
    ACTIONS(1259), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11705] = 2,
    ACTIONS(1261), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11713] = 2,
    ACTIONS(1263), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11721] = 2,
    ACTIONS(1265), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11729] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11737] = 2,
    ACTIONS(1267), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11745] = 2,
    ACTIONS(1269), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11753] = 2,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 683,
  [SMALL_STATE(10)] = 777,
  [SMALL_STATE(11)] = 871,
  [SMALL_STATE(12)] = 963,
  [SMALL_STATE(13)] = 1055,
  [SMALL_STATE(14)] = 1144,
  [SMALL_STATE(15)] = 1223,
  [SMALL_STATE(16)] = 1290,
  [SMALL_STATE(17)] = 1357,
  [SMALL_STATE(18)] = 1429,
  [SMALL_STATE(19)] = 1498,
  [SMALL_STATE(20)] = 1567,
  [SMALL_STATE(21)] = 1613,
  [SMALL_STATE(22)] = 1678,
  [SMALL_STATE(23)] = 1743,
  [SMALL_STATE(24)] = 1808,
  [SMALL_STATE(25)] = 1872,
  [SMALL_STATE(26)] = 1936,
  [SMALL_STATE(27)] = 2000,
  [SMALL_STATE(28)] = 2062,
  [SMALL_STATE(29)] = 2102,
  [SMALL_STATE(30)] = 2162,
  [SMALL_STATE(31)] = 2198,
  [SMALL_STATE(32)] = 2234,
  [SMALL_STATE(33)] = 2294,
  [SMALL_STATE(34)] = 2355,
  [SMALL_STATE(35)] = 2392,
  [SMALL_STATE(36)] = 2445,
  [SMALL_STATE(37)] = 2482,
  [SMALL_STATE(38)] = 2541,
  [SMALL_STATE(39)] = 2602,
  [SMALL_STATE(40)] = 2660,
  [SMALL_STATE(41)] = 2710,
  [SMALL_STATE(42)] = 2768,
  [SMALL_STATE(43)] = 2818,
  [SMALL_STATE(44)] = 2868,
  [SMALL_STATE(45)] = 2918,
  [SMALL_STATE(46)] = 2970,
  [SMALL_STATE(47)] = 3020,
  [SMALL_STATE(48)] = 3070,
  [SMALL_STATE(49)] = 3120,
  [SMALL_STATE(50)] = 3172,
  [SMALL_STATE(51)] = 3230,
  [SMALL_STATE(52)] = 3280,
  [SMALL_STATE(53)] = 3338,
  [SMALL_STATE(54)] = 3396,
  [SMALL_STATE(55)] = 3431,
  [SMALL_STATE(56)] = 3486,
  [SMALL_STATE(57)] = 3521,
  [SMALL_STATE(58)] = 3562,
  [SMALL_STATE(59)] = 3617,
  [SMALL_STATE(60)] = 3652,
  [SMALL_STATE(61)] = 3687,
  [SMALL_STATE(62)] = 3723,
  [SMALL_STATE(63)] = 3775,
  [SMALL_STATE(64)] = 3827,
  [SMALL_STATE(65)] = 3879,
  [SMALL_STATE(66)] = 3931,
  [SMALL_STATE(67)] = 3983,
  [SMALL_STATE(68)] = 4035,
  [SMALL_STATE(69)] = 4087,
  [SMALL_STATE(70)] = 4139,
  [SMALL_STATE(71)] = 4191,
  [SMALL_STATE(72)] = 4243,
  [SMALL_STATE(73)] = 4295,
  [SMALL_STATE(74)] = 4347,
  [SMALL_STATE(75)] = 4399,
  [SMALL_STATE(76)] = 4451,
  [SMALL_STATE(77)] = 4503,
  [SMALL_STATE(78)] = 4555,
  [SMALL_STATE(79)] = 4607,
  [SMALL_STATE(80)] = 4659,
  [SMALL_STATE(81)] = 4711,
  [SMALL_STATE(82)] = 4763,
  [SMALL_STATE(83)] = 4792,
  [SMALL_STATE(84)] = 4821,
  [SMALL_STATE(85)] = 4850,
  [SMALL_STATE(86)] = 4879,
  [SMALL_STATE(87)] = 4908,
  [SMALL_STATE(88)] = 4937,
  [SMALL_STATE(89)] = 4966,
  [SMALL_STATE(90)] = 4995,
  [SMALL_STATE(91)] = 5024,
  [SMALL_STATE(92)] = 5053,
  [SMALL_STATE(93)] = 5082,
  [SMALL_STATE(94)] = 5111,
  [SMALL_STATE(95)] = 5140,
  [SMALL_STATE(96)] = 5169,
  [SMALL_STATE(97)] = 5198,
  [SMALL_STATE(98)] = 5227,
  [SMALL_STATE(99)] = 5256,
  [SMALL_STATE(100)] = 5285,
  [SMALL_STATE(101)] = 5314,
  [SMALL_STATE(102)] = 5343,
  [SMALL_STATE(103)] = 5372,
  [SMALL_STATE(104)] = 5401,
  [SMALL_STATE(105)] = 5430,
  [SMALL_STATE(106)] = 5459,
  [SMALL_STATE(107)] = 5488,
  [SMALL_STATE(108)] = 5517,
  [SMALL_STATE(109)] = 5546,
  [SMALL_STATE(110)] = 5575,
  [SMALL_STATE(111)] = 5604,
  [SMALL_STATE(112)] = 5633,
  [SMALL_STATE(113)] = 5662,
  [SMALL_STATE(114)] = 5691,
  [SMALL_STATE(115)] = 5720,
  [SMALL_STATE(116)] = 5749,
  [SMALL_STATE(117)] = 5778,
  [SMALL_STATE(118)] = 5807,
  [SMALL_STATE(119)] = 5836,
  [SMALL_STATE(120)] = 5865,
  [SMALL_STATE(121)] = 5894,
  [SMALL_STATE(122)] = 5923,
  [SMALL_STATE(123)] = 5952,
  [SMALL_STATE(124)] = 5981,
  [SMALL_STATE(125)] = 6010,
  [SMALL_STATE(126)] = 6039,
  [SMALL_STATE(127)] = 6068,
  [SMALL_STATE(128)] = 6097,
  [SMALL_STATE(129)] = 6126,
  [SMALL_STATE(130)] = 6157,
  [SMALL_STATE(131)] = 6186,
  [SMALL_STATE(132)] = 6215,
  [SMALL_STATE(133)] = 6244,
  [SMALL_STATE(134)] = 6273,
  [SMALL_STATE(135)] = 6302,
  [SMALL_STATE(136)] = 6331,
  [SMALL_STATE(137)] = 6360,
  [SMALL_STATE(138)] = 6389,
  [SMALL_STATE(139)] = 6420,
  [SMALL_STATE(140)] = 6451,
  [SMALL_STATE(141)] = 6482,
  [SMALL_STATE(142)] = 6513,
  [SMALL_STATE(143)] = 6542,
  [SMALL_STATE(144)] = 6571,
  [SMALL_STATE(145)] = 6600,
  [SMALL_STATE(146)] = 6629,
  [SMALL_STATE(147)] = 6658,
  [SMALL_STATE(148)] = 6687,
  [SMALL_STATE(149)] = 6716,
  [SMALL_STATE(150)] = 6745,
  [SMALL_STATE(151)] = 6774,
  [SMALL_STATE(152)] = 6803,
  [SMALL_STATE(153)] = 6832,
  [SMALL_STATE(154)] = 6861,
  [SMALL_STATE(155)] = 6890,
  [SMALL_STATE(156)] = 6919,
  [SMALL_STATE(157)] = 6948,
  [SMALL_STATE(158)] = 6977,
  [SMALL_STATE(159)] = 7006,
  [SMALL_STATE(160)] = 7035,
  [SMALL_STATE(161)] = 7064,
  [SMALL_STATE(162)] = 7093,
  [SMALL_STATE(163)] = 7126,
  [SMALL_STATE(164)] = 7159,
  [SMALL_STATE(165)] = 7188,
  [SMALL_STATE(166)] = 7217,
  [SMALL_STATE(167)] = 7246,
  [SMALL_STATE(168)] = 7275,
  [SMALL_STATE(169)] = 7305,
  [SMALL_STATE(170)] = 7335,
  [SMALL_STATE(171)] = 7365,
  [SMALL_STATE(172)] = 7395,
  [SMALL_STATE(173)] = 7425,
  [SMALL_STATE(174)] = 7455,
  [SMALL_STATE(175)] = 7485,
  [SMALL_STATE(176)] = 7515,
  [SMALL_STATE(177)] = 7545,
  [SMALL_STATE(178)] = 7575,
  [SMALL_STATE(179)] = 7605,
  [SMALL_STATE(180)] = 7635,
  [SMALL_STATE(181)] = 7665,
  [SMALL_STATE(182)] = 7695,
  [SMALL_STATE(183)] = 7728,
  [SMALL_STATE(184)] = 7761,
  [SMALL_STATE(185)] = 7794,
  [SMALL_STATE(186)] = 7827,
  [SMALL_STATE(187)] = 7860,
  [SMALL_STATE(188)] = 7890,
  [SMALL_STATE(189)] = 7920,
  [SMALL_STATE(190)] = 7950,
  [SMALL_STATE(191)] = 7980,
  [SMALL_STATE(192)] = 8010,
  [SMALL_STATE(193)] = 8040,
  [SMALL_STATE(194)] = 8070,
  [SMALL_STATE(195)] = 8100,
  [SMALL_STATE(196)] = 8139,
  [SMALL_STATE(197)] = 8178,
  [SMALL_STATE(198)] = 8213,
  [SMALL_STATE(199)] = 8245,
  [SMALL_STATE(200)] = 8285,
  [SMALL_STATE(201)] = 8307,
  [SMALL_STATE(202)] = 8351,
  [SMALL_STATE(203)] = 8395,
  [SMALL_STATE(204)] = 8417,
  [SMALL_STATE(205)] = 8449,
  [SMALL_STATE(206)] = 8493,
  [SMALL_STATE(207)] = 8515,
  [SMALL_STATE(208)] = 8559,
  [SMALL_STATE(209)] = 8598,
  [SMALL_STATE(210)] = 8625,
  [SMALL_STATE(211)] = 8649,
  [SMALL_STATE(212)] = 8687,
  [SMALL_STATE(213)] = 8713,
  [SMALL_STATE(214)] = 8735,
  [SMALL_STATE(215)] = 8761,
  [SMALL_STATE(216)] = 8787,
  [SMALL_STATE(217)] = 8811,
  [SMALL_STATE(218)] = 8849,
  [SMALL_STATE(219)] = 8875,
  [SMALL_STATE(220)] = 8901,
  [SMALL_STATE(221)] = 8927,
  [SMALL_STATE(222)] = 8953,
  [SMALL_STATE(223)] = 8979,
  [SMALL_STATE(224)] = 9000,
  [SMALL_STATE(225)] = 9021,
  [SMALL_STATE(226)] = 9042,
  [SMALL_STATE(227)] = 9071,
  [SMALL_STATE(228)] = 9096,
  [SMALL_STATE(229)] = 9117,
  [SMALL_STATE(230)] = 9138,
  [SMALL_STATE(231)] = 9159,
  [SMALL_STATE(232)] = 9180,
  [SMALL_STATE(233)] = 9201,
  [SMALL_STATE(234)] = 9222,
  [SMALL_STATE(235)] = 9243,
  [SMALL_STATE(236)] = 9264,
  [SMALL_STATE(237)] = 9299,
  [SMALL_STATE(238)] = 9320,
  [SMALL_STATE(239)] = 9341,
  [SMALL_STATE(240)] = 9361,
  [SMALL_STATE(241)] = 9383,
  [SMALL_STATE(242)] = 9405,
  [SMALL_STATE(243)] = 9424,
  [SMALL_STATE(244)] = 9443,
  [SMALL_STATE(245)] = 9462,
  [SMALL_STATE(246)] = 9481,
  [SMALL_STATE(247)] = 9500,
  [SMALL_STATE(248)] = 9519,
  [SMALL_STATE(249)] = 9538,
  [SMALL_STATE(250)] = 9557,
  [SMALL_STATE(251)] = 9576,
  [SMALL_STATE(252)] = 9595,
  [SMALL_STATE(253)] = 9614,
  [SMALL_STATE(254)] = 9633,
  [SMALL_STATE(255)] = 9652,
  [SMALL_STATE(256)] = 9674,
  [SMALL_STATE(257)] = 9698,
  [SMALL_STATE(258)] = 9722,
  [SMALL_STATE(259)] = 9746,
  [SMALL_STATE(260)] = 9770,
  [SMALL_STATE(261)] = 9794,
  [SMALL_STATE(262)] = 9816,
  [SMALL_STATE(263)] = 9840,
  [SMALL_STATE(264)] = 9864,
  [SMALL_STATE(265)] = 9886,
  [SMALL_STATE(266)] = 9908,
  [SMALL_STATE(267)] = 9930,
  [SMALL_STATE(268)] = 9952,
  [SMALL_STATE(269)] = 9974,
  [SMALL_STATE(270)] = 9996,
  [SMALL_STATE(271)] = 10009,
  [SMALL_STATE(272)] = 10030,
  [SMALL_STATE(273)] = 10043,
  [SMALL_STATE(274)] = 10056,
  [SMALL_STATE(275)] = 10069,
  [SMALL_STATE(276)] = 10090,
  [SMALL_STATE(277)] = 10111,
  [SMALL_STATE(278)] = 10132,
  [SMALL_STATE(279)] = 10151,
  [SMALL_STATE(280)] = 10164,
  [SMALL_STATE(281)] = 10177,
  [SMALL_STATE(282)] = 10198,
  [SMALL_STATE(283)] = 10219,
  [SMALL_STATE(284)] = 10237,
  [SMALL_STATE(285)] = 10255,
  [SMALL_STATE(286)] = 10273,
  [SMALL_STATE(287)] = 10291,
  [SMALL_STATE(288)] = 10309,
  [SMALL_STATE(289)] = 10327,
  [SMALL_STATE(290)] = 10345,
  [SMALL_STATE(291)] = 10363,
  [SMALL_STATE(292)] = 10381,
  [SMALL_STATE(293)] = 10395,
  [SMALL_STATE(294)] = 10413,
  [SMALL_STATE(295)] = 10431,
  [SMALL_STATE(296)] = 10451,
  [SMALL_STATE(297)] = 10471,
  [SMALL_STATE(298)] = 10489,
  [SMALL_STATE(299)] = 10507,
  [SMALL_STATE(300)] = 10525,
  [SMALL_STATE(301)] = 10541,
  [SMALL_STATE(302)] = 10559,
  [SMALL_STATE(303)] = 10577,
  [SMALL_STATE(304)] = 10594,
  [SMALL_STATE(305)] = 10609,
  [SMALL_STATE(306)] = 10624,
  [SMALL_STATE(307)] = 10639,
  [SMALL_STATE(308)] = 10654,
  [SMALL_STATE(309)] = 10665,
  [SMALL_STATE(310)] = 10680,
  [SMALL_STATE(311)] = 10695,
  [SMALL_STATE(312)] = 10708,
  [SMALL_STATE(313)] = 10719,
  [SMALL_STATE(314)] = 10734,
  [SMALL_STATE(315)] = 10751,
  [SMALL_STATE(316)] = 10762,
  [SMALL_STATE(317)] = 10777,
  [SMALL_STATE(318)] = 10792,
  [SMALL_STATE(319)] = 10807,
  [SMALL_STATE(320)] = 10822,
  [SMALL_STATE(321)] = 10837,
  [SMALL_STATE(322)] = 10852,
  [SMALL_STATE(323)] = 10863,
  [SMALL_STATE(324)] = 10878,
  [SMALL_STATE(325)] = 10893,
  [SMALL_STATE(326)] = 10908,
  [SMALL_STATE(327)] = 10923,
  [SMALL_STATE(328)] = 10938,
  [SMALL_STATE(329)] = 10953,
  [SMALL_STATE(330)] = 10968,
  [SMALL_STATE(331)] = 10983,
  [SMALL_STATE(332)] = 10998,
  [SMALL_STATE(333)] = 11013,
  [SMALL_STATE(334)] = 11028,
  [SMALL_STATE(335)] = 11039,
  [SMALL_STATE(336)] = 11050,
  [SMALL_STATE(337)] = 11065,
  [SMALL_STATE(338)] = 11080,
  [SMALL_STATE(339)] = 11095,
  [SMALL_STATE(340)] = 11110,
  [SMALL_STATE(341)] = 11125,
  [SMALL_STATE(342)] = 11140,
  [SMALL_STATE(343)] = 11155,
  [SMALL_STATE(344)] = 11166,
  [SMALL_STATE(345)] = 11181,
  [SMALL_STATE(346)] = 11195,
  [SMALL_STATE(347)] = 11209,
  [SMALL_STATE(348)] = 11223,
  [SMALL_STATE(349)] = 11237,
  [SMALL_STATE(350)] = 11251,
  [SMALL_STATE(351)] = 11265,
  [SMALL_STATE(352)] = 11279,
  [SMALL_STATE(353)] = 11289,
  [SMALL_STATE(354)] = 11303,
  [SMALL_STATE(355)] = 11317,
  [SMALL_STATE(356)] = 11327,
  [SMALL_STATE(357)] = 11341,
  [SMALL_STATE(358)] = 11353,
  [SMALL_STATE(359)] = 11363,
  [SMALL_STATE(360)] = 11377,
  [SMALL_STATE(361)] = 11391,
  [SMALL_STATE(362)] = 11405,
  [SMALL_STATE(363)] = 11419,
  [SMALL_STATE(364)] = 11433,
  [SMALL_STATE(365)] = 11447,
  [SMALL_STATE(366)] = 11461,
  [SMALL_STATE(367)] = 11472,
  [SMALL_STATE(368)] = 11483,
  [SMALL_STATE(369)] = 11494,
  [SMALL_STATE(370)] = 11505,
  [SMALL_STATE(371)] = 11516,
  [SMALL_STATE(372)] = 11527,
  [SMALL_STATE(373)] = 11538,
  [SMALL_STATE(374)] = 11549,
  [SMALL_STATE(375)] = 11560,
  [SMALL_STATE(376)] = 11571,
  [SMALL_STATE(377)] = 11582,
  [SMALL_STATE(378)] = 11593,
  [SMALL_STATE(379)] = 11601,
  [SMALL_STATE(380)] = 11609,
  [SMALL_STATE(381)] = 11617,
  [SMALL_STATE(382)] = 11625,
  [SMALL_STATE(383)] = 11633,
  [SMALL_STATE(384)] = 11641,
  [SMALL_STATE(385)] = 11649,
  [SMALL_STATE(386)] = 11657,
  [SMALL_STATE(387)] = 11665,
  [SMALL_STATE(388)] = 11673,
  [SMALL_STATE(389)] = 11681,
  [SMALL_STATE(390)] = 11689,
  [SMALL_STATE(391)] = 11697,
  [SMALL_STATE(392)] = 11705,
  [SMALL_STATE(393)] = 11713,
  [SMALL_STATE(394)] = 11721,
  [SMALL_STATE(395)] = 11729,
  [SMALL_STATE(396)] = 11737,
  [SMALL_STATE(397)] = 11745,
  [SMALL_STATE(398)] = 11753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(220),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(291),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(386),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(215),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(201),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(88),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(310),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(389),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(384),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(313),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(206),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(290),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(204),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(81),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(212),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(78),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(286),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(394),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(214),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(201),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(88),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(310),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(389),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(384),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(49),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(313),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(330),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(200),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(197),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(204),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(70),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(382),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(185),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(80),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(304),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(326),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(162),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(163),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(73),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(61),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(185),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(285),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(382),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(182),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(80),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(304),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(326),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(162),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(163),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(73),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(61),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(182),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(285),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2), SHIFT_REPEAT(36),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 6),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 4),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 5),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 5),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 15),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 15),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1011] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(365),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [1016] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(335),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(368),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(377),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1031] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(363),
  [1034] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(352),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(47),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(58),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2),
  [1123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2), SHIFT_REPEAT(321),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2), SHIFT_REPEAT(327),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(219),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(345),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(72),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1259] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_styled_external_scanner_create(void);
void tree_sitter_styled_external_scanner_destroy(void *);
bool tree_sitter_styled_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_styled_external_scanner_serialize(void *, char *);
void tree_sitter_styled_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_styled(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_styled_external_scanner_create,
      tree_sitter_styled_external_scanner_destroy,
      tree_sitter_styled_external_scanner_scan,
      tree_sitter_styled_external_scanner_serialize,
      tree_sitter_styled_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
