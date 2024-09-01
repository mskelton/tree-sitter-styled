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
#define STATE_COUNT 388
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 9
#define TOKEN_COUNT 65
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
  anon_sym_COLON_COLON = 21,
  anon_sym_POUND = 22,
  anon_sym_LBRACK = 23,
  anon_sym_EQ = 24,
  anon_sym_TILDE_EQ = 25,
  anon_sym_CARET_EQ = 26,
  anon_sym_PIPE_EQ = 27,
  anon_sym_STAR_EQ = 28,
  anon_sym_DOLLAR_EQ = 29,
  anon_sym_RBRACK = 30,
  anon_sym_GT = 31,
  anon_sym_TILDE = 32,
  anon_sym_PLUS = 33,
  anon_sym_PIPE = 34,
  anon_sym_LPAREN = 35,
  anon_sym_RPAREN = 36,
  anon_sym_COLON = 37,
  sym_important = 38,
  anon_sym_LPAREN2 = 39,
  anon_sym_and = 40,
  anon_sym_or = 41,
  anon_sym_only = 42,
  anon_sym_selector = 43,
  aux_sym_color_value_token1 = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_string_value_token1 = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_value_token2 = 48,
  aux_sym_integer_value_token1 = 49,
  aux_sym_float_value_token1 = 50,
  sym_unit = 51,
  anon_sym_DASH = 52,
  anon_sym_SLASH = 53,
  sym_identifier = 54,
  sym_at_keyword = 55,
  sym_js_comment = 56,
  sym_comment = 57,
  sym_plain_value = 58,
  anon_sym_DOLLAR_LBRACE = 59,
  anon_sym_RBRACE_SEMI = 60,
  sym__js_statement = 61,
  sym__descendant_operator = 62,
  sym__pseudo_class_selector_colon = 63,
  sym___error_recovery = 64,
  sym_stylesheet = 65,
  sym_import_statement = 66,
  sym_media_statement = 67,
  sym_charset_statement = 68,
  sym_namespace_statement = 69,
  sym_keyframes_statement = 70,
  sym_keyframe_block_list = 71,
  sym_keyframe_block = 72,
  sym_supports_statement = 73,
  sym_postcss_statement = 74,
  sym_at_rule = 75,
  sym_rule_set = 76,
  sym_selectors = 77,
  sym_block = 78,
  sym__selector = 79,
  sym_universal_selector = 80,
  sym_class_selector = 81,
  sym_pseudo_class_selector = 82,
  sym_pseudo_element_selector = 83,
  sym_id_selector = 84,
  sym_attribute_selector = 85,
  sym_child_selector = 86,
  sym_descendant_selector = 87,
  sym_sibling_selector = 88,
  sym_adjacent_sibling_selector = 89,
  sym_namespace_selector = 90,
  sym_pseudo_class_arguments = 91,
  sym_pseudo_class_with_selector_arguments = 92,
  sym_pseudo_element_arguments = 93,
  sym_declaration = 94,
  sym_last_declaration = 95,
  sym__query = 96,
  sym_feature_query = 97,
  sym_parenthesized_query = 98,
  sym_binary_query = 99,
  sym_unary_query = 100,
  sym_selector_query = 101,
  sym__value = 102,
  sym_parenthesized_value = 103,
  sym_color_value = 104,
  sym_string_value = 105,
  sym_integer_value = 106,
  sym_float_value = 107,
  sym_grid_value = 108,
  sym_call_expression = 109,
  sym_binary_expression = 110,
  sym_arguments = 111,
  sym_interpolation = 112,
  sym__inline_interpolation = 113,
  aux_sym__js_expressions = 114,
  sym__js_expression = 115,
  sym__js_block = 116,
  aux_sym_stylesheet_repeat1 = 117,
  aux_sym_import_statement_repeat1 = 118,
  aux_sym_keyframe_block_list_repeat1 = 119,
  aux_sym_postcss_statement_repeat1 = 120,
  aux_sym_selectors_repeat1 = 121,
  aux_sym_block_repeat1 = 122,
  aux_sym_pseudo_class_arguments_repeat1 = 123,
  aux_sym_declaration_repeat1 = 124,
  aux_sym_grid_value_repeat1 = 125,
  aux_sym_arguments_repeat1 = 126,
  aux_sym__js_block_repeat1 = 127,
  alias_sym_feature_name = 128,
  alias_sym_function_name = 129,
  alias_sym_id_name = 130,
  alias_sym_js_expression = 131,
  alias_sym_keyframes_name = 132,
  alias_sym_keyword_query = 133,
  alias_sym_namespace_name = 134,
  alias_sym_property_name = 135,
  alias_sym_tag_name = 136,
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
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
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
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__js_block_repeat1] = "_js_block_repeat1",
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
  [anon_sym_has] = anon_sym_has,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = anon_sym_has,
  [anon_sym_where] = anon_sym_has,
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
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
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
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__js_block_repeat1] = aux_sym__js_block_repeat1,
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
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
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
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__js_block_repeat1] = {
    .visible = false,
    .named = false,
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
    [1] = anon_sym_has,
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
    [1] = sym_identifier,
  },
  [10] = {
    [1] = alias_sym_js_expression,
  },
  [11] = {
    [2] = anon_sym_has,
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
    [2] = sym_identifier,
  },
  [17] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    sym_identifier,
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 52,
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
  [64] = 61,
  [65] = 65,
  [66] = 66,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 66,
  [73] = 61,
  [74] = 65,
  [75] = 70,
  [76] = 65,
  [77] = 77,
  [78] = 70,
  [79] = 79,
  [80] = 71,
  [81] = 81,
  [82] = 82,
  [83] = 83,
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
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 34,
  [109] = 91,
  [110] = 110,
  [111] = 111,
  [112] = 90,
  [113] = 113,
  [114] = 88,
  [115] = 104,
  [116] = 84,
  [117] = 96,
  [118] = 118,
  [119] = 119,
  [120] = 98,
  [121] = 103,
  [122] = 122,
  [123] = 123,
  [124] = 99,
  [125] = 125,
  [126] = 93,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 119,
  [133] = 133,
  [134] = 134,
  [135] = 122,
  [136] = 136,
  [137] = 137,
  [138] = 83,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 86,
  [149] = 149,
  [150] = 150,
  [151] = 147,
  [152] = 152,
  [153] = 153,
  [154] = 141,
  [155] = 152,
  [156] = 142,
  [157] = 146,
  [158] = 150,
  [159] = 153,
  [160] = 160,
  [161] = 34,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
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
  [179] = 178,
  [180] = 180,
  [181] = 181,
  [182] = 181,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 186,
  [188] = 34,
  [189] = 32,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 77,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 168,
  [205] = 205,
  [206] = 203,
  [207] = 113,
  [208] = 208,
  [209] = 111,
  [210] = 205,
  [211] = 211,
  [212] = 212,
  [213] = 165,
  [214] = 214,
  [215] = 162,
  [216] = 216,
  [217] = 172,
  [218] = 34,
  [219] = 163,
  [220] = 170,
  [221] = 166,
  [222] = 77,
  [223] = 160,
  [224] = 171,
  [225] = 169,
  [226] = 167,
  [227] = 164,
  [228] = 111,
  [229] = 113,
  [230] = 167,
  [231] = 170,
  [232] = 34,
  [233] = 172,
  [234] = 163,
  [235] = 160,
  [236] = 169,
  [237] = 164,
  [238] = 165,
  [239] = 162,
  [240] = 166,
  [241] = 168,
  [242] = 171,
  [243] = 243,
  [244] = 244,
  [245] = 243,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 248,
  [251] = 251,
  [252] = 247,
  [253] = 246,
  [254] = 254,
  [255] = 251,
  [256] = 244,
  [257] = 244,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 261,
  [264] = 254,
  [265] = 265,
  [266] = 262,
  [267] = 261,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 272,
  [281] = 276,
  [282] = 277,
  [283] = 283,
  [284] = 284,
  [285] = 284,
  [286] = 279,
  [287] = 287,
  [288] = 271,
  [289] = 273,
  [290] = 271,
  [291] = 276,
  [292] = 292,
  [293] = 293,
  [294] = 293,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 91,
  [299] = 299,
  [300] = 142,
  [301] = 301,
  [302] = 293,
  [303] = 96,
  [304] = 295,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 296,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 315,
  [318] = 318,
  [319] = 319,
  [320] = 292,
  [321] = 313,
  [322] = 306,
  [323] = 323,
  [324] = 313,
  [325] = 325,
  [326] = 307,
  [327] = 327,
  [328] = 325,
  [329] = 318,
  [330] = 330,
  [331] = 331,
  [332] = 113,
  [333] = 333,
  [334] = 333,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 335,
  [339] = 336,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 341,
  [345] = 345,
  [346] = 341,
  [347] = 347,
  [348] = 347,
  [349] = 349,
  [350] = 341,
  [351] = 343,
  [352] = 345,
  [353] = 353,
  [354] = 343,
  [355] = 341,
  [356] = 343,
  [357] = 341,
  [358] = 343,
  [359] = 353,
  [360] = 360,
  [361] = 345,
  [362] = 362,
  [363] = 362,
  [364] = 360,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 360,
  [369] = 347,
  [370] = 367,
  [371] = 343,
  [372] = 372,
  [373] = 366,
  [374] = 374,
  [375] = 375,
  [376] = 366,
  [377] = 367,
  [378] = 378,
  [379] = 342,
  [380] = 380,
  [381] = 366,
  [382] = 367,
  [383] = 366,
  [384] = 367,
  [385] = 366,
  [386] = 367,
  [387] = 387,
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
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(38);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(328);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(325);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '{') ADVANCE(333);
      END_STATE();
    case 40:
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 60:
      if (lookahead == '{') ADVANCE(333);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 69:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(34);
      END_STATE();
    case 70:
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 'h') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'w') ADVANCE(252);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(118);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '&') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '{') ADVANCE(83);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(84);
      if (lookahead == '~') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(334);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_from);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_to);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(180);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(176);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\n') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(25);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(186);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 't') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 't') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == 'y') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(216);
      if (lookahead == '/') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if ((160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'D') ||
          ('F' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(325);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'y') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(244);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(296);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(288);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(317);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(306);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(293);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(294);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_js_comment);
      if (sym_js_comment_character_set_1(lookahead)) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(70);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(327);
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72, .external_lex_state = 2},
  [2] = {.lex_state = 72, .external_lex_state = 2},
  [3] = {.lex_state = 72, .external_lex_state = 2},
  [4] = {.lex_state = 72, .external_lex_state = 2},
  [5] = {.lex_state = 72, .external_lex_state = 2},
  [6] = {.lex_state = 72, .external_lex_state = 2},
  [7] = {.lex_state = 72, .external_lex_state = 2},
  [8] = {.lex_state = 72, .external_lex_state = 2},
  [9] = {.lex_state = 72, .external_lex_state = 2},
  [10] = {.lex_state = 72, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 3, .external_lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 5, .external_lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 5, .external_lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 72, .external_lex_state = 2},
  [38] = {.lex_state = 72, .external_lex_state = 2},
  [39] = {.lex_state = 72, .external_lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 72, .external_lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 72, .external_lex_state = 2},
  [45] = {.lex_state = 72, .external_lex_state = 2},
  [46] = {.lex_state = 72, .external_lex_state = 2},
  [47] = {.lex_state = 72, .external_lex_state = 2},
  [48] = {.lex_state = 10, .external_lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 72, .external_lex_state = 2},
  [51] = {.lex_state = 72, .external_lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 9, .external_lex_state = 3},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 9, .external_lex_state = 3},
  [57] = {.lex_state = 9, .external_lex_state = 3},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 9, .external_lex_state = 3},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 9, .external_lex_state = 3},
  [82] = {.lex_state = 72, .external_lex_state = 2},
  [83] = {.lex_state = 72, .external_lex_state = 2},
  [84] = {.lex_state = 72, .external_lex_state = 2},
  [85] = {.lex_state = 9, .external_lex_state = 3},
  [86] = {.lex_state = 72, .external_lex_state = 2},
  [87] = {.lex_state = 9, .external_lex_state = 3},
  [88] = {.lex_state = 72, .external_lex_state = 2},
  [89] = {.lex_state = 9, .external_lex_state = 3},
  [90] = {.lex_state = 72, .external_lex_state = 2},
  [91] = {.lex_state = 72, .external_lex_state = 2},
  [92] = {.lex_state = 9, .external_lex_state = 3},
  [93] = {.lex_state = 72, .external_lex_state = 2},
  [94] = {.lex_state = 9, .external_lex_state = 3},
  [95] = {.lex_state = 9, .external_lex_state = 3},
  [96] = {.lex_state = 72, .external_lex_state = 2},
  [97] = {.lex_state = 72, .external_lex_state = 2},
  [98] = {.lex_state = 72, .external_lex_state = 2},
  [99] = {.lex_state = 72, .external_lex_state = 2},
  [100] = {.lex_state = 9, .external_lex_state = 3},
  [101] = {.lex_state = 72, .external_lex_state = 2},
  [102] = {.lex_state = 72, .external_lex_state = 2},
  [103] = {.lex_state = 72, .external_lex_state = 2},
  [104] = {.lex_state = 72, .external_lex_state = 2},
  [105] = {.lex_state = 72, .external_lex_state = 2},
  [106] = {.lex_state = 9, .external_lex_state = 3},
  [107] = {.lex_state = 9, .external_lex_state = 3},
  [108] = {.lex_state = 9, .external_lex_state = 3},
  [109] = {.lex_state = 72, .external_lex_state = 2},
  [110] = {.lex_state = 9, .external_lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 72, .external_lex_state = 2},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 72, .external_lex_state = 2},
  [115] = {.lex_state = 72, .external_lex_state = 2},
  [116] = {.lex_state = 72, .external_lex_state = 2},
  [117] = {.lex_state = 72, .external_lex_state = 2},
  [118] = {.lex_state = 9, .external_lex_state = 3},
  [119] = {.lex_state = 72, .external_lex_state = 2},
  [120] = {.lex_state = 72, .external_lex_state = 2},
  [121] = {.lex_state = 72, .external_lex_state = 2},
  [122] = {.lex_state = 72, .external_lex_state = 2},
  [123] = {.lex_state = 9, .external_lex_state = 3},
  [124] = {.lex_state = 72, .external_lex_state = 2},
  [125] = {.lex_state = 9, .external_lex_state = 3},
  [126] = {.lex_state = 72, .external_lex_state = 2},
  [127] = {.lex_state = 9, .external_lex_state = 3},
  [128] = {.lex_state = 9, .external_lex_state = 3},
  [129] = {.lex_state = 9, .external_lex_state = 3},
  [130] = {.lex_state = 9, .external_lex_state = 3},
  [131] = {.lex_state = 9, .external_lex_state = 3},
  [132] = {.lex_state = 72, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 3},
  [134] = {.lex_state = 9, .external_lex_state = 3},
  [135] = {.lex_state = 72, .external_lex_state = 2},
  [136] = {.lex_state = 9, .external_lex_state = 3},
  [137] = {.lex_state = 9, .external_lex_state = 3},
  [138] = {.lex_state = 72, .external_lex_state = 2},
  [139] = {.lex_state = 9, .external_lex_state = 3},
  [140] = {.lex_state = 9, .external_lex_state = 3},
  [141] = {.lex_state = 72, .external_lex_state = 2},
  [142] = {.lex_state = 72, .external_lex_state = 2},
  [143] = {.lex_state = 72, .external_lex_state = 2},
  [144] = {.lex_state = 9, .external_lex_state = 3},
  [145] = {.lex_state = 9, .external_lex_state = 3},
  [146] = {.lex_state = 72, .external_lex_state = 2},
  [147] = {.lex_state = 72, .external_lex_state = 2},
  [148] = {.lex_state = 72, .external_lex_state = 2},
  [149] = {.lex_state = 9, .external_lex_state = 3},
  [150] = {.lex_state = 72, .external_lex_state = 2},
  [151] = {.lex_state = 72, .external_lex_state = 2},
  [152] = {.lex_state = 72, .external_lex_state = 2},
  [153] = {.lex_state = 72, .external_lex_state = 2},
  [154] = {.lex_state = 72, .external_lex_state = 2},
  [155] = {.lex_state = 72, .external_lex_state = 2},
  [156] = {.lex_state = 72, .external_lex_state = 2},
  [157] = {.lex_state = 72, .external_lex_state = 2},
  [158] = {.lex_state = 72, .external_lex_state = 2},
  [159] = {.lex_state = 72, .external_lex_state = 2},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 9, .external_lex_state = 3},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 9, .external_lex_state = 3},
  [184] = {.lex_state = 9, .external_lex_state = 3},
  [185] = {.lex_state = 9, .external_lex_state = 3},
  [186] = {.lex_state = 17},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 13, .external_lex_state = 3},
  [189] = {.lex_state = 13, .external_lex_state = 3},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 72, .external_lex_state = 3},
  [192] = {.lex_state = 72, .external_lex_state = 3},
  [193] = {.lex_state = 72, .external_lex_state = 3},
  [194] = {.lex_state = 72, .external_lex_state = 3},
  [195] = {.lex_state = 72, .external_lex_state = 3},
  [196] = {.lex_state = 72, .external_lex_state = 3},
  [197] = {.lex_state = 72, .external_lex_state = 3},
  [198] = {.lex_state = 72, .external_lex_state = 3},
  [199] = {.lex_state = 72, .external_lex_state = 3},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 72, .external_lex_state = 3},
  [202] = {.lex_state = 19},
  [203] = {.lex_state = 19},
  [204] = {.lex_state = 17},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 19},
  [207] = {.lex_state = 15},
  [208] = {.lex_state = 19},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 19},
  [211] = {.lex_state = 19},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 72, .external_lex_state = 3},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 13},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 13},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 21},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 13},
  [231] = {.lex_state = 13},
  [232] = {.lex_state = 13},
  [233] = {.lex_state = 13},
  [234] = {.lex_state = 13},
  [235] = {.lex_state = 13},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 13},
  [238] = {.lex_state = 13},
  [239] = {.lex_state = 13},
  [240] = {.lex_state = 13},
  [241] = {.lex_state = 13},
  [242] = {.lex_state = 13},
  [243] = {.lex_state = 61},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 61},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 61},
  [248] = {.lex_state = 72},
  [249] = {.lex_state = 61},
  [250] = {.lex_state = 72},
  [251] = {.lex_state = 35},
  [252] = {.lex_state = 61},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 35},
  [255] = {.lex_state = 35},
  [256] = {.lex_state = 13},
  [257] = {.lex_state = 13},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 13},
  [261] = {.lex_state = 36},
  [262] = {.lex_state = 9},
  [263] = {.lex_state = 36},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 9},
  [266] = {.lex_state = 9},
  [267] = {.lex_state = 36},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 9},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 35},
  [272] = {.lex_state = 72},
  [273] = {.lex_state = 9},
  [274] = {.lex_state = 9},
  [275] = {.lex_state = 26},
  [276] = {.lex_state = 13},
  [277] = {.lex_state = 72},
  [278] = {.lex_state = 13},
  [279] = {.lex_state = 13},
  [280] = {.lex_state = 72},
  [281] = {.lex_state = 13},
  [282] = {.lex_state = 72},
  [283] = {.lex_state = 26},
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 35},
  [286] = {.lex_state = 13},
  [287] = {.lex_state = 13},
  [288] = {.lex_state = 35},
  [289] = {.lex_state = 9},
  [290] = {.lex_state = 35},
  [291] = {.lex_state = 13},
  [292] = {.lex_state = 35},
  [293] = {.lex_state = 72},
  [294] = {.lex_state = 72},
  [295] = {.lex_state = 72},
  [296] = {.lex_state = 9},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 61},
  [299] = {.lex_state = 72},
  [300] = {.lex_state = 61},
  [301] = {.lex_state = 61},
  [302] = {.lex_state = 72},
  [303] = {.lex_state = 61},
  [304] = {.lex_state = 72},
  [305] = {.lex_state = 72},
  [306] = {.lex_state = 35},
  [307] = {.lex_state = 35},
  [308] = {.lex_state = 72},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 72},
  [311] = {.lex_state = 72},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 72},
  [314] = {.lex_state = 72},
  [315] = {.lex_state = 36},
  [316] = {.lex_state = 72},
  [317] = {.lex_state = 36},
  [318] = {.lex_state = 36},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 36},
  [321] = {.lex_state = 72},
  [322] = {.lex_state = 36},
  [323] = {.lex_state = 72},
  [324] = {.lex_state = 72},
  [325] = {.lex_state = 72},
  [326] = {.lex_state = 36},
  [327] = {.lex_state = 72},
  [328] = {.lex_state = 72},
  [329] = {.lex_state = 36},
  [330] = {.lex_state = 72},
  [331] = {.lex_state = 72},
  [332] = {.lex_state = 33},
  [333] = {.lex_state = 72},
  [334] = {.lex_state = 72},
  [335] = {.lex_state = 27},
  [336] = {.lex_state = 72},
  [337] = {.lex_state = 72},
  [338] = {.lex_state = 27},
  [339] = {.lex_state = 72},
  [340] = {.lex_state = 72},
  [341] = {.lex_state = 72},
  [342] = {.lex_state = 72},
  [343] = {.lex_state = 72},
  [344] = {.lex_state = 72},
  [345] = {.lex_state = 72},
  [346] = {.lex_state = 72},
  [347] = {.lex_state = 72},
  [348] = {.lex_state = 72},
  [349] = {.lex_state = 19},
  [350] = {.lex_state = 72},
  [351] = {.lex_state = 72},
  [352] = {.lex_state = 72},
  [353] = {.lex_state = 72},
  [354] = {.lex_state = 72},
  [355] = {.lex_state = 72},
  [356] = {.lex_state = 72},
  [357] = {.lex_state = 72},
  [358] = {.lex_state = 72},
  [359] = {.lex_state = 72},
  [360] = {.lex_state = 9},
  [361] = {.lex_state = 72},
  [362] = {.lex_state = 72},
  [363] = {.lex_state = 72},
  [364] = {.lex_state = 9},
  [365] = {.lex_state = 72},
  [366] = {.lex_state = 177},
  [367] = {.lex_state = 187},
  [368] = {.lex_state = 9},
  [369] = {.lex_state = 72},
  [370] = {.lex_state = 187},
  [371] = {.lex_state = 72},
  [372] = {.lex_state = 72},
  [373] = {.lex_state = 177},
  [374] = {.lex_state = 72},
  [375] = {.lex_state = 72},
  [376] = {.lex_state = 177},
  [377] = {.lex_state = 187},
  [378] = {.lex_state = 72},
  [379] = {.lex_state = 72},
  [380] = {.lex_state = 72},
  [381] = {.lex_state = 177},
  [382] = {.lex_state = 187},
  [383] = {.lex_state = 177},
  [384] = {.lex_state = 187},
  [385] = {.lex_state = 177},
  [386] = {.lex_state = 187},
  [387] = {.lex_state = 72},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_stylesheet] = STATE(365),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(334),
    [sym__selector] = STATE(197),
    [sym_universal_selector] = STATE(197),
    [sym_class_selector] = STATE(197),
    [sym_pseudo_class_selector] = STATE(197),
    [sym_pseudo_element_selector] = STATE(197),
    [sym_id_selector] = STATE(197),
    [sym_attribute_selector] = STATE(197),
    [sym_child_selector] = STATE(197),
    [sym_descendant_selector] = STATE(197),
    [sym_sibling_selector] = STATE(197),
    [sym_adjacent_sibling_selector] = STATE(197),
    [sym_namespace_selector] = STATE(197),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(197),
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
    STATE(333), 1,
      sym_selectors,
    STATE(347), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 12,
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
    STATE(197), 13,
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
    STATE(333), 1,
      sym_selectors,
    STATE(348), 1,
      sym_last_declaration,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 12,
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
    STATE(197), 13,
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
    STATE(333), 1,
      sym_selectors,
    STATE(369), 1,
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
    STATE(197), 13,
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
    STATE(333), 1,
      sym_selectors,
    STATE(352), 1,
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
    STATE(197), 13,
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
    STATE(333), 1,
      sym_selectors,
    STATE(361), 1,
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
    STATE(197), 13,
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
    STATE(333), 1,
      sym_selectors,
    STATE(345), 1,
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
    STATE(197), 13,
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
    STATE(333), 1,
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
    STATE(197), 13,
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
    STATE(334), 1,
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
    STATE(197), 13,
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
    STATE(334), 1,
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
    STATE(197), 13,
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
  [871] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(189), 1,
      sym_nesting_selector,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(26), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(32), 1,
      sym_string_value,
    STATE(177), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(193), 12,
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
  [960] = 23,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
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
    STATE(29), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(32), 1,
      sym_string_value,
    STATE(177), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(191), 12,
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
  [1049] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(203), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(221), 1,
      sym_nesting_selector,
    STATE(32), 1,
      sym_string_value,
    STATE(36), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(199), 12,
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
  [1135] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      sym_important,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(180), 1,
      sym_namespace_selector,
    STATE(189), 1,
      sym_string_value,
    STATE(257), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(214), 11,
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
  [1220] = 22,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(43), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(247), 1,
      sym_important,
    ACTIONS(249), 1,
      sym_plain_value,
    STATE(180), 1,
      sym_namespace_selector,
    STATE(189), 1,
      sym_string_value,
    STATE(244), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(214), 11,
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
  [1305] = 21,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      anon_sym_LPAREN2,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(86), 1,
      sym_block,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(246), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(177), 10,
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
  [1384] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(312), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(281), 10,
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
  [1451] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_LPAREN2,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(312), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(276), 10,
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
  [1518] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(301), 1,
      sym_important,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(175), 10,
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
  [1590] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(307), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(175), 10,
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
  [1659] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_important,
    STATE(33), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(175), 10,
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
  [1728] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_arguments,
    ACTIONS(317), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(315), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(313), 10,
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
  [1773] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(293), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(177), 10,
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
  [1838] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(294), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(177), 10,
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
  [1903] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(302), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(177), 10,
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
  [1968] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(314), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(177), 10,
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
  [2032] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_POUND,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      sym_important,
    ACTIONS(346), 1,
      anon_sym_LPAREN2,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_integer_value_token1,
    ACTIONS(358), 1,
      aux_sym_float_value_token1,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(364), 1,
      sym_plain_value,
    ACTIONS(367), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(335), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(177), 10,
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
  [2092] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(175), 10,
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
  [2156] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(310), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(177), 10,
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
  [2220] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_POUND,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(389), 1,
      sym_important,
    ACTIONS(392), 1,
      anon_sym_LPAREN2,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      aux_sym_integer_value_token1,
    ACTIONS(404), 1,
      aux_sym_float_value_token1,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(410), 1,
      sym_plain_value,
    ACTIONS(413), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(381), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(175), 10,
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
  [2282] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(416), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(177), 10,
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
  [2342] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(420), 6,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(418), 10,
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
  [2381] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(428), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(175), 10,
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
  [2442] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 8,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 16,
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
  [2477] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_plain_value,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(434), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    STATE(175), 10,
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
  [2538] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(177), 10,
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
  [2597] = 13,
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
    ACTIONS(438), 1,
      sym_nesting_selector,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(194), 13,
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
  [2650] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(198), 13,
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
  [2700] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(446), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(81), 13,
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
  [2750] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [2808] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [2866] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(452), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
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
  [2916] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [2974] = 13,
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
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(180), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(214), 12,
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
  [3026] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(458), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(131), 13,
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
  [3076] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(460), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(130), 13,
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
  [3126] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(462), 1,
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
  [3176] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(321), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(464), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [3222] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [3280] = 12,
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
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(472), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(128), 13,
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
  [3330] = 13,
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
    ACTIONS(223), 1,
      sym_nesting_selector,
    ACTIONS(474), 1,
      sym_identifier,
    STATE(183), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(214), 12,
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
  [3382] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [3440] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [3495] = 5,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(478), 18,
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
  [3530] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_arguments,
    ACTIONS(486), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(484), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(315), 7,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3571] = 5,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(488), 18,
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
  [3606] = 5,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(492), 18,
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
  [3641] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_important,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(31), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(177), 10,
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
  [3696] = 5,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(498), 18,
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
  [3731] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(502), 1,
      sym_important,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(506), 1,
      sym_plain_value,
    STATE(279), 10,
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
  [3783] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym_important,
    ACTIONS(510), 1,
      sym_plain_value,
    STATE(256), 10,
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
  [3835] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_important,
    ACTIONS(514), 1,
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
  [3887] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym_important,
    ACTIONS(518), 1,
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
  [3939] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_important,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(257), 10,
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
  [3991] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym_important,
    ACTIONS(289), 1,
      sym_plain_value,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(276), 10,
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
  [4043] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(520), 1,
      sym_important,
    ACTIONS(522), 1,
      sym_plain_value,
    STATE(21), 10,
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
  [4095] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(524), 1,
      sym_important,
    ACTIONS(526), 1,
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
  [4147] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(528), 1,
      sym_important,
    ACTIONS(530), 1,
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
  [4199] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(532), 1,
      sym_important,
    ACTIONS(534), 1,
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
  [4251] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 1,
      sym_important,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      aux_sym_integer_value_token1,
    ACTIONS(550), 1,
      aux_sym_float_value_token1,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_plain_value,
    ACTIONS(556), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(215), 10,
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
  [4303] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      aux_sym_integer_value_token1,
    ACTIONS(550), 1,
      aux_sym_float_value_token1,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(556), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(558), 1,
      sym_important,
    ACTIONS(560), 1,
      sym_plain_value,
    STATE(187), 10,
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
  [4355] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(562), 1,
      sym_important,
    ACTIONS(564), 1,
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
  [4407] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(247), 1,
      sym_important,
    ACTIONS(249), 1,
      sym_plain_value,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(244), 10,
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
  [4459] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      sym_important,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      sym_plain_value,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(281), 10,
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
  [4511] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN2,
    ACTIONS(207), 1,
      aux_sym_integer_value_token1,
    ACTIONS(209), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(257), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_important,
    ACTIONS(568), 1,
      sym_plain_value,
    STATE(162), 10,
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
  [4563] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_important,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(291), 10,
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
  [4615] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_arguments,
    ACTIONS(321), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(315), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4651] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_important,
    ACTIONS(576), 1,
      sym_plain_value,
    STATE(239), 10,
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
  [4703] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 1,
      aux_sym_integer_value_token1,
    ACTIONS(239), 1,
      aux_sym_float_value_token1,
    ACTIONS(245), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(271), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_important,
    ACTIONS(580), 1,
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
  [4755] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_POUND,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      aux_sym_integer_value_token1,
    ACTIONS(550), 1,
      aux_sym_float_value_token1,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(556), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(582), 1,
      sym_important,
    ACTIONS(584), 1,
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
  [4807] = 4,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(586), 17,
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
  [4838] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 12,
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
  [4867] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(598), 12,
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
  [4896] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(602), 12,
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
  [4925] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(604), 18,
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
  [4954] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
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
  [4983] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(612), 18,
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
  [5012] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 12,
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
  [5041] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(622), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(620), 18,
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
  [5070] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(624), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 12,
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
  [5099] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 12,
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
  [5128] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(634), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(632), 18,
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
  [5157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(638), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(636), 12,
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
  [5186] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(642), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(640), 18,
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
  [5215] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(644), 18,
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
  [5244] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(650), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(648), 12,
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
  [5273] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(652), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(654), 12,
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
  [5302] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(658), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(656), 12,
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
  [5331] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(660), 12,
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
  [5360] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(666), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(664), 18,
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
  [5389] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(592), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(594), 12,
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
  [5418] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(668), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(670), 12,
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
  [5447] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(674), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(672), 12,
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
  [5476] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(678), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(676), 12,
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
  [5505] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(668), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(670), 12,
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
  [5534] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(680), 18,
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
  [5563] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(686), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(684), 18,
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
  [5592] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(430), 18,
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
  [5621] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(628), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(630), 12,
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
  [5650] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(690), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(688), 18,
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
  [5679] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(696), 1,
      sym_unit,
    ACTIONS(694), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(692), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5712] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(624), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(626), 12,
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
  [5741] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_unit,
    ACTIONS(700), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(698), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5774] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 12,
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
  [5803] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(678), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(676), 12,
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
  [5832] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(600), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(602), 12,
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
  [5861] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(650), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(648), 12,
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
  [5890] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(313), 18,
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
  [5919] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(706), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(704), 12,
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
  [5948] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(658), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(656), 12,
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
  [5977] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(674), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(672), 12,
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
  [6006] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(710), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(708), 12,
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
  [6035] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(714), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(712), 18,
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
  [6064] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(662), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(660), 12,
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
  [6093] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(718), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(716), 18,
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
  [6122] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(638), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(636), 12,
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
  [6151] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(722), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(720), 18,
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
  [6180] = 4,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(726), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(724), 17,
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
  [6211] = 4,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(730), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(728), 17,
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
  [6242] = 4,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(734), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(732), 17,
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
  [6273] = 4,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(736), 17,
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
  [6304] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(706), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(704), 12,
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
  [6333] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(740), 18,
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
  [6362] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(744), 18,
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
  [6391] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(710), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(708), 12,
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
  [6420] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(750), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(748), 18,
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
  [6449] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(752), 18,
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
  [6478] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(596), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(598), 12,
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
  [6507] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(758), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(756), 18,
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
  [6536] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(760), 18,
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
  [6565] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(766), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(764), 12,
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
  [6594] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(770), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(768), 12,
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
  [6623] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
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
  [6652] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(774), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(772), 18,
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
  [6681] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(776), 18,
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
  [6710] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(782), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(780), 12,
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
  [6739] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(784), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(786), 12,
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
  [6768] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 12,
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
  [6797] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(788), 18,
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
  [6826] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(792), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(794), 12,
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
  [6855] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(784), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(786), 12,
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
  [6884] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(796), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(798), 12,
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
  [6913] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(802), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(800), 12,
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
  [6942] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(766), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(764), 12,
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
  [6971] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(796), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(798), 12,
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
  [7000] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(770), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(768), 12,
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
  [7029] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(782), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(780), 12,
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
  [7058] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(792), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(794), 12,
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
  [7087] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(802), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(800), 12,
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
  [7116] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(804), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7146] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(430), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7176] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(808), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7206] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(812), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7236] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(816), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7266] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(820), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7296] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(824), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7326] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(828), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(832), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7386] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(838), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(836), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7416] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(842), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(840), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7446] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(846), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(844), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7476] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(850), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(848), 12,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7506] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7539] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7572] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(858), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(856), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7605] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(860), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(381), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7638] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(864), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(862), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7671] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7701] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7731] = 5,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(464), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(418), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7761] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7791] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(424), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [7821] = 5,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(868), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(418), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7851] = 5,
    ACTIONS(870), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(868), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7881] = 5,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(464), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(313), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [7911] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(874), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(878), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(289), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7950] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(882), 1,
      anon_sym_SEMI,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(874), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(878), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(273), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7989] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 14,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_DASH,
  [8015] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SLASH,
    ACTIONS(420), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(418), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [8043] = 9,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    STATE(148), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(253), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8078] = 14,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    STATE(310), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8122] = 3,
    ACTIONS(906), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
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
  [8144] = 14,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    STATE(314), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8188] = 14,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8232] = 3,
    ACTIONS(912), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
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
  [8254] = 3,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(313), 12,
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
  [8276] = 14,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(916), 1,
      anon_sym_LBRACE,
    STATE(327), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8320] = 12,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(918), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [8360] = 12,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8399] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(321), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8426] = 12,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8464] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(274), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8490] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(262), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8516] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(832), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(834), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8538] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(296), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8564] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(266), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8590] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_unit,
    ACTIONS(698), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(700), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8614] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(926), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(312), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8640] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_unit,
    ACTIONS(692), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(694), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8664] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(309), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8690] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(268), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8716] = 6,
    ACTIONS(263), 1,
      anon_sym_selector,
    ACTIONS(876), 1,
      anon_sym_LPAREN2,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(258), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [8742] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(820), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(822), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8763] = 11,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(888), 1,
      anon_sym_COLON_COLON,
    ACTIONS(890), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_LBRACK,
    ACTIONS(894), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_TILDE,
    ACTIONS(898), 1,
      anon_sym_PLUS,
    ACTIONS(900), 1,
      anon_sym_PIPE,
    ACTIONS(902), 1,
      sym__descendant_operator,
    ACTIONS(904), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [8798] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(808), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(810), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8819] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(315), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8848] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(848), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(850), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8869] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(432), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8890] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(812), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(814), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8911] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(840), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(842), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8932] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(824), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(826), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8953] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_arguments,
    ACTIONS(315), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [8978] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(804), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(806), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [8999] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(844), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(846), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9020] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(836), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(838), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9041] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(828), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(830), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9062] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(816), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(818), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9083] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_SLASH,
    ACTIONS(932), 1,
      sym_unit,
    ACTIONS(692), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9105] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SLASH,
    ACTIONS(934), 1,
      sym_unit,
    ACTIONS(698), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9127] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SLASH,
    ACTIONS(828), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9146] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_SLASH,
    ACTIONS(840), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9165] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(430), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9184] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SLASH,
    ACTIONS(848), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9203] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_SLASH,
    ACTIONS(812), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9222] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_SLASH,
    ACTIONS(804), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9241] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(836), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9260] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_SLASH,
    ACTIONS(816), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9279] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SLASH,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9298] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SLASH,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9317] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_SLASH,
    ACTIONS(824), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9336] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SLASH,
    ACTIONS(832), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9355] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_SLASH,
    ACTIONS(844), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [9374] = 6,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 1,
      aux_sym_integer_value_token1,
    STATE(330), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 2,
      sym_from,
      sym_to,
    STATE(252), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9396] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(946), 1,
      anon_sym_RBRACK,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    STATE(313), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9420] = 6,
    ACTIONS(940), 1,
      aux_sym_integer_value_token1,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 2,
      sym_from,
      sym_to,
    STATE(247), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9442] = 7,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(954), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_block,
    STATE(272), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [9466] = 6,
    ACTIONS(940), 1,
      aux_sym_integer_value_token1,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 2,
      sym_from,
      sym_to,
    STATE(249), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9488] = 7,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      sym_identifier,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(353), 2,
      sym_string_value,
      sym_call_expression,
  [9512] = 6,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(967), 1,
      aux_sym_integer_value_token1,
    STATE(330), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(964), 2,
      sym_from,
      sym_to,
    STATE(249), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9534] = 7,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(960), 1,
      sym_identifier,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(359), 2,
      sym_string_value,
      sym_call_expression,
  [9558] = 6,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__js_statement,
    STATE(254), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(972), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(306), 2,
      sym__js_expression,
      sym__js_block,
  [9580] = 6,
    ACTIONS(940), 1,
      aux_sym_integer_value_token1,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(938), 2,
      sym_from,
      sym_to,
    STATE(249), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [9602] = 7,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      sym_block,
    STATE(280), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [9626] = 6,
    ACTIONS(980), 1,
      anon_sym_LBRACE,
    ACTIONS(985), 1,
      sym__js_statement,
    STATE(254), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(983), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(306), 2,
      sym__js_expression,
      sym__js_block,
  [9648] = 6,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__js_statement,
    STATE(254), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(988), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(306), 2,
      sym__js_expression,
      sym__js_block,
  [9670] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(990), 1,
      anon_sym_RBRACK,
    STATE(324), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9694] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    STATE(321), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9718] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(994), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9731] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9744] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(996), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [9763] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    STATE(264), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [9784] = 6,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_block,
    STATE(295), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [9805] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    ACTIONS(1004), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [9826] = 6,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
    ACTIONS(1006), 1,
      anon_sym_LBRACE,
    ACTIONS(1009), 1,
      sym__js_statement,
    STATE(264), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [9847] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1012), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9860] = 6,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      sym_block,
    STATE(304), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [9881] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(264), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [9902] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1016), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9915] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1018), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9928] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1020), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [9941] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    STATE(263), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [9959] = 6,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1022), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9979] = 5,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1024), 1,
      anon_sym_SEMI,
    STATE(325), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [9997] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1026), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10011] = 3,
    ACTIONS(1030), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1028), 4,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
  [10025] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10043] = 5,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1034), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(362), 2,
      sym_string_value,
      sym_call_expression,
  [10061] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10079] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1038), 1,
      anon_sym_SEMI,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10097] = 6,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10117] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10135] = 5,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(1044), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(363), 2,
      sym_string_value,
      sym_call_expression,
  [10153] = 3,
    ACTIONS(1048), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1046), 4,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
  [10167] = 5,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__js_statement,
    STATE(255), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(306), 2,
      sym__js_expression,
      sym__js_block,
  [10185] = 5,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__js_statement,
    STATE(251), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(306), 2,
      sym__js_expression,
      sym__js_block,
  [10203] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1050), 1,
      anon_sym_SEMI,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10221] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1052), 1,
      anon_sym_RBRACK,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10239] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    STATE(267), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [10257] = 5,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      anon_sym_SEMI,
    STATE(328), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [10275] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      sym__js_statement,
    STATE(261), 1,
      aux_sym__js_expressions,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    STATE(322), 2,
      sym__js_expression,
      sym__js_block,
  [10293] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_SLASH,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(944), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10311] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1058), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10322] = 4,
    ACTIONS(1060), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10337] = 4,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10352] = 5,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10369] = 4,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [10384] = 3,
    ACTIONS(930), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10397] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10408] = 4,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1026), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [10423] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(768), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10434] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1067), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10445] = 4,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10460] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(648), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [10471] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      sym_block,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10488] = 4,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1071), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10503] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1074), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10514] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1076), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [10525] = 4,
    ACTIONS(1078), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10540] = 4,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [10555] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10569] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10583] = 3,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(956), 2,
      anon_sym_and,
      anon_sym_or,
  [10595] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1087), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10609] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(323), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10623] = 4,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    ACTIONS(1093), 1,
      sym__js_statement,
    STATE(329), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10637] = 4,
    ACTIONS(996), 1,
      anon_sym_RBRACK,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10651] = 4,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
    ACTIONS(1100), 1,
      sym__js_statement,
    STATE(318), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10665] = 4,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    ACTIONS(1104), 1,
      sym__js_statement,
    STATE(319), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10679] = 4,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    ACTIONS(1108), 1,
      sym__js_statement,
    STATE(319), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10693] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1058), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10703] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10717] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1074), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10727] = 4,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    STATE(323), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10741] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
    STATE(316), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10755] = 4,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10769] = 2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1076), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [10779] = 4,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      anon_sym_LBRACE,
    STATE(308), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10793] = 4,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(1122), 1,
      anon_sym_SEMI,
    STATE(299), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10807] = 4,
    ACTIONS(1104), 1,
      sym__js_statement,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      aux_sym__js_block_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [10821] = 3,
    ACTIONS(1126), 1,
      anon_sym_LBRACE,
    STATE(301), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10832] = 3,
    ACTIONS(1128), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10843] = 3,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    ACTIONS(1130), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10854] = 3,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10865] = 3,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10876] = 3,
    ACTIONS(1132), 1,
      aux_sym_color_value_token1,
    ACTIONS(1134), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10887] = 3,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10898] = 3,
    ACTIONS(1128), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10909] = 3,
    ACTIONS(1134), 1,
      sym_identifier,
    ACTIONS(1138), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10920] = 3,
    ACTIONS(1140), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10931] = 3,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10942] = 2,
    ACTIONS(1142), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10950] = 2,
    ACTIONS(1144), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10958] = 2,
    ACTIONS(1146), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10966] = 2,
    ACTIONS(1146), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10974] = 2,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10982] = 2,
    ACTIONS(1150), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10990] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10998] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11006] = 2,
    ACTIONS(1152), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11014] = 2,
    ACTIONS(1154), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11022] = 2,
    ACTIONS(1154), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11030] = 2,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11038] = 2,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11046] = 2,
    ACTIONS(1160), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11054] = 2,
    ACTIONS(1160), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11062] = 2,
    ACTIONS(1162), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11070] = 2,
    ACTIONS(1162), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11078] = 2,
    ACTIONS(1142), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11086] = 2,
    ACTIONS(1164), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11094] = 2,
    ACTIONS(1166), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11102] = 2,
    ACTIONS(1168), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11110] = 2,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11118] = 2,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11126] = 2,
    ACTIONS(1174), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11134] = 2,
    ACTIONS(1176), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11142] = 2,
    ACTIONS(1178), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11150] = 2,
    ACTIONS(1180), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11158] = 2,
    ACTIONS(1182), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11166] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11174] = 2,
    ACTIONS(1184), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11182] = 2,
    ACTIONS(1150), 1,
      anon_sym_SQUOTE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11190] = 2,
    ACTIONS(1186), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11198] = 2,
    ACTIONS(1188), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11206] = 2,
    ACTIONS(1190), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11214] = 2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11222] = 2,
    ACTIONS(1194), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11230] = 2,
    ACTIONS(1196), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11238] = 2,
    ACTIONS(1198), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11246] = 2,
    ACTIONS(1200), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11254] = 2,
    ACTIONS(1202), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11262] = 2,
    ACTIONS(1204), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11270] = 2,
    ACTIONS(1206), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11278] = 2,
    ACTIONS(1208), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11286] = 2,
    ACTIONS(1210), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11294] = 2,
    ACTIONS(1212), 1,
      aux_sym_string_value_token1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11302] = 2,
    ACTIONS(1214), 1,
      aux_sym_string_value_token2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
  [11310] = 2,
    ACTIONS(1216), 1,
      sym_identifier,
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
  [SMALL_STATE(12)] = 960,
  [SMALL_STATE(13)] = 1049,
  [SMALL_STATE(14)] = 1135,
  [SMALL_STATE(15)] = 1220,
  [SMALL_STATE(16)] = 1305,
  [SMALL_STATE(17)] = 1384,
  [SMALL_STATE(18)] = 1451,
  [SMALL_STATE(19)] = 1518,
  [SMALL_STATE(20)] = 1590,
  [SMALL_STATE(21)] = 1659,
  [SMALL_STATE(22)] = 1728,
  [SMALL_STATE(23)] = 1773,
  [SMALL_STATE(24)] = 1838,
  [SMALL_STATE(25)] = 1903,
  [SMALL_STATE(26)] = 1968,
  [SMALL_STATE(27)] = 2032,
  [SMALL_STATE(28)] = 2092,
  [SMALL_STATE(29)] = 2156,
  [SMALL_STATE(30)] = 2220,
  [SMALL_STATE(31)] = 2282,
  [SMALL_STATE(32)] = 2342,
  [SMALL_STATE(33)] = 2381,
  [SMALL_STATE(34)] = 2442,
  [SMALL_STATE(35)] = 2477,
  [SMALL_STATE(36)] = 2538,
  [SMALL_STATE(37)] = 2597,
  [SMALL_STATE(38)] = 2650,
  [SMALL_STATE(39)] = 2700,
  [SMALL_STATE(40)] = 2750,
  [SMALL_STATE(41)] = 2808,
  [SMALL_STATE(42)] = 2866,
  [SMALL_STATE(43)] = 2916,
  [SMALL_STATE(44)] = 2974,
  [SMALL_STATE(45)] = 3026,
  [SMALL_STATE(46)] = 3076,
  [SMALL_STATE(47)] = 3126,
  [SMALL_STATE(48)] = 3176,
  [SMALL_STATE(49)] = 3222,
  [SMALL_STATE(50)] = 3280,
  [SMALL_STATE(51)] = 3330,
  [SMALL_STATE(52)] = 3382,
  [SMALL_STATE(53)] = 3440,
  [SMALL_STATE(54)] = 3495,
  [SMALL_STATE(55)] = 3530,
  [SMALL_STATE(56)] = 3571,
  [SMALL_STATE(57)] = 3606,
  [SMALL_STATE(58)] = 3641,
  [SMALL_STATE(59)] = 3696,
  [SMALL_STATE(60)] = 3731,
  [SMALL_STATE(61)] = 3783,
  [SMALL_STATE(62)] = 3835,
  [SMALL_STATE(63)] = 3887,
  [SMALL_STATE(64)] = 3939,
  [SMALL_STATE(65)] = 3991,
  [SMALL_STATE(66)] = 4043,
  [SMALL_STATE(67)] = 4095,
  [SMALL_STATE(68)] = 4147,
  [SMALL_STATE(69)] = 4199,
  [SMALL_STATE(70)] = 4251,
  [SMALL_STATE(71)] = 4303,
  [SMALL_STATE(72)] = 4355,
  [SMALL_STATE(73)] = 4407,
  [SMALL_STATE(74)] = 4459,
  [SMALL_STATE(75)] = 4511,
  [SMALL_STATE(76)] = 4563,
  [SMALL_STATE(77)] = 4615,
  [SMALL_STATE(78)] = 4651,
  [SMALL_STATE(79)] = 4703,
  [SMALL_STATE(80)] = 4755,
  [SMALL_STATE(81)] = 4807,
  [SMALL_STATE(82)] = 4838,
  [SMALL_STATE(83)] = 4867,
  [SMALL_STATE(84)] = 4896,
  [SMALL_STATE(85)] = 4925,
  [SMALL_STATE(86)] = 4954,
  [SMALL_STATE(87)] = 4983,
  [SMALL_STATE(88)] = 5012,
  [SMALL_STATE(89)] = 5041,
  [SMALL_STATE(90)] = 5070,
  [SMALL_STATE(91)] = 5099,
  [SMALL_STATE(92)] = 5128,
  [SMALL_STATE(93)] = 5157,
  [SMALL_STATE(94)] = 5186,
  [SMALL_STATE(95)] = 5215,
  [SMALL_STATE(96)] = 5244,
  [SMALL_STATE(97)] = 5273,
  [SMALL_STATE(98)] = 5302,
  [SMALL_STATE(99)] = 5331,
  [SMALL_STATE(100)] = 5360,
  [SMALL_STATE(101)] = 5389,
  [SMALL_STATE(102)] = 5418,
  [SMALL_STATE(103)] = 5447,
  [SMALL_STATE(104)] = 5476,
  [SMALL_STATE(105)] = 5505,
  [SMALL_STATE(106)] = 5534,
  [SMALL_STATE(107)] = 5563,
  [SMALL_STATE(108)] = 5592,
  [SMALL_STATE(109)] = 5621,
  [SMALL_STATE(110)] = 5650,
  [SMALL_STATE(111)] = 5679,
  [SMALL_STATE(112)] = 5712,
  [SMALL_STATE(113)] = 5741,
  [SMALL_STATE(114)] = 5774,
  [SMALL_STATE(115)] = 5803,
  [SMALL_STATE(116)] = 5832,
  [SMALL_STATE(117)] = 5861,
  [SMALL_STATE(118)] = 5890,
  [SMALL_STATE(119)] = 5919,
  [SMALL_STATE(120)] = 5948,
  [SMALL_STATE(121)] = 5977,
  [SMALL_STATE(122)] = 6006,
  [SMALL_STATE(123)] = 6035,
  [SMALL_STATE(124)] = 6064,
  [SMALL_STATE(125)] = 6093,
  [SMALL_STATE(126)] = 6122,
  [SMALL_STATE(127)] = 6151,
  [SMALL_STATE(128)] = 6180,
  [SMALL_STATE(129)] = 6211,
  [SMALL_STATE(130)] = 6242,
  [SMALL_STATE(131)] = 6273,
  [SMALL_STATE(132)] = 6304,
  [SMALL_STATE(133)] = 6333,
  [SMALL_STATE(134)] = 6362,
  [SMALL_STATE(135)] = 6391,
  [SMALL_STATE(136)] = 6420,
  [SMALL_STATE(137)] = 6449,
  [SMALL_STATE(138)] = 6478,
  [SMALL_STATE(139)] = 6507,
  [SMALL_STATE(140)] = 6536,
  [SMALL_STATE(141)] = 6565,
  [SMALL_STATE(142)] = 6594,
  [SMALL_STATE(143)] = 6623,
  [SMALL_STATE(144)] = 6652,
  [SMALL_STATE(145)] = 6681,
  [SMALL_STATE(146)] = 6710,
  [SMALL_STATE(147)] = 6739,
  [SMALL_STATE(148)] = 6768,
  [SMALL_STATE(149)] = 6797,
  [SMALL_STATE(150)] = 6826,
  [SMALL_STATE(151)] = 6855,
  [SMALL_STATE(152)] = 6884,
  [SMALL_STATE(153)] = 6913,
  [SMALL_STATE(154)] = 6942,
  [SMALL_STATE(155)] = 6971,
  [SMALL_STATE(156)] = 7000,
  [SMALL_STATE(157)] = 7029,
  [SMALL_STATE(158)] = 7058,
  [SMALL_STATE(159)] = 7087,
  [SMALL_STATE(160)] = 7116,
  [SMALL_STATE(161)] = 7146,
  [SMALL_STATE(162)] = 7176,
  [SMALL_STATE(163)] = 7206,
  [SMALL_STATE(164)] = 7236,
  [SMALL_STATE(165)] = 7266,
  [SMALL_STATE(166)] = 7296,
  [SMALL_STATE(167)] = 7326,
  [SMALL_STATE(168)] = 7356,
  [SMALL_STATE(169)] = 7386,
  [SMALL_STATE(170)] = 7416,
  [SMALL_STATE(171)] = 7446,
  [SMALL_STATE(172)] = 7476,
  [SMALL_STATE(173)] = 7506,
  [SMALL_STATE(174)] = 7539,
  [SMALL_STATE(175)] = 7572,
  [SMALL_STATE(176)] = 7605,
  [SMALL_STATE(177)] = 7638,
  [SMALL_STATE(178)] = 7671,
  [SMALL_STATE(179)] = 7701,
  [SMALL_STATE(180)] = 7731,
  [SMALL_STATE(181)] = 7761,
  [SMALL_STATE(182)] = 7791,
  [SMALL_STATE(183)] = 7821,
  [SMALL_STATE(184)] = 7851,
  [SMALL_STATE(185)] = 7881,
  [SMALL_STATE(186)] = 7911,
  [SMALL_STATE(187)] = 7950,
  [SMALL_STATE(188)] = 7989,
  [SMALL_STATE(189)] = 8015,
  [SMALL_STATE(190)] = 8043,
  [SMALL_STATE(191)] = 8078,
  [SMALL_STATE(192)] = 8122,
  [SMALL_STATE(193)] = 8144,
  [SMALL_STATE(194)] = 8188,
  [SMALL_STATE(195)] = 8232,
  [SMALL_STATE(196)] = 8254,
  [SMALL_STATE(197)] = 8276,
  [SMALL_STATE(198)] = 8320,
  [SMALL_STATE(199)] = 8360,
  [SMALL_STATE(200)] = 8399,
  [SMALL_STATE(201)] = 8426,
  [SMALL_STATE(202)] = 8464,
  [SMALL_STATE(203)] = 8490,
  [SMALL_STATE(204)] = 8516,
  [SMALL_STATE(205)] = 8538,
  [SMALL_STATE(206)] = 8564,
  [SMALL_STATE(207)] = 8590,
  [SMALL_STATE(208)] = 8614,
  [SMALL_STATE(209)] = 8640,
  [SMALL_STATE(210)] = 8664,
  [SMALL_STATE(211)] = 8690,
  [SMALL_STATE(212)] = 8716,
  [SMALL_STATE(213)] = 8742,
  [SMALL_STATE(214)] = 8763,
  [SMALL_STATE(215)] = 8798,
  [SMALL_STATE(216)] = 8819,
  [SMALL_STATE(217)] = 8848,
  [SMALL_STATE(218)] = 8869,
  [SMALL_STATE(219)] = 8890,
  [SMALL_STATE(220)] = 8911,
  [SMALL_STATE(221)] = 8932,
  [SMALL_STATE(222)] = 8953,
  [SMALL_STATE(223)] = 8978,
  [SMALL_STATE(224)] = 8999,
  [SMALL_STATE(225)] = 9020,
  [SMALL_STATE(226)] = 9041,
  [SMALL_STATE(227)] = 9062,
  [SMALL_STATE(228)] = 9083,
  [SMALL_STATE(229)] = 9105,
  [SMALL_STATE(230)] = 9127,
  [SMALL_STATE(231)] = 9146,
  [SMALL_STATE(232)] = 9165,
  [SMALL_STATE(233)] = 9184,
  [SMALL_STATE(234)] = 9203,
  [SMALL_STATE(235)] = 9222,
  [SMALL_STATE(236)] = 9241,
  [SMALL_STATE(237)] = 9260,
  [SMALL_STATE(238)] = 9279,
  [SMALL_STATE(239)] = 9298,
  [SMALL_STATE(240)] = 9317,
  [SMALL_STATE(241)] = 9336,
  [SMALL_STATE(242)] = 9355,
  [SMALL_STATE(243)] = 9374,
  [SMALL_STATE(244)] = 9396,
  [SMALL_STATE(245)] = 9420,
  [SMALL_STATE(246)] = 9442,
  [SMALL_STATE(247)] = 9466,
  [SMALL_STATE(248)] = 9488,
  [SMALL_STATE(249)] = 9512,
  [SMALL_STATE(250)] = 9534,
  [SMALL_STATE(251)] = 9558,
  [SMALL_STATE(252)] = 9580,
  [SMALL_STATE(253)] = 9602,
  [SMALL_STATE(254)] = 9626,
  [SMALL_STATE(255)] = 9648,
  [SMALL_STATE(256)] = 9670,
  [SMALL_STATE(257)] = 9694,
  [SMALL_STATE(258)] = 9718,
  [SMALL_STATE(259)] = 9731,
  [SMALL_STATE(260)] = 9744,
  [SMALL_STATE(261)] = 9763,
  [SMALL_STATE(262)] = 9784,
  [SMALL_STATE(263)] = 9805,
  [SMALL_STATE(264)] = 9826,
  [SMALL_STATE(265)] = 9847,
  [SMALL_STATE(266)] = 9860,
  [SMALL_STATE(267)] = 9881,
  [SMALL_STATE(268)] = 9902,
  [SMALL_STATE(269)] = 9915,
  [SMALL_STATE(270)] = 9928,
  [SMALL_STATE(271)] = 9941,
  [SMALL_STATE(272)] = 9959,
  [SMALL_STATE(273)] = 9979,
  [SMALL_STATE(274)] = 9997,
  [SMALL_STATE(275)] = 10011,
  [SMALL_STATE(276)] = 10025,
  [SMALL_STATE(277)] = 10043,
  [SMALL_STATE(278)] = 10061,
  [SMALL_STATE(279)] = 10079,
  [SMALL_STATE(280)] = 10097,
  [SMALL_STATE(281)] = 10117,
  [SMALL_STATE(282)] = 10135,
  [SMALL_STATE(283)] = 10153,
  [SMALL_STATE(284)] = 10167,
  [SMALL_STATE(285)] = 10185,
  [SMALL_STATE(286)] = 10203,
  [SMALL_STATE(287)] = 10221,
  [SMALL_STATE(288)] = 10239,
  [SMALL_STATE(289)] = 10257,
  [SMALL_STATE(290)] = 10275,
  [SMALL_STATE(291)] = 10293,
  [SMALL_STATE(292)] = 10311,
  [SMALL_STATE(293)] = 10322,
  [SMALL_STATE(294)] = 10337,
  [SMALL_STATE(295)] = 10352,
  [SMALL_STATE(296)] = 10369,
  [SMALL_STATE(297)] = 10384,
  [SMALL_STATE(298)] = 10397,
  [SMALL_STATE(299)] = 10408,
  [SMALL_STATE(300)] = 10423,
  [SMALL_STATE(301)] = 10434,
  [SMALL_STATE(302)] = 10445,
  [SMALL_STATE(303)] = 10460,
  [SMALL_STATE(304)] = 10471,
  [SMALL_STATE(305)] = 10488,
  [SMALL_STATE(306)] = 10503,
  [SMALL_STATE(307)] = 10514,
  [SMALL_STATE(308)] = 10525,
  [SMALL_STATE(309)] = 10540,
  [SMALL_STATE(310)] = 10555,
  [SMALL_STATE(311)] = 10569,
  [SMALL_STATE(312)] = 10583,
  [SMALL_STATE(313)] = 10595,
  [SMALL_STATE(314)] = 10609,
  [SMALL_STATE(315)] = 10623,
  [SMALL_STATE(316)] = 10637,
  [SMALL_STATE(317)] = 10651,
  [SMALL_STATE(318)] = 10665,
  [SMALL_STATE(319)] = 10679,
  [SMALL_STATE(320)] = 10693,
  [SMALL_STATE(321)] = 10703,
  [SMALL_STATE(322)] = 10717,
  [SMALL_STATE(323)] = 10727,
  [SMALL_STATE(324)] = 10741,
  [SMALL_STATE(325)] = 10755,
  [SMALL_STATE(326)] = 10769,
  [SMALL_STATE(327)] = 10779,
  [SMALL_STATE(328)] = 10793,
  [SMALL_STATE(329)] = 10807,
  [SMALL_STATE(330)] = 10821,
  [SMALL_STATE(331)] = 10832,
  [SMALL_STATE(332)] = 10843,
  [SMALL_STATE(333)] = 10854,
  [SMALL_STATE(334)] = 10865,
  [SMALL_STATE(335)] = 10876,
  [SMALL_STATE(336)] = 10887,
  [SMALL_STATE(337)] = 10898,
  [SMALL_STATE(338)] = 10909,
  [SMALL_STATE(339)] = 10920,
  [SMALL_STATE(340)] = 10931,
  [SMALL_STATE(341)] = 10942,
  [SMALL_STATE(342)] = 10950,
  [SMALL_STATE(343)] = 10958,
  [SMALL_STATE(344)] = 10966,
  [SMALL_STATE(345)] = 10974,
  [SMALL_STATE(346)] = 10982,
  [SMALL_STATE(347)] = 10990,
  [SMALL_STATE(348)] = 10998,
  [SMALL_STATE(349)] = 11006,
  [SMALL_STATE(350)] = 11014,
  [SMALL_STATE(351)] = 11022,
  [SMALL_STATE(352)] = 11030,
  [SMALL_STATE(353)] = 11038,
  [SMALL_STATE(354)] = 11046,
  [SMALL_STATE(355)] = 11054,
  [SMALL_STATE(356)] = 11062,
  [SMALL_STATE(357)] = 11070,
  [SMALL_STATE(358)] = 11078,
  [SMALL_STATE(359)] = 11086,
  [SMALL_STATE(360)] = 11094,
  [SMALL_STATE(361)] = 11102,
  [SMALL_STATE(362)] = 11110,
  [SMALL_STATE(363)] = 11118,
  [SMALL_STATE(364)] = 11126,
  [SMALL_STATE(365)] = 11134,
  [SMALL_STATE(366)] = 11142,
  [SMALL_STATE(367)] = 11150,
  [SMALL_STATE(368)] = 11158,
  [SMALL_STATE(369)] = 11166,
  [SMALL_STATE(370)] = 11174,
  [SMALL_STATE(371)] = 11182,
  [SMALL_STATE(372)] = 11190,
  [SMALL_STATE(373)] = 11198,
  [SMALL_STATE(374)] = 11206,
  [SMALL_STATE(375)] = 11214,
  [SMALL_STATE(376)] = 11222,
  [SMALL_STATE(377)] = 11230,
  [SMALL_STATE(378)] = 11238,
  [SMALL_STATE(379)] = 11246,
  [SMALL_STATE(380)] = 11254,
  [SMALL_STATE(381)] = 11262,
  [SMALL_STATE(382)] = 11270,
  [SMALL_STATE(383)] = 11278,
  [SMALL_STATE(384)] = 11286,
  [SMALL_STATE(385)] = 11294,
  [SMALL_STATE(386)] = 11302,
  [SMALL_STATE(387)] = 11310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(206),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(67),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(282),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(210),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(197),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(94),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(378),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(375),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(374),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(44),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(373),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(370),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(196),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(284),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(80),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(203),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(60),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(277),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(379),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(205),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(197),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(94),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(378),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(375),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(374),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(44),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(373),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(370),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(192),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(190),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(285),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(275),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(364),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(73),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(177),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(74),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(381),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(382),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(113),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(111),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(77),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(177),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2), SHIFT_REPEAT(290),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 15),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(69),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(364),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(73),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(175),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(74),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(381),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(382),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(77),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(175),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(290),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, .production_id = 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 15),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(330),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(332),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(317),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [985] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(306),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [1002] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1006] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(315),
  [1009] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(322),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(202),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(58),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(38),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(63),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(319),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(13),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
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
