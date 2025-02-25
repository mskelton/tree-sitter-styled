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
#define STATE_COUNT 409
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
    [1] = sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
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
    [2] = sym_class_name,
  },
  [12] = {
    [2] = alias_sym_tag_name,
  },
  [13] = {
    [2] = alias_sym_id_name,
  },
  [14] = {
    [1] = alias_sym_namespace_name,
  },
  [15] = {
    [0] = alias_sym_property_name,
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
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
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
  [37] = 36,
  [38] = 36,
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
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 53,
  [61] = 48,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 50,
  [66] = 63,
  [67] = 55,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 62,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 56,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 76,
  [83] = 69,
  [84] = 80,
  [85] = 85,
  [86] = 64,
  [87] = 57,
  [88] = 71,
  [89] = 73,
  [90] = 58,
  [91] = 91,
  [92] = 85,
  [93] = 59,
  [94] = 74,
  [95] = 79,
  [96] = 96,
  [97] = 75,
  [98] = 96,
  [99] = 99,
  [100] = 51,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 101,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 117,
  [127] = 120,
  [128] = 122,
  [129] = 123,
  [130] = 125,
  [131] = 119,
  [132] = 125,
  [133] = 120,
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
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 42,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 41,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 41,
  [191] = 42,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 198,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 209,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 116,
  [220] = 179,
  [221] = 221,
  [222] = 165,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 164,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 223,
  [231] = 231,
  [232] = 232,
  [233] = 178,
  [234] = 185,
  [235] = 188,
  [236] = 236,
  [237] = 180,
  [238] = 116,
  [239] = 41,
  [240] = 42,
  [241] = 189,
  [242] = 187,
  [243] = 186,
  [244] = 244,
  [245] = 184,
  [246] = 181,
  [247] = 183,
  [248] = 182,
  [249] = 165,
  [250] = 164,
  [251] = 179,
  [252] = 189,
  [253] = 178,
  [254] = 42,
  [255] = 41,
  [256] = 188,
  [257] = 187,
  [258] = 186,
  [259] = 185,
  [260] = 184,
  [261] = 183,
  [262] = 182,
  [263] = 180,
  [264] = 181,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 265,
  [271] = 271,
  [272] = 272,
  [273] = 268,
  [274] = 266,
  [275] = 268,
  [276] = 267,
  [277] = 277,
  [278] = 269,
  [279] = 272,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 271,
  [286] = 286,
  [287] = 287,
  [288] = 287,
  [289] = 289,
  [290] = 290,
  [291] = 284,
  [292] = 284,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 300,
  [302] = 298,
  [303] = 294,
  [304] = 304,
  [305] = 296,
  [306] = 306,
  [307] = 300,
  [308] = 295,
  [309] = 297,
  [310] = 295,
  [311] = 311,
  [312] = 299,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 53,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 75,
  [324] = 324,
  [325] = 69,
  [326] = 326,
  [327] = 327,
  [328] = 313,
  [329] = 329,
  [330] = 330,
  [331] = 329,
  [332] = 330,
  [333] = 327,
  [334] = 334,
  [335] = 313,
  [336] = 329,
  [337] = 330,
  [338] = 315,
  [339] = 316,
  [340] = 313,
  [341] = 327,
  [342] = 330,
  [343] = 329,
  [344] = 344,
  [345] = 327,
  [346] = 327,
  [347] = 329,
  [348] = 330,
  [349] = 313,
  [350] = 315,
  [351] = 351,
  [352] = 351,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 355,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 326,
  [365] = 359,
  [366] = 165,
  [367] = 353,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 360,
  [373] = 370,
  [374] = 360,
  [375] = 317,
  [376] = 376,
  [377] = 165,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 381,
  [385] = 385,
  [386] = 385,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 389,
  [391] = 389,
  [392] = 392,
  [393] = 388,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 398,
  [400] = 397,
  [401] = 401,
  [402] = 398,
  [403] = 403,
  [404] = 396,
  [405] = 395,
  [406] = 406,
  [407] = 407,
  [408] = 395,
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
      if (lookahead == '+') ADVANCE(189);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(28);
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
  [19] = {.lex_state = 136, .external_lex_state = 2},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 136, .external_lex_state = 2},
  [22] = {.lex_state = 136, .external_lex_state = 2},
  [23] = {.lex_state = 136, .external_lex_state = 2},
  [24] = {.lex_state = 136, .external_lex_state = 2},
  [25] = {.lex_state = 5, .external_lex_state = 3},
  [26] = {.lex_state = 136, .external_lex_state = 2},
  [27] = {.lex_state = 136, .external_lex_state = 2},
  [28] = {.lex_state = 136, .external_lex_state = 2},
  [29] = {.lex_state = 136, .external_lex_state = 2},
  [30] = {.lex_state = 136, .external_lex_state = 2},
  [31] = {.lex_state = 136, .external_lex_state = 2},
  [32] = {.lex_state = 136, .external_lex_state = 2},
  [33] = {.lex_state = 136, .external_lex_state = 2},
  [34] = {.lex_state = 136, .external_lex_state = 2},
  [35] = {.lex_state = 136, .external_lex_state = 2},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 8, .external_lex_state = 3},
  [42] = {.lex_state = 8, .external_lex_state = 3},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 8, .external_lex_state = 3},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 136, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 3},
  [50] = {.lex_state = 136, .external_lex_state = 2},
  [51] = {.lex_state = 136, .external_lex_state = 2},
  [52] = {.lex_state = 136, .external_lex_state = 2},
  [53] = {.lex_state = 136, .external_lex_state = 2},
  [54] = {.lex_state = 136, .external_lex_state = 2},
  [55] = {.lex_state = 136, .external_lex_state = 2},
  [56] = {.lex_state = 136, .external_lex_state = 2},
  [57] = {.lex_state = 136, .external_lex_state = 2},
  [58] = {.lex_state = 136, .external_lex_state = 2},
  [59] = {.lex_state = 136, .external_lex_state = 2},
  [60] = {.lex_state = 136, .external_lex_state = 2},
  [61] = {.lex_state = 136, .external_lex_state = 2},
  [62] = {.lex_state = 136, .external_lex_state = 2},
  [63] = {.lex_state = 136, .external_lex_state = 2},
  [64] = {.lex_state = 136, .external_lex_state = 2},
  [65] = {.lex_state = 136, .external_lex_state = 2},
  [66] = {.lex_state = 136, .external_lex_state = 2},
  [67] = {.lex_state = 136, .external_lex_state = 2},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 136, .external_lex_state = 2},
  [70] = {.lex_state = 136, .external_lex_state = 2},
  [71] = {.lex_state = 136, .external_lex_state = 2},
  [72] = {.lex_state = 136, .external_lex_state = 2},
  [73] = {.lex_state = 136, .external_lex_state = 2},
  [74] = {.lex_state = 136, .external_lex_state = 2},
  [75] = {.lex_state = 136, .external_lex_state = 2},
  [76] = {.lex_state = 136, .external_lex_state = 2},
  [77] = {.lex_state = 136, .external_lex_state = 2},
  [78] = {.lex_state = 136, .external_lex_state = 2},
  [79] = {.lex_state = 136, .external_lex_state = 2},
  [80] = {.lex_state = 136, .external_lex_state = 2},
  [81] = {.lex_state = 136, .external_lex_state = 2},
  [82] = {.lex_state = 136, .external_lex_state = 2},
  [83] = {.lex_state = 136, .external_lex_state = 2},
  [84] = {.lex_state = 136, .external_lex_state = 2},
  [85] = {.lex_state = 136, .external_lex_state = 2},
  [86] = {.lex_state = 136, .external_lex_state = 2},
  [87] = {.lex_state = 136, .external_lex_state = 2},
  [88] = {.lex_state = 136, .external_lex_state = 2},
  [89] = {.lex_state = 136, .external_lex_state = 2},
  [90] = {.lex_state = 136, .external_lex_state = 2},
  [91] = {.lex_state = 13, .external_lex_state = 3},
  [92] = {.lex_state = 136, .external_lex_state = 2},
  [93] = {.lex_state = 136, .external_lex_state = 2},
  [94] = {.lex_state = 136, .external_lex_state = 2},
  [95] = {.lex_state = 136, .external_lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 136, .external_lex_state = 2},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 136, .external_lex_state = 2},
  [100] = {.lex_state = 136, .external_lex_state = 2},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 13, .external_lex_state = 3},
  [108] = {.lex_state = 13, .external_lex_state = 3},
  [109] = {.lex_state = 13, .external_lex_state = 3},
  [110] = {.lex_state = 13, .external_lex_state = 3},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 13, .external_lex_state = 3},
  [113] = {.lex_state = 13, .external_lex_state = 3},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 13, .external_lex_state = 3},
  [137] = {.lex_state = 13, .external_lex_state = 3},
  [138] = {.lex_state = 13, .external_lex_state = 3},
  [139] = {.lex_state = 13, .external_lex_state = 3},
  [140] = {.lex_state = 13, .external_lex_state = 3},
  [141] = {.lex_state = 13, .external_lex_state = 3},
  [142] = {.lex_state = 13, .external_lex_state = 3},
  [143] = {.lex_state = 13, .external_lex_state = 3},
  [144] = {.lex_state = 13, .external_lex_state = 3},
  [145] = {.lex_state = 13, .external_lex_state = 3},
  [146] = {.lex_state = 13, .external_lex_state = 3},
  [147] = {.lex_state = 13, .external_lex_state = 3},
  [148] = {.lex_state = 13, .external_lex_state = 3},
  [149] = {.lex_state = 13, .external_lex_state = 3},
  [150] = {.lex_state = 13, .external_lex_state = 3},
  [151] = {.lex_state = 13, .external_lex_state = 3},
  [152] = {.lex_state = 13, .external_lex_state = 3},
  [153] = {.lex_state = 13, .external_lex_state = 3},
  [154] = {.lex_state = 13, .external_lex_state = 3},
  [155] = {.lex_state = 13, .external_lex_state = 3},
  [156] = {.lex_state = 13, .external_lex_state = 3},
  [157] = {.lex_state = 13, .external_lex_state = 3},
  [158] = {.lex_state = 13, .external_lex_state = 3},
  [159] = {.lex_state = 13, .external_lex_state = 3},
  [160] = {.lex_state = 13, .external_lex_state = 3},
  [161] = {.lex_state = 13, .external_lex_state = 3},
  [162] = {.lex_state = 13, .external_lex_state = 3},
  [163] = {.lex_state = 13, .external_lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 13, .external_lex_state = 3},
  [167] = {.lex_state = 13, .external_lex_state = 3},
  [168] = {.lex_state = 13, .external_lex_state = 3},
  [169] = {.lex_state = 13, .external_lex_state = 3},
  [170] = {.lex_state = 13, .external_lex_state = 3},
  [171] = {.lex_state = 13, .external_lex_state = 3},
  [172] = {.lex_state = 13, .external_lex_state = 3},
  [173] = {.lex_state = 13, .external_lex_state = 3},
  [174] = {.lex_state = 13, .external_lex_state = 3},
  [175] = {.lex_state = 13, .external_lex_state = 3},
  [176] = {.lex_state = 13, .external_lex_state = 3},
  [177] = {.lex_state = 13, .external_lex_state = 3},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 13, .external_lex_state = 3},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 13, .external_lex_state = 3},
  [200] = {.lex_state = 13, .external_lex_state = 3},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 13, .external_lex_state = 3},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 136, .external_lex_state = 3},
  [209] = {.lex_state = 136, .external_lex_state = 3},
  [210] = {.lex_state = 136, .external_lex_state = 3},
  [211] = {.lex_state = 136, .external_lex_state = 3},
  [212] = {.lex_state = 33},
  [213] = {.lex_state = 33},
  [214] = {.lex_state = 136, .external_lex_state = 3},
  [215] = {.lex_state = 136, .external_lex_state = 3},
  [216] = {.lex_state = 136, .external_lex_state = 3},
  [217] = {.lex_state = 136, .external_lex_state = 3},
  [218] = {.lex_state = 136, .external_lex_state = 3},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 136, .external_lex_state = 3},
  [225] = {.lex_state = 136, .external_lex_state = 3},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 136, .external_lex_state = 3},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 18},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 16},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 18},
  [247] = {.lex_state = 18},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 23},
  [250] = {.lex_state = 23},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 16},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 48},
  [266] = {.lex_state = 26},
  [267] = {.lex_state = 136},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 26},
  [270] = {.lex_state = 48},
  [271] = {.lex_state = 48},
  [272] = {.lex_state = 26},
  [273] = {.lex_state = 16},
  [274] = {.lex_state = 26},
  [275] = {.lex_state = 16},
  [276] = {.lex_state = 136},
  [277] = {.lex_state = 26},
  [278] = {.lex_state = 26},
  [279] = {.lex_state = 26},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 26},
  [282] = {.lex_state = 26},
  [283] = {.lex_state = 26},
  [284] = {.lex_state = 49},
  [285] = {.lex_state = 49},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 26},
  [288] = {.lex_state = 26},
  [289] = {.lex_state = 26},
  [290] = {.lex_state = 26},
  [291] = {.lex_state = 49},
  [292] = {.lex_state = 49},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 48},
  [297] = {.lex_state = 26},
  [298] = {.lex_state = 136},
  [299] = {.lex_state = 136},
  [300] = {.lex_state = 48},
  [301] = {.lex_state = 48},
  [302] = {.lex_state = 136},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 48},
  [306] = {.lex_state = 31},
  [307] = {.lex_state = 48},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 26},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 136},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 136},
  [316] = {.lex_state = 26},
  [317] = {.lex_state = 48},
  [318] = {.lex_state = 26},
  [319] = {.lex_state = 136},
  [320] = {.lex_state = 26},
  [321] = {.lex_state = 136},
  [322] = {.lex_state = 136},
  [323] = {.lex_state = 26},
  [324] = {.lex_state = 136},
  [325] = {.lex_state = 26},
  [326] = {.lex_state = 48},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 2},
  [334] = {.lex_state = 26},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 1},
  [338] = {.lex_state = 136},
  [339] = {.lex_state = 26},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 2},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 2},
  [344] = {.lex_state = 136},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 2},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 1},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 136},
  [351] = {.lex_state = 136},
  [352] = {.lex_state = 136},
  [353] = {.lex_state = 48},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 136},
  [356] = {.lex_state = 136},
  [357] = {.lex_state = 136},
  [358] = {.lex_state = 136},
  [359] = {.lex_state = 49},
  [360] = {.lex_state = 136},
  [361] = {.lex_state = 136},
  [362] = {.lex_state = 49},
  [363] = {.lex_state = 26},
  [364] = {.lex_state = 49},
  [365] = {.lex_state = 49},
  [366] = {.lex_state = 24},
  [367] = {.lex_state = 49},
  [368] = {.lex_state = 136},
  [369] = {.lex_state = 136},
  [370] = {.lex_state = 49},
  [371] = {.lex_state = 136},
  [372] = {.lex_state = 136},
  [373] = {.lex_state = 49},
  [374] = {.lex_state = 136},
  [375] = {.lex_state = 49},
  [376] = {.lex_state = 136},
  [377] = {.lex_state = 44},
  [378] = {.lex_state = 34},
  [379] = {.lex_state = 136},
  [380] = {.lex_state = 26},
  [381] = {.lex_state = 136},
  [382] = {.lex_state = 136},
  [383] = {.lex_state = 136},
  [384] = {.lex_state = 136},
  [385] = {.lex_state = 136},
  [386] = {.lex_state = 136},
  [387] = {.lex_state = 136},
  [388] = {.lex_state = 136},
  [389] = {.lex_state = 46},
  [390] = {.lex_state = 46},
  [391] = {.lex_state = 46},
  [392] = {.lex_state = 136},
  [393] = {.lex_state = 136},
  [394] = {.lex_state = 136},
  [395] = {.lex_state = 136},
  [396] = {.lex_state = 136},
  [397] = {.lex_state = 136},
  [398] = {.lex_state = 136},
  [399] = {.lex_state = 136},
  [400] = {.lex_state = 136},
  [401] = {.lex_state = 136},
  [402] = {.lex_state = 136},
  [403] = {.lex_state = 136},
  [404] = {.lex_state = 136},
  [405] = {.lex_state = 136},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 136},
  [408] = {.lex_state = 136},
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
    [sym_stylesheet] = STATE(407),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(386),
    [sym__selector] = STATE(210),
    [sym_universal_selector] = STATE(210),
    [sym_class_selector] = STATE(210),
    [sym_pseudo_class_selector] = STATE(210),
    [sym_pseudo_element_selector] = STATE(210),
    [sym_id_selector] = STATE(210),
    [sym_attribute_selector] = STATE(210),
    [sym_child_selector] = STATE(210),
    [sym_descendant_selector] = STATE(210),
    [sym_sibling_selector] = STATE(210),
    [sym_adjacent_sibling_selector] = STATE(210),
    [sym_namespace_selector] = STATE(210),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(210),
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
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_at_keyword] = ACTIONS(47),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(49),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(398), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [110] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(399), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [220] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(408), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [330] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(395), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [440] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(402), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [550] = 28,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(53), 1,
      anon_sym_ATimport,
    ACTIONS(55), 1,
      anon_sym_ATmedia,
    ACTIONS(57), 1,
      anon_sym_ATcharset,
    ACTIONS(59), 1,
      anon_sym_ATnamespace,
    ACTIONS(65), 1,
      anon_sym_ATsupports,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      sym_at_keyword,
    ACTIONS(71), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_selectors,
    STATE(405), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(61), 2,
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
    STATE(210), 13,
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
  [660] = 27,
    ACTIONS(83), 1,
      anon_sym_ATimport,
    ACTIONS(86), 1,
      anon_sym_ATmedia,
    ACTIONS(89), 1,
      anon_sym_ATcharset,
    ACTIONS(92), 1,
      anon_sym_ATnamespace,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_ATsupports,
    ACTIONS(103), 1,
      sym_nesting_selector,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(112), 1,
      anon_sym_COLON_COLON,
    ACTIONS(115), 1,
      anon_sym_POUND,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_GT,
    ACTIONS(124), 1,
      anon_sym_TILDE,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(130), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(142), 1,
      sym_at_keyword,
    ACTIONS(145), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(148), 1,
      sym__pseudo_class_selector_colon,
    STATE(385), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(95), 2,
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
    STATE(210), 13,
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
  [767] = 27,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_ATimport,
    ACTIONS(156), 1,
      anon_sym_ATmedia,
    ACTIONS(159), 1,
      anon_sym_ATcharset,
    ACTIONS(162), 1,
      anon_sym_ATnamespace,
    ACTIONS(168), 1,
      anon_sym_ATsupports,
    ACTIONS(171), 1,
      sym_nesting_selector,
    ACTIONS(174), 1,
      anon_sym_STAR,
    ACTIONS(177), 1,
      anon_sym_DOT,
    ACTIONS(180), 1,
      anon_sym_COLON_COLON,
    ACTIONS(183), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      anon_sym_GT,
    ACTIONS(192), 1,
      anon_sym_TILDE,
    ACTIONS(195), 1,
      anon_sym_PLUS,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_at_keyword,
    ACTIONS(213), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(216), 1,
      sym__pseudo_class_selector_colon,
    STATE(386), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(165), 2,
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
    STATE(210), 13,
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
  [873] = 27,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_at_keyword,
    ACTIONS(49), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(386), 1,
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
    STATE(210), 13,
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
  [979] = 28,
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
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(221), 1,
      sym_nesting_selector,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_PLUS,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_LBRACK2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(39), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(46), 1,
      sym_string_value,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(211), 12,
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
  [1083] = 28,
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
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_PLUS,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_LBRACK2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      sym_nesting_selector,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(46), 1,
      sym_string_value,
    STATE(195), 9,
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
  [1187] = 27,
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
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_PLUS,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      anon_sym_LBRACK2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(255), 1,
      sym_nesting_selector,
    STATE(46), 1,
      sym_string_value,
    STATE(68), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(195), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(218), 12,
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
  [1288] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_LPAREN2,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(63), 1,
      sym_block,
    STATE(102), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(266), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
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
  [1367] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      sym_important,
    ACTIONS(281), 1,
      anon_sym_LPAREN2,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_plain_value,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(363), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(295), 10,
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
  [1434] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(281), 1,
      anon_sym_LPAREN2,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(299), 1,
      sym_important,
    ACTIONS(301), 1,
      sym_plain_value,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(363), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(310), 10,
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
  [1501] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(313), 1,
      sym_important,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1573] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    ACTIONS(319), 1,
      sym_important,
    STATE(96), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1642] = 17,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(321), 1,
      sym_nesting_selector,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(216), 13,
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
  [1707] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(329), 1,
      sym_important,
    STATE(98), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [1776] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(331), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(148), 13,
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
  [1838] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(333), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(170), 13,
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
  [1900] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(335), 1,
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
  [1962] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(337), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(214), 13,
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
  [2024] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(343), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(341), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(339), 10,
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
  [2070] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(349), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(169), 13,
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
  [2132] = 17,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(351), 1,
      sym_nesting_selector,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(197), 1,
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
  [2196] = 17,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(351), 1,
      sym_nesting_selector,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(199), 1,
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
  [2260] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(357), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(149), 13,
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
  [2322] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(359), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(150), 13,
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
  [2384] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(361), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(224), 13,
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
  [2446] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(172), 13,
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
  [2508] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(365), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(225), 13,
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
  [2570] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(367), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(159), 13,
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
  [2632] = 16,
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
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(369), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(151), 13,
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
  [2694] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(315), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [2759] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(338), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [2824] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(350), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [2889] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(371), 1,
      aux_sym_pseudo_class_arguments_repeat1,
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
  [2953] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(361), 1,
      aux_sym_pseudo_class_arguments_repeat1,
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
  [3017] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(387), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(385), 16,
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
  [3053] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(391), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(389), 16,
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
  [3089] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      sym_important,
    STATE(44), 1,
      aux_sym_declaration_repeat1,
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
  [3153] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_POUND,
    ACTIONS(407), 1,
      sym_important,
    ACTIONS(410), 1,
      anon_sym_LPAREN2,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      aux_sym_integer_value_token1,
    ACTIONS(422), 1,
      aux_sym_float_value_token1,
    ACTIONS(425), 1,
      anon_sym_LBRACK2,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(431), 1,
      sym_plain_value,
    ACTIONS(434), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(44), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(402), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
  [3215] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      sym_important,
    ACTIONS(445), 1,
      anon_sym_LPAREN2,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      aux_sym_integer_value_token1,
    ACTIONS(457), 1,
      aux_sym_float_value_token1,
    ACTIONS(460), 1,
      anon_sym_LBRACK2,
    ACTIONS(463), 1,
      sym_identifier,
    ACTIONS(466), 1,
      sym_plain_value,
    ACTIONS(469), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(437), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
  [3275] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(474), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(478), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(472), 10,
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
  [3315] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(480), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
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
  [3375] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(482), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3408] = 5,
    STATE(49), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(490), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(486), 19,
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
  [3445] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(493), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(495), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3478] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(497), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(499), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3511] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(503), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3544] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(507), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3577] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(501), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(503), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3610] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(509), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(511), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3643] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(515), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3676] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(517), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(519), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3709] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(521), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(523), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3742] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(525), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(527), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3775] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(505), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(507), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3808] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(482), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3841] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(529), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(531), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3874] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(533), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(535), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3907] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(537), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3940] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(493), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(495), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3973] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(533), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(535), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4006] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(509), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(511), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4039] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [4098] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(545), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(543), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4131] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(547), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(549), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4164] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(553), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4197] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(529), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(531), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4230] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(555), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(557), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4263] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(559), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(561), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4296] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(563), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(565), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4329] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(569), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(567), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4362] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(573), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(571), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4395] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(513), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(515), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4428] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(575), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(577), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4461] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(581), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4494] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(573), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(571), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4527] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(569), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(567), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4560] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(545), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(543), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4593] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(581), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4626] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(585), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(583), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4659] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(539), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(537), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4692] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(517), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(519), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4725] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(551), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(553), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4758] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(555), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(557), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4791] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(521), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(523), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4824] = 5,
    STATE(49), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(591), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(587), 19,
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
  [4861] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(585), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(583), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4894] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(525), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(527), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4927] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(559), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(561), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4960] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(575), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(577), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [4993] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      sym_important,
    STATE(44), 1,
      aux_sym_declaration_repeat1,
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
  [5054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(563), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(565), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5087] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_plain_value,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(597), 1,
      sym_important,
    STATE(44), 1,
      aux_sym_declaration_repeat1,
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
  [5148] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(533), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(535), 16,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5181] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(497), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(499), 16,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [5214] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5272] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5330] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5388] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5446] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5504] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5559] = 5,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_pseudo_element_arguments,
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
  [5594] = 5,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(615), 18,
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
  [5629] = 5,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(621), 18,
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
  [5664] = 5,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(627), 18,
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
  [5699] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(633), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(341), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(347), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5740] = 5,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(635), 18,
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
  [5775] = 5,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(641), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(639), 18,
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
  [5810] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_important,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(247), 1,
      sym_plain_value,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(105), 1,
      aux_sym_postcss_statement_repeat1,
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
  [5865] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(643), 1,
      sym_important,
    ACTIONS(645), 1,
      sym_plain_value,
    STATE(193), 10,
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
  [5917] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      sym_arguments,
    ACTIONS(347), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(341), 11,
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
  [5953] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(647), 1,
      sym_important,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(653), 1,
      sym_plain_value,
    STATE(275), 10,
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
  [6005] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(655), 1,
      sym_important,
    ACTIONS(657), 1,
      sym_plain_value,
    STATE(273), 10,
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
  [6057] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_POUND,
    ACTIONS(661), 1,
      sym_important,
    ACTIONS(663), 1,
      anon_sym_LPAREN2,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      aux_sym_integer_value_token1,
    ACTIONS(671), 1,
      aux_sym_float_value_token1,
    ACTIONS(673), 1,
      anon_sym_LBRACK2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(677), 1,
      sym_plain_value,
    ACTIONS(679), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(206), 10,
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
  [6109] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      anon_sym_LPAREN2,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      aux_sym_integer_value_token1,
    ACTIONS(671), 1,
      aux_sym_float_value_token1,
    ACTIONS(673), 1,
      anon_sym_LBRACK2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(679), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(681), 1,
      sym_important,
    ACTIONS(683), 1,
      sym_plain_value,
    STATE(243), 10,
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
  [6161] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(685), 1,
      sym_important,
    ACTIONS(687), 1,
      sym_plain_value,
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
  [6213] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(689), 1,
      sym_important,
    ACTIONS(691), 1,
      sym_plain_value,
    STATE(20), 10,
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
  [6265] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(693), 1,
      sym_important,
    ACTIONS(695), 1,
      sym_plain_value,
    STATE(303), 10,
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
  [6317] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(697), 1,
      sym_important,
    ACTIONS(699), 1,
      sym_plain_value,
    STATE(286), 10,
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
  [6369] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      sym_important,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(295), 1,
      sym_plain_value,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    STATE(295), 10,
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
  [6421] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(701), 1,
      sym_important,
    ACTIONS(703), 1,
      sym_plain_value,
    STATE(268), 10,
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
  [6473] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(705), 1,
      sym_important,
    ACTIONS(707), 1,
      sym_plain_value,
    STATE(258), 10,
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
  [6525] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(709), 1,
      sym_important,
    ACTIONS(711), 1,
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
  [6577] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(713), 1,
      sym_important,
    ACTIONS(715), 1,
      sym_plain_value,
    STATE(294), 10,
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
  [6629] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(299), 1,
      sym_important,
    ACTIONS(301), 1,
      sym_plain_value,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    STATE(310), 10,
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
  [6681] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      anon_sym_LPAREN2,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(669), 1,
      aux_sym_integer_value_token1,
    ACTIONS(671), 1,
      aux_sym_float_value_token1,
    ACTIONS(673), 1,
      anon_sym_LBRACK2,
    ACTIONS(675), 1,
      sym_identifier,
    ACTIONS(679), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(717), 1,
      sym_important,
    ACTIONS(719), 1,
      sym_plain_value,
    STATE(205), 10,
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
  [6733] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(721), 1,
      sym_important,
    ACTIONS(723), 1,
      sym_plain_value,
    STATE(308), 10,
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
  [6785] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(725), 1,
      sym_important,
    ACTIONS(727), 1,
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
  [6837] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      aux_sym_integer_value_token1,
    ACTIONS(289), 1,
      aux_sym_float_value_token1,
    ACTIONS(291), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(649), 1,
      anon_sym_LPAREN2,
    ACTIONS(651), 1,
      sym_identifier,
    ACTIONS(729), 1,
      sym_important,
    ACTIONS(731), 1,
      sym_plain_value,
    STATE(311), 10,
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
  [6889] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LPAREN2,
    ACTIONS(239), 1,
      aux_sym_integer_value_token1,
    ACTIONS(241), 1,
      aux_sym_float_value_token1,
    ACTIONS(249), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 1,
      anon_sym_LBRACK2,
    ACTIONS(315), 1,
      sym_identifier,
    ACTIONS(733), 1,
      sym_important,
    ACTIONS(735), 1,
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
  [6941] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(739), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(737), 18,
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
  [6970] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(743), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(741), 18,
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
  [6999] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(745), 18,
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
  [7028] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(627), 18,
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
  [7057] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(751), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(749), 18,
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
  [7086] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(753), 17,
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
  [7117] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(761), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(759), 18,
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
  [7146] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(763), 18,
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
  [7175] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(767), 18,
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
  [7204] = 3,
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
  [7233] = 3,
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
  [7262] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(615), 18,
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
  [7291] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(779), 17,
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
  [7322] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(783), 17,
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
  [7353] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(787), 17,
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
  [7384] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(791), 17,
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
  [7415] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(795), 18,
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
  [7444] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(799), 18,
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
  [7473] = 3,
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
  [7502] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(807), 18,
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
  [7531] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(811), 18,
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
  [7560] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(815), 18,
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
  [7589] = 3,
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
  [7618] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(823), 17,
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
  [7649] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(827), 18,
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
  [7678] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(833), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(831), 18,
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
  [7707] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(835), 18,
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
  [7736] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(839), 18,
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
  [7765] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_unit,
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
  [7798] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_unit,
    ACTIONS(851), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(849), 12,
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
  [7831] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(857), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(855), 18,
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
  [7860] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(859), 18,
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
  [7889] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(339), 18,
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
  [7918] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(863), 17,
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
  [7949] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(867), 17,
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
  [7980] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(389), 18,
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
  [8009] = 4,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(873), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(871), 17,
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
  [8040] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(877), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(875), 18,
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
  [8069] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(879), 18,
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
  [8098] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(883), 18,
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
  [8127] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(887), 18,
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
  [8156] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(385), 18,
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
  [8185] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(891), 12,
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
  [8215] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(895), 12,
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
  [8245] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(901), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(899), 12,
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
  [8275] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(905), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(903), 12,
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
  [8305] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(907), 12,
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
  [8335] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(913), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(911), 12,
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
  [8365] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(917), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(915), 12,
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
  [8395] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(921), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(919), 12,
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
  [8425] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(925), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(923), 12,
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
  [8455] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(929), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(927), 12,
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
  [8485] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(933), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(931), 12,
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
  [8515] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(937), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(935), 12,
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
  [8545] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(387), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(385), 12,
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
  [8575] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(391), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(389), 12,
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
  [8605] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8638] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(943), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(402), 10,
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
  [8671] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8704] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(947), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(945), 10,
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
  [8737] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_STAR,
    ACTIONS(311), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(951), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(949), 10,
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
  [8770] = 5,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(953), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(472), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8800] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8830] = 5,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(957), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(472), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8860] = 5,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(957), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(339), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8890] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_SEMI,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8920] = 5,
    ACTIONS(955), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(953), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(339), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8950] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [8980] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SEMI,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
      anon_sym_DOLLAR_LBRACE,
  [9010] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(963), 1,
      anon_sym_SEMI,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(969), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(309), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9049] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(973), 1,
      anon_sym_SEMI,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(965), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(969), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(297), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9088] = 9,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(975), 1,
      anon_sym_SEMI,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9123] = 14,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    STATE(361), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9167] = 3,
    ACTIONS(997), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 12,
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
  [9189] = 14,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9233] = 14,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    STATE(371), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9277] = 9,
    ACTIONS(1005), 1,
      anon_sym_host,
    ACTIONS(1009), 1,
      sym_escape_sequence,
    ACTIONS(1011), 1,
      sym_identifier,
    STATE(91), 1,
      aux_sym_class_name_repeat1,
    STATE(108), 1,
      sym_class_name,
    STATE(147), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1003), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9311] = 9,
    ACTIONS(1009), 1,
      sym_escape_sequence,
    ACTIONS(1011), 1,
      sym_identifier,
    ACTIONS(1015), 1,
      anon_sym_host,
    STATE(91), 1,
      aux_sym_class_name_repeat1,
    STATE(110), 1,
      sym_class_name,
    STATE(139), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1007), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1013), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9345] = 12,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1017), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9385] = 3,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 12,
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
  [9407] = 14,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9451] = 3,
    ACTIONS(1023), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 12,
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
  [9473] = 12,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(541), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9512] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_arguments,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(347), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9539] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(895), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(897), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9561] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(282), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9587] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1027), 1,
      sym_unit,
    ACTIONS(849), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(851), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9611] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(287), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9637] = 12,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9675] = 12,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9713] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym_unit,
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
  [9737] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(316), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9763] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(339), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9789] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(363), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9815] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(288), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9841] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(281), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9867] = 6,
    ACTIONS(267), 1,
      anon_sym_selector,
    ACTIONS(967), 1,
      anon_sym_LPAREN2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(304), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9893] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(891), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(893), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9914] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(919), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(921), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9935] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(931), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(933), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9956] = 11,
    ACTIONS(755), 1,
      anon_sym_DOT,
    ACTIONS(979), 1,
      anon_sym_COLON_COLON,
    ACTIONS(981), 1,
      anon_sym_POUND,
    ACTIONS(983), 1,
      anon_sym_LBRACK,
    ACTIONS(985), 1,
      anon_sym_GT,
    ACTIONS(987), 1,
      anon_sym_TILDE,
    ACTIONS(989), 1,
      anon_sym_PLUS,
    ACTIONS(991), 1,
      anon_sym_PIPE,
    ACTIONS(993), 1,
      sym__descendant_operator,
    ACTIONS(995), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9991] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(899), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(901), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10012] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SLASH,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
    STATE(264), 1,
      sym_arguments,
    ACTIONS(341), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10037] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(387), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10058] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(391), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10079] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(935), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(937), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10100] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(927), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(929), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10121] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(923), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(925), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10142] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SLASH,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    STATE(264), 1,
      sym_arguments,
    ACTIONS(341), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10171] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(915), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(917), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10192] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(903), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(905), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10213] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(913), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10234] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(909), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10255] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SLASH,
    ACTIONS(1041), 1,
      sym_unit,
    ACTIONS(849), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10277] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SLASH,
    ACTIONS(1043), 1,
      sym_unit,
    ACTIONS(843), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10299] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_SLASH,
    ACTIONS(895), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [10319] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_SLASH,
    ACTIONS(935), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10338] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_SLASH,
    ACTIONS(891), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10357] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(389), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10376] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    ACTIONS(385), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10395] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SLASH,
    ACTIONS(931), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10414] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_SLASH,
    ACTIONS(927), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10433] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_SLASH,
    ACTIONS(923), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10452] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_SLASH,
    ACTIONS(919), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10471] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_SLASH,
    ACTIONS(915), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10490] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_SLASH,
    ACTIONS(911), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10509] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_SLASH,
    ACTIONS(907), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10528] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_SLASH,
    ACTIONS(899), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10547] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_SLASH,
    ACTIONS(903), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10566] = 6,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym__js_statement,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1047), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(326), 2,
      sym__js_expression,
      sym__js_block,
  [10588] = 7,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1053), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_block,
    STATE(302), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [10612] = 7,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      sym_identifier,
    STATE(246), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(397), 2,
      sym_string_value,
      sym_call_expression,
  [10636] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1063), 1,
      anon_sym_RBRACK,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    STATE(360), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10660] = 6,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    ACTIONS(1071), 1,
      aux_sym_integer_value_token1,
    STATE(383), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1069), 2,
      sym_from,
      sym_to,
    STATE(272), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10682] = 6,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym__js_statement,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1073), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(326), 2,
      sym__js_expression,
      sym__js_block,
  [10704] = 6,
    ACTIONS(1075), 1,
      anon_sym_LBRACE,
    ACTIONS(1080), 1,
      sym__js_statement,
    STATE(271), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1078), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(326), 2,
      sym__js_expression,
      sym__js_block,
  [10726] = 6,
    ACTIONS(1071), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1083), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1069), 2,
      sym_from,
      sym_to,
    STATE(277), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10748] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1085), 1,
      anon_sym_RBRACK,
    STATE(374), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10772] = 7,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_block,
    STATE(298), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [10796] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1089), 1,
      anon_sym_RBRACK,
    STATE(372), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10820] = 7,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    ACTIONS(1057), 1,
      sym_identifier,
    STATE(246), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(400), 2,
      sym_string_value,
      sym_call_expression,
  [10844] = 6,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1096), 1,
      aux_sym_integer_value_token1,
    STATE(383), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1093), 2,
      sym_from,
      sym_to,
    STATE(277), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10866] = 6,
    ACTIONS(1071), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1069), 2,
      sym_from,
      sym_to,
    STATE(279), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10888] = 6,
    ACTIONS(1071), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1101), 1,
      anon_sym_RBRACE,
    STATE(383), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1069), 2,
      sym_from,
      sym_to,
    STATE(277), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10910] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1103), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10923] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1105), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10936] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1107), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10949] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10962] = 6,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    STATE(285), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [10983] = 6,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(1115), 1,
      anon_sym_LBRACE,
    ACTIONS(1118), 1,
      sym__js_statement,
    STATE(285), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11004] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11023] = 6,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      sym_block,
    STATE(352), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11044] = 6,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      sym_block,
    STATE(351), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11065] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1123), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11078] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1125), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11091] = 6,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11112] = 6,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    ACTIONS(1129), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11133] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1131), 1,
      anon_sym_RBRACK,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11151] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1133), 1,
      anon_sym_SEMI,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11169] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11187] = 5,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym__js_statement,
    STATE(265), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(326), 2,
      sym__js_expression,
      sym__js_block,
  [11205] = 5,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_SEMI,
    STATE(355), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11223] = 6,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1139), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11243] = 5,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(393), 2,
      sym_string_value,
      sym_call_expression,
  [11261] = 5,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    STATE(291), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11279] = 5,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    STATE(292), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11297] = 6,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1143), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11317] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1145), 1,
      anon_sym_SEMI,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11335] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1147), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11349] = 5,
    ACTIONS(1045), 1,
      anon_sym_LBRACE,
    ACTIONS(1049), 1,
      sym__js_statement,
    STATE(270), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(326), 2,
      sym__js_expression,
      sym__js_block,
  [11367] = 4,
    ACTIONS(1151), 1,
      aux_sym_integer_value_token1,
    STATE(380), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1149), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [11383] = 5,
    ACTIONS(1109), 1,
      anon_sym_LBRACE,
    ACTIONS(1113), 1,
      sym__js_statement,
    STATE(284), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(364), 2,
      sym__js_expression,
      sym__js_block,
  [11401] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11419] = 5,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_SEMI,
    STATE(358), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11437] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1157), 1,
      anon_sym_RPAREN,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11455] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_SLASH,
    ACTIONS(1159), 1,
      anon_sym_RBRACK,
    ACTIONS(1061), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11473] = 5,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(1161), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(388), 2,
      sym_string_value,
      sym_call_expression,
  [11491] = 4,
    ACTIONS(1163), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1165), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11506] = 4,
    ACTIONS(1167), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11521] = 4,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11536] = 4,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11551] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1174), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11562] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11573] = 4,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1147), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11588] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1179), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11599] = 4,
    STATE(91), 1,
      aux_sym_class_name_repeat1,
    STATE(166), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1009), 2,
      sym_escape_sequence,
      sym_identifier,
  [11614] = 4,
    STATE(91), 1,
      aux_sym_class_name_repeat1,
    STATE(144), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1009), 2,
      sym_escape_sequence,
      sym_identifier,
  [11629] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(565), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11640] = 4,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    STATE(324), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1017), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [11655] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11666] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1184), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [11677] = 4,
    ACTIONS(1186), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1188), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11692] = 4,
    ACTIONS(1186), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1165), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11707] = 4,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE,
    STATE(327), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1192), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11722] = 4,
    ACTIONS(1194), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1196), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11737] = 4,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE,
    STATE(341), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1198), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11752] = 4,
    ACTIONS(1190), 1,
      anon_sym_SQUOTE,
    STATE(328), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1200), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11767] = 4,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1188), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11782] = 3,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(631), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11795] = 4,
    ACTIONS(1202), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1165), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11810] = 4,
    ACTIONS(1204), 1,
      anon_sym_DQUOTE,
    STATE(333), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1206), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11825] = 4,
    ACTIONS(1204), 1,
      anon_sym_SQUOTE,
    STATE(335), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1208), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11840] = 4,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11855] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [11870] = 4,
    ACTIONS(1212), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1165), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11885] = 4,
    ACTIONS(1212), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1188), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11900] = 4,
    ACTIONS(1214), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1216), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11915] = 4,
    ACTIONS(1214), 1,
      anon_sym_DQUOTE,
    STATE(345), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1218), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11930] = 4,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1220), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11945] = 4,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1188), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11960] = 4,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE,
    STATE(314), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1188), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11975] = 4,
    ACTIONS(1225), 1,
      anon_sym_DQUOTE,
    STATE(346), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1227), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11990] = 4,
    ACTIONS(1225), 1,
      anon_sym_SQUOTE,
    STATE(313), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1229), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12005] = 4,
    ACTIONS(1223), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1165), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12020] = 4,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(344), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12035] = 5,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12052] = 5,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_block,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12069] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1233), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [12080] = 4,
    ACTIONS(1235), 1,
      anon_sym_SQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1237), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12095] = 4,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1240), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12109] = 4,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(1242), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12123] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1245), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12137] = 4,
    ACTIONS(1051), 1,
      anon_sym_COMMA,
    ACTIONS(1247), 1,
      anon_sym_SEMI,
    STATE(319), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12151] = 4,
    ACTIONS(1249), 1,
      anon_sym_RBRACE,
    ACTIONS(1251), 1,
      sym__js_statement,
    STATE(362), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [12165] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12179] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12193] = 4,
    ACTIONS(1257), 1,
      anon_sym_RBRACE,
    ACTIONS(1259), 1,
      sym__js_statement,
    STATE(362), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [12207] = 3,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1055), 2,
      anon_sym_and,
      anon_sym_or,
  [12219] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1184), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12229] = 4,
    ACTIONS(1251), 1,
      sym__js_statement,
    ACTIONS(1264), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [12243] = 4,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      anon_sym_of,
    ACTIONS(1266), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12257] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1233), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12267] = 4,
    ACTIONS(1121), 1,
      anon_sym_RBRACK,
    ACTIONS(1268), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12281] = 4,
    ACTIONS(999), 1,
      anon_sym_COMMA,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12295] = 4,
    ACTIONS(1273), 1,
      anon_sym_RBRACE,
    ACTIONS(1275), 1,
      sym__js_statement,
    STATE(365), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [12309] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12323] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12337] = 4,
    ACTIONS(1281), 1,
      anon_sym_RBRACE,
    ACTIONS(1283), 1,
      sym__js_statement,
    STATE(359), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [12351] = 4,
    ACTIONS(1059), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12365] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [12375] = 3,
    ACTIONS(1287), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12386] = 3,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    ACTIONS(1289), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12397] = 3,
    ACTIONS(1291), 1,
      aux_sym_color_value_token1,
    ACTIONS(1293), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12408] = 3,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12419] = 3,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    ACTIONS(1297), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12430] = 3,
    ACTIONS(1299), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12441] = 3,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12452] = 3,
    ACTIONS(1301), 1,
      anon_sym_LBRACE,
    STATE(320), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12463] = 3,
    ACTIONS(1303), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12474] = 3,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12485] = 3,
    ACTIONS(977), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12496] = 3,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12507] = 2,
    ACTIONS(1305), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12515] = 2,
    ACTIONS(1307), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12523] = 2,
    ACTIONS(1309), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12531] = 2,
    ACTIONS(1311), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12539] = 2,
    ACTIONS(1313), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12547] = 2,
    ACTIONS(1315), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12555] = 2,
    ACTIONS(1317), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12563] = 2,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12571] = 2,
    ACTIONS(1319), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12579] = 2,
    ACTIONS(1321), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12587] = 2,
    ACTIONS(1323), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12595] = 2,
    ACTIONS(1325), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12603] = 2,
    ACTIONS(1327), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12611] = 2,
    ACTIONS(1329), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12619] = 2,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12627] = 2,
    ACTIONS(1333), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12635] = 2,
    ACTIONS(1335), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12643] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12651] = 2,
    ACTIONS(1337), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12659] = 2,
    ACTIONS(1339), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12667] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 110,
  [SMALL_STATE(4)] = 220,
  [SMALL_STATE(5)] = 330,
  [SMALL_STATE(6)] = 440,
  [SMALL_STATE(7)] = 550,
  [SMALL_STATE(8)] = 660,
  [SMALL_STATE(9)] = 767,
  [SMALL_STATE(10)] = 873,
  [SMALL_STATE(11)] = 979,
  [SMALL_STATE(12)] = 1083,
  [SMALL_STATE(13)] = 1187,
  [SMALL_STATE(14)] = 1288,
  [SMALL_STATE(15)] = 1367,
  [SMALL_STATE(16)] = 1434,
  [SMALL_STATE(17)] = 1501,
  [SMALL_STATE(18)] = 1573,
  [SMALL_STATE(19)] = 1642,
  [SMALL_STATE(20)] = 1707,
  [SMALL_STATE(21)] = 1776,
  [SMALL_STATE(22)] = 1838,
  [SMALL_STATE(23)] = 1900,
  [SMALL_STATE(24)] = 1962,
  [SMALL_STATE(25)] = 2024,
  [SMALL_STATE(26)] = 2070,
  [SMALL_STATE(27)] = 2132,
  [SMALL_STATE(28)] = 2196,
  [SMALL_STATE(29)] = 2260,
  [SMALL_STATE(30)] = 2322,
  [SMALL_STATE(31)] = 2384,
  [SMALL_STATE(32)] = 2446,
  [SMALL_STATE(33)] = 2508,
  [SMALL_STATE(34)] = 2570,
  [SMALL_STATE(35)] = 2632,
  [SMALL_STATE(36)] = 2694,
  [SMALL_STATE(37)] = 2759,
  [SMALL_STATE(38)] = 2824,
  [SMALL_STATE(39)] = 2889,
  [SMALL_STATE(40)] = 2953,
  [SMALL_STATE(41)] = 3017,
  [SMALL_STATE(42)] = 3053,
  [SMALL_STATE(43)] = 3089,
  [SMALL_STATE(44)] = 3153,
  [SMALL_STATE(45)] = 3215,
  [SMALL_STATE(46)] = 3275,
  [SMALL_STATE(47)] = 3315,
  [SMALL_STATE(48)] = 3375,
  [SMALL_STATE(49)] = 3408,
  [SMALL_STATE(50)] = 3445,
  [SMALL_STATE(51)] = 3478,
  [SMALL_STATE(52)] = 3511,
  [SMALL_STATE(53)] = 3544,
  [SMALL_STATE(54)] = 3577,
  [SMALL_STATE(55)] = 3610,
  [SMALL_STATE(56)] = 3643,
  [SMALL_STATE(57)] = 3676,
  [SMALL_STATE(58)] = 3709,
  [SMALL_STATE(59)] = 3742,
  [SMALL_STATE(60)] = 3775,
  [SMALL_STATE(61)] = 3808,
  [SMALL_STATE(62)] = 3841,
  [SMALL_STATE(63)] = 3874,
  [SMALL_STATE(64)] = 3907,
  [SMALL_STATE(65)] = 3940,
  [SMALL_STATE(66)] = 3973,
  [SMALL_STATE(67)] = 4006,
  [SMALL_STATE(68)] = 4039,
  [SMALL_STATE(69)] = 4098,
  [SMALL_STATE(70)] = 4131,
  [SMALL_STATE(71)] = 4164,
  [SMALL_STATE(72)] = 4197,
  [SMALL_STATE(73)] = 4230,
  [SMALL_STATE(74)] = 4263,
  [SMALL_STATE(75)] = 4296,
  [SMALL_STATE(76)] = 4329,
  [SMALL_STATE(77)] = 4362,
  [SMALL_STATE(78)] = 4395,
  [SMALL_STATE(79)] = 4428,
  [SMALL_STATE(80)] = 4461,
  [SMALL_STATE(81)] = 4494,
  [SMALL_STATE(82)] = 4527,
  [SMALL_STATE(83)] = 4560,
  [SMALL_STATE(84)] = 4593,
  [SMALL_STATE(85)] = 4626,
  [SMALL_STATE(86)] = 4659,
  [SMALL_STATE(87)] = 4692,
  [SMALL_STATE(88)] = 4725,
  [SMALL_STATE(89)] = 4758,
  [SMALL_STATE(90)] = 4791,
  [SMALL_STATE(91)] = 4824,
  [SMALL_STATE(92)] = 4861,
  [SMALL_STATE(93)] = 4894,
  [SMALL_STATE(94)] = 4927,
  [SMALL_STATE(95)] = 4960,
  [SMALL_STATE(96)] = 4993,
  [SMALL_STATE(97)] = 5054,
  [SMALL_STATE(98)] = 5087,
  [SMALL_STATE(99)] = 5148,
  [SMALL_STATE(100)] = 5181,
  [SMALL_STATE(101)] = 5214,
  [SMALL_STATE(102)] = 5272,
  [SMALL_STATE(103)] = 5330,
  [SMALL_STATE(104)] = 5388,
  [SMALL_STATE(105)] = 5446,
  [SMALL_STATE(106)] = 5504,
  [SMALL_STATE(107)] = 5559,
  [SMALL_STATE(108)] = 5594,
  [SMALL_STATE(109)] = 5629,
  [SMALL_STATE(110)] = 5664,
  [SMALL_STATE(111)] = 5699,
  [SMALL_STATE(112)] = 5740,
  [SMALL_STATE(113)] = 5775,
  [SMALL_STATE(114)] = 5810,
  [SMALL_STATE(115)] = 5865,
  [SMALL_STATE(116)] = 5917,
  [SMALL_STATE(117)] = 5953,
  [SMALL_STATE(118)] = 6005,
  [SMALL_STATE(119)] = 6057,
  [SMALL_STATE(120)] = 6109,
  [SMALL_STATE(121)] = 6161,
  [SMALL_STATE(122)] = 6213,
  [SMALL_STATE(123)] = 6265,
  [SMALL_STATE(124)] = 6317,
  [SMALL_STATE(125)] = 6369,
  [SMALL_STATE(126)] = 6421,
  [SMALL_STATE(127)] = 6473,
  [SMALL_STATE(128)] = 6525,
  [SMALL_STATE(129)] = 6577,
  [SMALL_STATE(130)] = 6629,
  [SMALL_STATE(131)] = 6681,
  [SMALL_STATE(132)] = 6733,
  [SMALL_STATE(133)] = 6785,
  [SMALL_STATE(134)] = 6837,
  [SMALL_STATE(135)] = 6889,
  [SMALL_STATE(136)] = 6941,
  [SMALL_STATE(137)] = 6970,
  [SMALL_STATE(138)] = 6999,
  [SMALL_STATE(139)] = 7028,
  [SMALL_STATE(140)] = 7057,
  [SMALL_STATE(141)] = 7086,
  [SMALL_STATE(142)] = 7117,
  [SMALL_STATE(143)] = 7146,
  [SMALL_STATE(144)] = 7175,
  [SMALL_STATE(145)] = 7204,
  [SMALL_STATE(146)] = 7233,
  [SMALL_STATE(147)] = 7262,
  [SMALL_STATE(148)] = 7291,
  [SMALL_STATE(149)] = 7322,
  [SMALL_STATE(150)] = 7353,
  [SMALL_STATE(151)] = 7384,
  [SMALL_STATE(152)] = 7415,
  [SMALL_STATE(153)] = 7444,
  [SMALL_STATE(154)] = 7473,
  [SMALL_STATE(155)] = 7502,
  [SMALL_STATE(156)] = 7531,
  [SMALL_STATE(157)] = 7560,
  [SMALL_STATE(158)] = 7589,
  [SMALL_STATE(159)] = 7618,
  [SMALL_STATE(160)] = 7649,
  [SMALL_STATE(161)] = 7678,
  [SMALL_STATE(162)] = 7707,
  [SMALL_STATE(163)] = 7736,
  [SMALL_STATE(164)] = 7765,
  [SMALL_STATE(165)] = 7798,
  [SMALL_STATE(166)] = 7831,
  [SMALL_STATE(167)] = 7860,
  [SMALL_STATE(168)] = 7889,
  [SMALL_STATE(169)] = 7918,
  [SMALL_STATE(170)] = 7949,
  [SMALL_STATE(171)] = 7980,
  [SMALL_STATE(172)] = 8009,
  [SMALL_STATE(173)] = 8040,
  [SMALL_STATE(174)] = 8069,
  [SMALL_STATE(175)] = 8098,
  [SMALL_STATE(176)] = 8127,
  [SMALL_STATE(177)] = 8156,
  [SMALL_STATE(178)] = 8185,
  [SMALL_STATE(179)] = 8215,
  [SMALL_STATE(180)] = 8245,
  [SMALL_STATE(181)] = 8275,
  [SMALL_STATE(182)] = 8305,
  [SMALL_STATE(183)] = 8335,
  [SMALL_STATE(184)] = 8365,
  [SMALL_STATE(185)] = 8395,
  [SMALL_STATE(186)] = 8425,
  [SMALL_STATE(187)] = 8455,
  [SMALL_STATE(188)] = 8485,
  [SMALL_STATE(189)] = 8515,
  [SMALL_STATE(190)] = 8545,
  [SMALL_STATE(191)] = 8575,
  [SMALL_STATE(192)] = 8605,
  [SMALL_STATE(193)] = 8638,
  [SMALL_STATE(194)] = 8671,
  [SMALL_STATE(195)] = 8704,
  [SMALL_STATE(196)] = 8737,
  [SMALL_STATE(197)] = 8770,
  [SMALL_STATE(198)] = 8800,
  [SMALL_STATE(199)] = 8830,
  [SMALL_STATE(200)] = 8860,
  [SMALL_STATE(201)] = 8890,
  [SMALL_STATE(202)] = 8920,
  [SMALL_STATE(203)] = 8950,
  [SMALL_STATE(204)] = 8980,
  [SMALL_STATE(205)] = 9010,
  [SMALL_STATE(206)] = 9049,
  [SMALL_STATE(207)] = 9088,
  [SMALL_STATE(208)] = 9123,
  [SMALL_STATE(209)] = 9167,
  [SMALL_STATE(210)] = 9189,
  [SMALL_STATE(211)] = 9233,
  [SMALL_STATE(212)] = 9277,
  [SMALL_STATE(213)] = 9311,
  [SMALL_STATE(214)] = 9345,
  [SMALL_STATE(215)] = 9385,
  [SMALL_STATE(216)] = 9407,
  [SMALL_STATE(217)] = 9451,
  [SMALL_STATE(218)] = 9473,
  [SMALL_STATE(219)] = 9512,
  [SMALL_STATE(220)] = 9539,
  [SMALL_STATE(221)] = 9561,
  [SMALL_STATE(222)] = 9587,
  [SMALL_STATE(223)] = 9611,
  [SMALL_STATE(224)] = 9637,
  [SMALL_STATE(225)] = 9675,
  [SMALL_STATE(226)] = 9713,
  [SMALL_STATE(227)] = 9737,
  [SMALL_STATE(228)] = 9763,
  [SMALL_STATE(229)] = 9789,
  [SMALL_STATE(230)] = 9815,
  [SMALL_STATE(231)] = 9841,
  [SMALL_STATE(232)] = 9867,
  [SMALL_STATE(233)] = 9893,
  [SMALL_STATE(234)] = 9914,
  [SMALL_STATE(235)] = 9935,
  [SMALL_STATE(236)] = 9956,
  [SMALL_STATE(237)] = 9991,
  [SMALL_STATE(238)] = 10012,
  [SMALL_STATE(239)] = 10037,
  [SMALL_STATE(240)] = 10058,
  [SMALL_STATE(241)] = 10079,
  [SMALL_STATE(242)] = 10100,
  [SMALL_STATE(243)] = 10121,
  [SMALL_STATE(244)] = 10142,
  [SMALL_STATE(245)] = 10171,
  [SMALL_STATE(246)] = 10192,
  [SMALL_STATE(247)] = 10213,
  [SMALL_STATE(248)] = 10234,
  [SMALL_STATE(249)] = 10255,
  [SMALL_STATE(250)] = 10277,
  [SMALL_STATE(251)] = 10299,
  [SMALL_STATE(252)] = 10319,
  [SMALL_STATE(253)] = 10338,
  [SMALL_STATE(254)] = 10357,
  [SMALL_STATE(255)] = 10376,
  [SMALL_STATE(256)] = 10395,
  [SMALL_STATE(257)] = 10414,
  [SMALL_STATE(258)] = 10433,
  [SMALL_STATE(259)] = 10452,
  [SMALL_STATE(260)] = 10471,
  [SMALL_STATE(261)] = 10490,
  [SMALL_STATE(262)] = 10509,
  [SMALL_STATE(263)] = 10528,
  [SMALL_STATE(264)] = 10547,
  [SMALL_STATE(265)] = 10566,
  [SMALL_STATE(266)] = 10588,
  [SMALL_STATE(267)] = 10612,
  [SMALL_STATE(268)] = 10636,
  [SMALL_STATE(269)] = 10660,
  [SMALL_STATE(270)] = 10682,
  [SMALL_STATE(271)] = 10704,
  [SMALL_STATE(272)] = 10726,
  [SMALL_STATE(273)] = 10748,
  [SMALL_STATE(274)] = 10772,
  [SMALL_STATE(275)] = 10796,
  [SMALL_STATE(276)] = 10820,
  [SMALL_STATE(277)] = 10844,
  [SMALL_STATE(278)] = 10866,
  [SMALL_STATE(279)] = 10888,
  [SMALL_STATE(280)] = 10910,
  [SMALL_STATE(281)] = 10923,
  [SMALL_STATE(282)] = 10936,
  [SMALL_STATE(283)] = 10949,
  [SMALL_STATE(284)] = 10962,
  [SMALL_STATE(285)] = 10983,
  [SMALL_STATE(286)] = 11004,
  [SMALL_STATE(287)] = 11023,
  [SMALL_STATE(288)] = 11044,
  [SMALL_STATE(289)] = 11065,
  [SMALL_STATE(290)] = 11078,
  [SMALL_STATE(291)] = 11091,
  [SMALL_STATE(292)] = 11112,
  [SMALL_STATE(293)] = 11133,
  [SMALL_STATE(294)] = 11151,
  [SMALL_STATE(295)] = 11169,
  [SMALL_STATE(296)] = 11187,
  [SMALL_STATE(297)] = 11205,
  [SMALL_STATE(298)] = 11223,
  [SMALL_STATE(299)] = 11243,
  [SMALL_STATE(300)] = 11261,
  [SMALL_STATE(301)] = 11279,
  [SMALL_STATE(302)] = 11297,
  [SMALL_STATE(303)] = 11317,
  [SMALL_STATE(304)] = 11335,
  [SMALL_STATE(305)] = 11349,
  [SMALL_STATE(306)] = 11367,
  [SMALL_STATE(307)] = 11383,
  [SMALL_STATE(308)] = 11401,
  [SMALL_STATE(309)] = 11419,
  [SMALL_STATE(310)] = 11437,
  [SMALL_STATE(311)] = 11455,
  [SMALL_STATE(312)] = 11473,
  [SMALL_STATE(313)] = 11491,
  [SMALL_STATE(314)] = 11506,
  [SMALL_STATE(315)] = 11521,
  [SMALL_STATE(316)] = 11536,
  [SMALL_STATE(317)] = 11551,
  [SMALL_STATE(318)] = 11562,
  [SMALL_STATE(319)] = 11573,
  [SMALL_STATE(320)] = 11588,
  [SMALL_STATE(321)] = 11599,
  [SMALL_STATE(322)] = 11614,
  [SMALL_STATE(323)] = 11629,
  [SMALL_STATE(324)] = 11640,
  [SMALL_STATE(325)] = 11655,
  [SMALL_STATE(326)] = 11666,
  [SMALL_STATE(327)] = 11677,
  [SMALL_STATE(328)] = 11692,
  [SMALL_STATE(329)] = 11707,
  [SMALL_STATE(330)] = 11722,
  [SMALL_STATE(331)] = 11737,
  [SMALL_STATE(332)] = 11752,
  [SMALL_STATE(333)] = 11767,
  [SMALL_STATE(334)] = 11782,
  [SMALL_STATE(335)] = 11795,
  [SMALL_STATE(336)] = 11810,
  [SMALL_STATE(337)] = 11825,
  [SMALL_STATE(338)] = 11840,
  [SMALL_STATE(339)] = 11855,
  [SMALL_STATE(340)] = 11870,
  [SMALL_STATE(341)] = 11885,
  [SMALL_STATE(342)] = 11900,
  [SMALL_STATE(343)] = 11915,
  [SMALL_STATE(344)] = 11930,
  [SMALL_STATE(345)] = 11945,
  [SMALL_STATE(346)] = 11960,
  [SMALL_STATE(347)] = 11975,
  [SMALL_STATE(348)] = 11990,
  [SMALL_STATE(349)] = 12005,
  [SMALL_STATE(350)] = 12020,
  [SMALL_STATE(351)] = 12035,
  [SMALL_STATE(352)] = 12052,
  [SMALL_STATE(353)] = 12069,
  [SMALL_STATE(354)] = 12080,
  [SMALL_STATE(355)] = 12095,
  [SMALL_STATE(356)] = 12109,
  [SMALL_STATE(357)] = 12123,
  [SMALL_STATE(358)] = 12137,
  [SMALL_STATE(359)] = 12151,
  [SMALL_STATE(360)] = 12165,
  [SMALL_STATE(361)] = 12179,
  [SMALL_STATE(362)] = 12193,
  [SMALL_STATE(363)] = 12207,
  [SMALL_STATE(364)] = 12219,
  [SMALL_STATE(365)] = 12229,
  [SMALL_STATE(366)] = 12243,
  [SMALL_STATE(367)] = 12257,
  [SMALL_STATE(368)] = 12267,
  [SMALL_STATE(369)] = 12281,
  [SMALL_STATE(370)] = 12295,
  [SMALL_STATE(371)] = 12309,
  [SMALL_STATE(372)] = 12323,
  [SMALL_STATE(373)] = 12337,
  [SMALL_STATE(374)] = 12351,
  [SMALL_STATE(375)] = 12365,
  [SMALL_STATE(376)] = 12375,
  [SMALL_STATE(377)] = 12386,
  [SMALL_STATE(378)] = 12397,
  [SMALL_STATE(379)] = 12408,
  [SMALL_STATE(380)] = 12419,
  [SMALL_STATE(381)] = 12430,
  [SMALL_STATE(382)] = 12441,
  [SMALL_STATE(383)] = 12452,
  [SMALL_STATE(384)] = 12463,
  [SMALL_STATE(385)] = 12474,
  [SMALL_STATE(386)] = 12485,
  [SMALL_STATE(387)] = 12496,
  [SMALL_STATE(388)] = 12507,
  [SMALL_STATE(389)] = 12515,
  [SMALL_STATE(390)] = 12523,
  [SMALL_STATE(391)] = 12531,
  [SMALL_STATE(392)] = 12539,
  [SMALL_STATE(393)] = 12547,
  [SMALL_STATE(394)] = 12555,
  [SMALL_STATE(395)] = 12563,
  [SMALL_STATE(396)] = 12571,
  [SMALL_STATE(397)] = 12579,
  [SMALL_STATE(398)] = 12587,
  [SMALL_STATE(399)] = 12595,
  [SMALL_STATE(400)] = 12603,
  [SMALL_STATE(401)] = 12611,
  [SMALL_STATE(402)] = 12619,
  [SMALL_STATE(403)] = 12627,
  [SMALL_STATE(404)] = 12635,
  [SMALL_STATE(405)] = 12643,
  [SMALL_STATE(406)] = 12651,
  [SMALL_STATE(407)] = 12659,
  [SMALL_STATE(408)] = 12667,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(230),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(312),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(396),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(228),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(210),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(321),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(394),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(392),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(27),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(26),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(343),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(215),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(296),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(213),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(131),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(223),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(129),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(299),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(404),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(227),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(210),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(138),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(321),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(394),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(392),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(27),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(26),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(22),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(32),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(34),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(342),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(343),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(209),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(207),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(305),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(213),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 15),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 15),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(389),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(196),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(130),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(337),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(336),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(165),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(164),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(118),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(116),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(196),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(300),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(389),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(195),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(130),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(337),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(336),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(165),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(164),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(118),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(116),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(195),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(300),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2), SHIFT_REPEAT(49),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 15),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [951] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1073] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [1075] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(370),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [1080] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(326),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [1093] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(383),
  [1096] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(377),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(373),
  [1118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(364),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2),
  [1169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2), SHIFT_REPEAT(314),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(232),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(24),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(106),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2),
  [1237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2), SHIFT_REPEAT(354),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(362),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(124),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1339] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
