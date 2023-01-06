#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 315
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 10
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_COLON = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_POUND = 19,
  anon_sym_LBRACK = 20,
  anon_sym_EQ = 21,
  anon_sym_TILDE_EQ = 22,
  anon_sym_CARET_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_DOLLAR_EQ = 26,
  anon_sym_RBRACK = 27,
  anon_sym_GT = 28,
  anon_sym_TILDE = 29,
  anon_sym_PLUS = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_important = 33,
  anon_sym_LPAREN2 = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_not = 37,
  anon_sym_only = 38,
  anon_sym_selector = 39,
  aux_sym_color_value_token1 = 40,
  sym_string_value = 41,
  aux_sym_integer_value_token1 = 42,
  aux_sym_float_value_token1 = 43,
  sym_unit = 44,
  anon_sym_DASH = 45,
  anon_sym_SLASH = 46,
  sym_identifier = 47,
  sym_at_keyword = 48,
  sym_comment = 49,
  sym_plain_value = 50,
  anon_sym_DOLLAR_LBRACE = 51,
  anon_sym_RBRACE_SEMI = 52,
  sym__js_statement = 53,
  sym__descendant_operator = 54,
  sym_stylesheet = 55,
  sym_import_statement = 56,
  sym_media_statement = 57,
  sym_charset_statement = 58,
  sym_namespace_statement = 59,
  sym_keyframes_statement = 60,
  sym_keyframe_block_list = 61,
  sym_keyframe_block = 62,
  sym_supports_statement = 63,
  sym_at_rule = 64,
  sym_rule_set = 65,
  sym_selectors = 66,
  sym_block = 67,
  sym__selector = 68,
  sym_universal_selector = 69,
  sym_class_selector = 70,
  sym_pseudo_class_selector = 71,
  sym_pseudo_element_selector = 72,
  sym_id_selector = 73,
  sym_attribute_selector = 74,
  sym_child_selector = 75,
  sym_descendant_selector = 76,
  sym_sibling_selector = 77,
  sym_adjacent_sibling_selector = 78,
  sym_pseudo_class_arguments = 79,
  sym_declaration = 80,
  sym_last_declaration = 81,
  sym__query = 82,
  sym_feature_query = 83,
  sym_parenthesized_query = 84,
  sym_binary_query = 85,
  sym_unary_query = 86,
  sym_selector_query = 87,
  sym__value = 88,
  sym_parenthesized_value = 89,
  sym_color_value = 90,
  sym_integer_value = 91,
  sym_float_value = 92,
  sym_call_expression = 93,
  sym_binary_expression = 94,
  sym_arguments = 95,
  sym_interpolation = 96,
  sym__inline_interpolation = 97,
  aux_sym__js_expressions = 98,
  sym__js_expression = 99,
  sym__js_block = 100,
  sym_pseudo_element_arguments = 101,
  aux_sym_stylesheet_repeat1 = 102,
  aux_sym_import_statement_repeat1 = 103,
  aux_sym_keyframe_block_list_repeat1 = 104,
  aux_sym_selectors_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  aux_sym_pseudo_class_arguments_repeat1 = 107,
  aux_sym_pseudo_class_arguments_repeat2 = 108,
  aux_sym_declaration_repeat1 = 109,
  aux_sym_arguments_repeat1 = 110,
  aux_sym__js_block_repeat1 = 111,
  alias_sym_class_name = 112,
  alias_sym_feature_name = 113,
  alias_sym_function_name = 114,
  alias_sym_id_name = 115,
  alias_sym_js_expression = 116,
  alias_sym_keyframes_name = 117,
  alias_sym_keyword_query = 118,
  alias_sym_namespace_name = 119,
  alias_sym_property_name = 120,
  alias_sym_tag_name = 121,
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
  [anon_sym_COLON] = ":",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "attribute_name",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE_SEMI] = "};",
  [sym__js_statement] = "_js_statement",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
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
  [sym_pseudo_class_arguments] = "arguments",
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
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_interpolation] = "interpolation",
  [sym__inline_interpolation] = "interpolation",
  [aux_sym__js_expressions] = "_js_expressions",
  [sym__js_expression] = "_js_expression",
  [sym__js_block] = "_js_block",
  [sym_pseudo_element_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__js_block_repeat1] = "_js_block_repeat1",
  [alias_sym_class_name] = "class_name",
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE_SEMI] = anon_sym_RBRACE_SEMI,
  [sym__js_statement] = sym__js_statement,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
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
  [sym_pseudo_class_arguments] = sym_arguments,
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
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_interpolation] = sym_interpolation,
  [sym__inline_interpolation] = sym_interpolation,
  [aux_sym__js_expressions] = aux_sym__js_expressions,
  [sym__js_expression] = sym__js_expression,
  [sym__js_block] = sym__js_block,
  [sym_pseudo_element_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__js_block_repeat1] = aux_sym__js_block_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_not] = {
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
  [sym_string_value] = {
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
  [sym_pseudo_class_arguments] = {
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
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
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
  [sym_pseudo_element_arguments] = {
    .visible = true,
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
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
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
  [alias_sym_class_name] = {
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
    [1] = alias_sym_class_name,
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
    [1] = alias_sym_js_expression,
  },
  [10] = {
    [2] = alias_sym_class_name,
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
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__js_expressions, 2,
    aux_sym__js_expressions,
    alias_sym_js_expression,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 2,
  [6] = 3,
  [7] = 3,
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
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [53] = 37,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 50,
  [58] = 52,
  [59] = 47,
  [60] = 46,
  [61] = 61,
  [62] = 38,
  [63] = 39,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 43,
  [68] = 44,
  [69] = 69,
  [70] = 45,
  [71] = 49,
  [72] = 72,
  [73] = 72,
  [74] = 51,
  [75] = 55,
  [76] = 56,
  [77] = 69,
  [78] = 61,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 36,
  [83] = 79,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 84,
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
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 102,
  [111] = 111,
  [112] = 112,
  [113] = 107,
  [114] = 105,
  [115] = 109,
  [116] = 109,
  [117] = 117,
  [118] = 103,
  [119] = 119,
  [120] = 107,
  [121] = 111,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
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
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 54,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 85,
  [163] = 158,
  [164] = 159,
  [165] = 91,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 166,
  [171] = 89,
  [172] = 172,
  [173] = 96,
  [174] = 94,
  [175] = 90,
  [176] = 176,
  [177] = 99,
  [178] = 97,
  [179] = 100,
  [180] = 101,
  [181] = 98,
  [182] = 93,
  [183] = 54,
  [184] = 85,
  [185] = 89,
  [186] = 91,
  [187] = 98,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 97,
  [192] = 189,
  [193] = 190,
  [194] = 93,
  [195] = 100,
  [196] = 196,
  [197] = 101,
  [198] = 198,
  [199] = 199,
  [200] = 96,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 199,
  [205] = 99,
  [206] = 94,
  [207] = 90,
  [208] = 198,
  [209] = 209,
  [210] = 210,
  [211] = 209,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 214,
  [217] = 217,
  [218] = 218,
  [219] = 214,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 226,
  [230] = 227,
  [231] = 231,
  [232] = 232,
  [233] = 225,
  [234] = 226,
  [235] = 220,
  [236] = 236,
  [237] = 231,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 55,
  [245] = 239,
  [246] = 241,
  [247] = 247,
  [248] = 40,
  [249] = 47,
  [250] = 241,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 242,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 240,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 257,
  [268] = 253,
  [269] = 266,
  [270] = 261,
  [271] = 271,
  [272] = 272,
  [273] = 252,
  [274] = 85,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 280,
  [282] = 276,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 285,
  [289] = 289,
  [290] = 290,
  [291] = 289,
  [292] = 292,
  [293] = 287,
  [294] = 294,
  [295] = 289,
  [296] = 287,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 292,
  [301] = 301,
  [302] = 290,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 307,
  [309] = 309,
  [310] = 286,
  [311] = 305,
  [312] = 312,
  [313] = 313,
  [314] = 285,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
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

static inline bool sym_plain_value_character_set_2(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(194);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '{') ADVANCE(263);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(263);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 71:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 72:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(262);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(47);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(264);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == 'y') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(194);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(25);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(72);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 76},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3, .external_lex_state = 1},
  [18] = {.lex_state = 2, .external_lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 76},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 76, .external_lex_state = 1},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 76, .external_lex_state = 1},
  [127] = {.lex_state = 76, .external_lex_state = 1},
  [128] = {.lex_state = 76, .external_lex_state = 1},
  [129] = {.lex_state = 76, .external_lex_state = 1},
  [130] = {.lex_state = 76, .external_lex_state = 1},
  [131] = {.lex_state = 76, .external_lex_state = 1},
  [132] = {.lex_state = 76, .external_lex_state = 1},
  [133] = {.lex_state = 76, .external_lex_state = 1},
  [134] = {.lex_state = 76, .external_lex_state = 1},
  [135] = {.lex_state = 76, .external_lex_state = 1},
  [136] = {.lex_state = 76, .external_lex_state = 1},
  [137] = {.lex_state = 76, .external_lex_state = 1},
  [138] = {.lex_state = 76, .external_lex_state = 1},
  [139] = {.lex_state = 76, .external_lex_state = 1},
  [140] = {.lex_state = 76, .external_lex_state = 1},
  [141] = {.lex_state = 76, .external_lex_state = 1},
  [142] = {.lex_state = 76, .external_lex_state = 1},
  [143] = {.lex_state = 76, .external_lex_state = 1},
  [144] = {.lex_state = 76, .external_lex_state = 1},
  [145] = {.lex_state = 76, .external_lex_state = 1},
  [146] = {.lex_state = 76, .external_lex_state = 1},
  [147] = {.lex_state = 76, .external_lex_state = 1},
  [148] = {.lex_state = 76, .external_lex_state = 1},
  [149] = {.lex_state = 76, .external_lex_state = 1},
  [150] = {.lex_state = 76, .external_lex_state = 1},
  [151] = {.lex_state = 76, .external_lex_state = 1},
  [152] = {.lex_state = 76, .external_lex_state = 1},
  [153] = {.lex_state = 11},
  [154] = {.lex_state = 76, .external_lex_state = 1},
  [155] = {.lex_state = 76, .external_lex_state = 1},
  [156] = {.lex_state = 76, .external_lex_state = 1},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 76, .external_lex_state = 1},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 76, .external_lex_state = 1},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 76, .external_lex_state = 1},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 76, .external_lex_state = 1},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 76, .external_lex_state = 1},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 76, .external_lex_state = 1},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 26},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 26},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 26},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 27},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 27},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 27},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 76},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 26},
  [228] = {.lex_state = 26},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 26},
  [231] = {.lex_state = 26},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 76},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 26},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 26},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 26},
  [253] = {.lex_state = 26},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 27},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 76},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 27},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 76},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 27},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 18},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 76},
  [279] = {.lex_state = 76},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 76},
  [285] = {.lex_state = 76},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 76},
  [288] = {.lex_state = 76},
  [289] = {.lex_state = 24},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 24},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 76},
  [294] = {.lex_state = 76},
  [295] = {.lex_state = 24},
  [296] = {.lex_state = 76},
  [297] = {.lex_state = 76},
  [298] = {.lex_state = 76},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 76},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 76},
  [304] = {.lex_state = 76},
  [305] = {.lex_state = 76},
  [306] = {.lex_state = 76},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 76},
  [312] = {.lex_state = 76},
  [313] = {.lex_state = 76},
  [314] = {.lex_state = 76},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
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
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_SEMI] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(299),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(280),
    [sym__selector] = STATE(140),
    [sym_universal_selector] = STATE(140),
    [sym_class_selector] = STATE(140),
    [sym_pseudo_class_selector] = STATE(140),
    [sym_pseudo_element_selector] = STATE(140),
    [sym_id_selector] = STATE(140),
    [sym_attribute_selector] = STATE(140),
    [sym_child_selector] = STATE(140),
    [sym_descendant_selector] = STATE(140),
    [sym_sibling_selector] = STATE(140),
    [sym_adjacent_sibling_selector] = STATE(140),
    [sym_declaration] = STATE(10),
    [sym_interpolation] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_keyframes_statement_token1] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(296), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(6), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [89] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(314), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(293), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [267] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(287), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [356] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(285), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [445] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(51), 1,
      anon_sym_ATsupports,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_at_keyword,
    ACTIONS(57), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(281), 1,
      sym_selectors,
    STATE(288), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(8), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [534] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_ATimport,
    ACTIONS(72), 1,
      anon_sym_ATmedia,
    ACTIONS(75), 1,
      anon_sym_ATcharset,
    ACTIONS(78), 1,
      anon_sym_ATnamespace,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_ATsupports,
    ACTIONS(92), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(101), 1,
      anon_sym_COLON_COLON,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_at_keyword,
    ACTIONS(116), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(281), 1,
      sym_selectors,
    ACTIONS(81), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(89), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
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
      aux_sym_block_repeat1,
    STATE(140), 11,
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
  [620] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_ATimport,
    ACTIONS(124), 1,
      anon_sym_ATmedia,
    ACTIONS(127), 1,
      anon_sym_ATcharset,
    ACTIONS(130), 1,
      anon_sym_ATnamespace,
    ACTIONS(136), 1,
      anon_sym_ATsupports,
    ACTIONS(142), 1,
      anon_sym_STAR,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(148), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      sym_identifier,
    ACTIONS(163), 1,
      sym_at_keyword,
    ACTIONS(166), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(280), 1,
      sym_selectors,
    ACTIONS(133), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(139), 2,
      sym_nesting_selector,
      sym_string_value,
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
    STATE(140), 11,
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
  [706] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(17), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym_at_keyword,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(280), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
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
    STATE(140), 11,
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
  [792] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym_nesting_selector,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(27), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(136), 11,
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
  [867] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(193), 1,
      sym_nesting_selector,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(139), 11,
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
  [942] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(197), 1,
      sym_nesting_selector,
    STATE(48), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(167), 11,
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
  [1014] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_important,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    STATE(20), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1075] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1133] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      sym_important,
    STATE(31), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1191] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_arguments,
    ACTIONS(227), 3,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(229), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(233), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(225), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(237), 4,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(241), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(235), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1263] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LPAREN2,
    ACTIONS(254), 1,
      sym_string_value,
    ACTIONS(257), 1,
      aux_sym_integer_value_token1,
    ACTIONS(260), 1,
      aux_sym_float_value_token1,
    ACTIONS(263), 1,
      sym_identifier,
    ACTIONS(266), 1,
      sym_plain_value,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1312] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1365] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(241), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1416] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(250), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1467] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(246), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1518] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(296), 1,
      sym_string_value,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(302), 1,
      aux_sym_float_value_token1,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(308), 1,
      sym_plain_value,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(288), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1564] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1610] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1660] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(263), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1710] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(322), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(131), 11,
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
  [1752] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(326), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(176), 11,
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
  [1794] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(264), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1844] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(213), 1,
      sym_string_value,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    ACTIONS(332), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    STATE(106), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1894] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(334), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(129), 11,
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
  [1936] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(336), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(144), 11,
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
  [1978] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(338), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(172), 11,
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
  [2020] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(340), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(132), 11,
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
  [2062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(344), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(348), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(350), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(354), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(358), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(362), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(366), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(370), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(374), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(378), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(382), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(386), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2386] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(392), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(396), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(400), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(406), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(348), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2566] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_arguments,
    ACTIONS(233), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(227), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [2597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(408), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(412), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(396), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(406), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(386), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(382), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(418), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(350), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(354), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(358), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(362), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(366), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(370), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(374), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [2975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(420), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(378), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(392), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(424), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(424), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(400), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(408), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(412), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(420), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(418), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(428), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(434), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(434), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(344), 10,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(428), 10,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
      anon_sym_DOLLAR_LBRACE,
  [3380] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_unit,
    ACTIONS(440), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(438), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3452] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3496] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3540] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_unit,
    ACTIONS(452), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(450), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(456), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(460), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3662] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(87), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(464), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(468), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3753] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(282), 1,
      sym_string_value,
    STATE(25), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(122), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(472), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(476), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(480), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(484), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(488), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(492), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3944] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(500), 1,
      sym_string_value,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(221), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3982] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(522), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(223), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4018] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(526), 1,
      sym_string_value,
    ACTIONS(528), 1,
      sym_plain_value,
    STATE(14), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4056] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym_string_value,
    ACTIONS(532), 1,
      sym_plain_value,
    STATE(15), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(536), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(534), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4122] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LPAREN2,
    ACTIONS(542), 1,
      sym_string_value,
    ACTIONS(544), 1,
      aux_sym_integer_value_token1,
    ACTIONS(546), 1,
      aux_sym_float_value_token1,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(550), 1,
      sym_plain_value,
    ACTIONS(552), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(179), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4160] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_string_value,
    ACTIONS(556), 1,
      sym_plain_value,
    STATE(119), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(558), 1,
      sym_string_value,
    ACTIONS(560), 1,
      sym_plain_value,
    STATE(234), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4236] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(562), 1,
      sym_string_value,
    ACTIONS(564), 1,
      sym_plain_value,
    STATE(222), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4274] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      aux_sym_integer_value_token1,
    ACTIONS(546), 1,
      aux_sym_float_value_token1,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(566), 1,
      sym_string_value,
    ACTIONS(568), 1,
      sym_plain_value,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4312] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(570), 1,
      sym_string_value,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(236), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4350] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_string_value,
    ACTIONS(576), 1,
      sym_plain_value,
    STATE(100), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4388] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(207), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_string_value,
    ACTIONS(580), 1,
      sym_plain_value,
    STATE(16), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4426] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(582), 1,
      sym_string_value,
    ACTIONS(584), 1,
      sym_plain_value,
    STATE(226), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4464] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(586), 1,
      sym_string_value,
    ACTIONS(588), 1,
      sym_plain_value,
    STATE(229), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4502] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(590), 1,
      sym_string_value,
    ACTIONS(592), 1,
      sym_plain_value,
    STATE(232), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4540] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    ACTIONS(514), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(522), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(224), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(596), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(246), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4604] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LPAREN2,
    ACTIONS(502), 1,
      aux_sym_integer_value_token1,
    ACTIONS(504), 1,
      aux_sym_float_value_token1,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(510), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(598), 1,
      sym_string_value,
    ACTIONS(600), 1,
      sym_plain_value,
    STATE(195), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4642] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_POUND,
    ACTIONS(540), 1,
      anon_sym_LPAREN2,
    ACTIONS(544), 1,
      aux_sym_integer_value_token1,
    ACTIONS(546), 1,
      aux_sym_float_value_token1,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(602), 1,
      sym_string_value,
    ACTIONS(604), 1,
      sym_plain_value,
    STATE(118), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4680] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_STAR,
    ACTIONS(209), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(608), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(606), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4707] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(189), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COLON,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_pseudo_class_arguments,
    ACTIONS(614), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4767] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(192), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_pseudo_element_arguments,
    ACTIONS(624), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
    ACTIONS(632), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_pseudo_class_arguments,
    ACTIONS(630), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LPAREN,
    ACTIONS(636), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_pseudo_element_arguments,
    ACTIONS(634), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(638), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(644), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(648), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(654), 1,
      anon_sym_COLON,
    ACTIONS(652), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(656), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(660), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(664), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5025] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    STATE(263), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [5065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(684), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COLON,
    ACTIONS(688), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5105] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    STATE(264), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [5145] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_LBRACE,
    STATE(271), 1,
      aux_sym_selectors_repeat1,
  [5185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COLON,
    ACTIONS(696), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(700), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COLON,
    ACTIONS(704), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(708), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(225), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(712), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(716), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_COLON,
    ACTIONS(720), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(724), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_COLON,
    ACTIONS(728), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COLON,
    ACTIONS(732), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(736), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
    ACTIONS(227), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(233), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_COLON,
    ACTIONS(742), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COLON,
    ACTIONS(746), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_COLON,
    ACTIONS(750), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(238), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(209), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_COLON,
    ACTIONS(225), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(757), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(260), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(215), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_unit,
    ACTIONS(438), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(440), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(211), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(225), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(462), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(255), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5739] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5774] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(217), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_COLON,
    ACTIONS(225), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5818] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN2,
    ACTIONS(520), 1,
      anon_sym_selector,
    ACTIONS(524), 1,
      sym_identifier,
    ACTIONS(518), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(242), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_unit,
    ACTIONS(450), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(452), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5864] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    ACTIONS(768), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(474), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(470), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(458), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5953] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_COLON_COLON,
    ACTIONS(672), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_GT,
    ACTIONS(678), 1,
      anon_sym_TILDE,
    ACTIONS(680), 1,
      anon_sym_PLUS,
    ACTIONS(682), 1,
      sym__descendant_operator,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [5987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(486), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(478), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(490), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(494), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(482), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(466), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_SLASH,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(227), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SLASH,
    ACTIONS(774), 1,
      sym_unit,
    ACTIONS(438), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(776), 1,
      sym_unit,
    ACTIONS(450), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(460), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SLASH,
    ACTIONS(480), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    ACTIONS(778), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6197] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_block,
    STATE(225), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6220] = 6,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__js_statement,
    STATE(198), 1,
      aux_sym__js_expressions,
    ACTIONS(790), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(240), 2,
      sym__js_expression,
      sym__js_block,
  [6241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SLASH,
    ACTIONS(476), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6256] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_block,
    STATE(233), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6279] = 6,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__js_statement,
    STATE(198), 1,
      aux_sym__js_expressions,
    ACTIONS(798), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(240), 2,
      sym__js_expression,
      sym__js_block,
  [6300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SLASH,
    ACTIONS(464), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SLASH,
    ACTIONS(488), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    ACTIONS(800), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SLASH,
    ACTIONS(492), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6360] = 6,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    ACTIONS(809), 1,
      sym__js_statement,
    STATE(198), 1,
      aux_sym__js_expressions,
    ACTIONS(807), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(240), 2,
      sym__js_expression,
      sym__js_block,
  [6381] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      aux_sym_integer_value_token1,
    STATE(277), 1,
      sym_integer_value,
    ACTIONS(814), 2,
      sym_from,
      sym_to,
    STATE(203), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SLASH,
    ACTIONS(472), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym_integer_value_token1,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_integer_value,
    ACTIONS(814), 2,
      sym_from,
      sym_to,
    STATE(204), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym_integer_value_token1,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_integer_value,
    ACTIONS(814), 2,
      sym_from,
      sym_to,
    STATE(199), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6459] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(827), 1,
      aux_sym_integer_value_token1,
    STATE(277), 1,
      sym_integer_value,
    ACTIONS(824), 2,
      sym_from,
      sym_to,
    STATE(203), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym_integer_value_token1,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_integer_value,
    ACTIONS(814), 2,
      sym_from,
      sym_to,
    STATE(203), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_SLASH,
    ACTIONS(484), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SLASH,
    ACTIONS(468), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SLASH,
    ACTIONS(456), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6546] = 6,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    ACTIONS(835), 1,
      sym__js_statement,
    STATE(208), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_block,
    STATE(239), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6642] = 6,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    STATE(208), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6674] = 6,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6718] = 6,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(860), 1,
      sym_string_value,
    ACTIONS(862), 1,
      sym_identifier,
    STATE(174), 1,
      sym_arguments,
    STATE(300), 1,
      sym_call_expression,
  [6757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(870), 1,
      anon_sym_SEMI,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(872), 1,
      anon_sym_SEMI,
    STATE(269), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(874), 1,
      anon_sym_SEMI,
    STATE(266), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [6821] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_block,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [6840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(878), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6855] = 5,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    STATE(216), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6872] = 5,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    STATE(214), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6904] = 5,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(848), 1,
      sym__js_statement,
    STATE(219), 1,
      aux_sym__js_expressions,
    STATE(259), 2,
      sym__js_expression,
      sym__js_block,
  [6921] = 5,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__js_statement,
    STATE(190), 1,
      aux_sym__js_expressions,
    STATE(240), 2,
      sym__js_expression,
      sym__js_block,
  [6938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_block,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [6972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    ACTIONS(862), 1,
      sym_identifier,
    ACTIONS(888), 1,
      sym_string_value,
    STATE(174), 1,
      sym_arguments,
    STATE(292), 1,
      sym_call_expression,
  [7006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SLASH,
    ACTIONS(890), 1,
      anon_sym_RBRACK,
    ACTIONS(866), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7021] = 5,
    ACTIONS(788), 1,
      anon_sym_LBRACE,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym__js_statement,
    STATE(193), 1,
      aux_sym__js_expressions,
    STATE(240), 2,
      sym__js_expression,
      sym__js_block,
  [7038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(892), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7051] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      sym_block,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [7067] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(894), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [7077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [7105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(898), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_block,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [7145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [7189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(892), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7217] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(910), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [7227] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(912), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [7237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(838), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [7263] = 4,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    ACTIONS(918), 1,
      sym__js_statement,
    STATE(262), 1,
      aux_sym__js_block_repeat1,
  [7276] = 4,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    ACTIONS(922), 1,
      sym__js_statement,
    STATE(258), 1,
      aux_sym__js_block_repeat1,
  [7289] = 4,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__js_statement,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym__js_block_repeat1,
  [7302] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(894), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [7311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 2,
      anon_sym_and,
      anon_sym_or,
  [7322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_string_value,
    ACTIONS(930), 1,
      sym_identifier,
    STATE(307), 1,
      sym_call_expression,
  [7335] = 4,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      sym__js_statement,
    STATE(262), 1,
      aux_sym__js_block_repeat1,
  [7348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7361] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(941), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [7400] = 4,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(948), 1,
      sym__js_statement,
    STATE(256), 1,
      aux_sym__js_block_repeat1,
  [7413] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(912), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [7422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(950), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_import_statement_repeat1,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_string_value,
    ACTIONS(954), 1,
      sym_identifier,
    STATE(308), 1,
      sym_call_expression,
  [7448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    STATE(272), 1,
      aux_sym_selectors_repeat1,
  [7461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_selectors_repeat1,
  [7474] = 2,
    ACTIONS(792), 1,
      sym_comment,
    ACTIONS(910), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [7483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(961), 1,
      sym_unit,
  [7493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      aux_sym_color_value_token1,
    ACTIONS(965), 1,
      sym_identifier,
  [7503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_keyframe_block_list,
  [7513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_LBRACE,
    STATE(247), 1,
      sym_block,
  [7523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [7533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SEMI,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
  [7543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [7553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
  [7563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_keyframe_block_list,
  [7573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
  [7583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      sym_identifier,
  [7590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_RBRACE,
  [7597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [7604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [7611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
  [7618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      aux_sym_color_value_token1,
  [7625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_SEMI,
  [7632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      aux_sym_color_value_token1,
  [7639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_SEMI,
  [7646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [7653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [7660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      aux_sym_color_value_token1,
  [7667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [7674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [7681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      sym_identifier,
  [7688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      ts_builtin_sym_end,
  [7695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_SEMI,
  [7702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_identifier,
  [7709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_SEMI,
  [7716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      sym_identifier,
  [7723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym_identifier,
  [7730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_identifier,
  [7737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym_identifier,
  [7744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_SEMI,
  [7751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_SEMI,
  [7758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_LPAREN2,
  [7765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SEMI,
  [7772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym_identifier,
  [7779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_identifier,
  [7786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym_identifier,
  [7793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 356,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 620,
  [SMALL_STATE(10)] = 706,
  [SMALL_STATE(11)] = 792,
  [SMALL_STATE(12)] = 867,
  [SMALL_STATE(13)] = 942,
  [SMALL_STATE(14)] = 1014,
  [SMALL_STATE(15)] = 1075,
  [SMALL_STATE(16)] = 1133,
  [SMALL_STATE(17)] = 1191,
  [SMALL_STATE(18)] = 1230,
  [SMALL_STATE(19)] = 1263,
  [SMALL_STATE(20)] = 1312,
  [SMALL_STATE(21)] = 1365,
  [SMALL_STATE(22)] = 1416,
  [SMALL_STATE(23)] = 1467,
  [SMALL_STATE(24)] = 1518,
  [SMALL_STATE(25)] = 1564,
  [SMALL_STATE(26)] = 1610,
  [SMALL_STATE(27)] = 1660,
  [SMALL_STATE(28)] = 1710,
  [SMALL_STATE(29)] = 1752,
  [SMALL_STATE(30)] = 1794,
  [SMALL_STATE(31)] = 1844,
  [SMALL_STATE(32)] = 1894,
  [SMALL_STATE(33)] = 1936,
  [SMALL_STATE(34)] = 1978,
  [SMALL_STATE(35)] = 2020,
  [SMALL_STATE(36)] = 2062,
  [SMALL_STATE(37)] = 2089,
  [SMALL_STATE(38)] = 2116,
  [SMALL_STATE(39)] = 2143,
  [SMALL_STATE(40)] = 2170,
  [SMALL_STATE(41)] = 2197,
  [SMALL_STATE(42)] = 2224,
  [SMALL_STATE(43)] = 2251,
  [SMALL_STATE(44)] = 2278,
  [SMALL_STATE(45)] = 2305,
  [SMALL_STATE(46)] = 2332,
  [SMALL_STATE(47)] = 2359,
  [SMALL_STATE(48)] = 2386,
  [SMALL_STATE(49)] = 2431,
  [SMALL_STATE(50)] = 2458,
  [SMALL_STATE(51)] = 2485,
  [SMALL_STATE(52)] = 2512,
  [SMALL_STATE(53)] = 2539,
  [SMALL_STATE(54)] = 2566,
  [SMALL_STATE(55)] = 2597,
  [SMALL_STATE(56)] = 2624,
  [SMALL_STATE(57)] = 2651,
  [SMALL_STATE(58)] = 2678,
  [SMALL_STATE(59)] = 2705,
  [SMALL_STATE(60)] = 2732,
  [SMALL_STATE(61)] = 2759,
  [SMALL_STATE(62)] = 2786,
  [SMALL_STATE(63)] = 2813,
  [SMALL_STATE(64)] = 2840,
  [SMALL_STATE(65)] = 2867,
  [SMALL_STATE(66)] = 2894,
  [SMALL_STATE(67)] = 2921,
  [SMALL_STATE(68)] = 2948,
  [SMALL_STATE(69)] = 2975,
  [SMALL_STATE(70)] = 3002,
  [SMALL_STATE(71)] = 3029,
  [SMALL_STATE(72)] = 3056,
  [SMALL_STATE(73)] = 3083,
  [SMALL_STATE(74)] = 3110,
  [SMALL_STATE(75)] = 3137,
  [SMALL_STATE(76)] = 3164,
  [SMALL_STATE(77)] = 3191,
  [SMALL_STATE(78)] = 3218,
  [SMALL_STATE(79)] = 3245,
  [SMALL_STATE(80)] = 3272,
  [SMALL_STATE(81)] = 3299,
  [SMALL_STATE(82)] = 3326,
  [SMALL_STATE(83)] = 3353,
  [SMALL_STATE(84)] = 3380,
  [SMALL_STATE(85)] = 3424,
  [SMALL_STATE(86)] = 3452,
  [SMALL_STATE(87)] = 3496,
  [SMALL_STATE(88)] = 3540,
  [SMALL_STATE(89)] = 3584,
  [SMALL_STATE(90)] = 3612,
  [SMALL_STATE(91)] = 3637,
  [SMALL_STATE(92)] = 3662,
  [SMALL_STATE(93)] = 3703,
  [SMALL_STATE(94)] = 3728,
  [SMALL_STATE(95)] = 3753,
  [SMALL_STATE(96)] = 3794,
  [SMALL_STATE(97)] = 3819,
  [SMALL_STATE(98)] = 3844,
  [SMALL_STATE(99)] = 3869,
  [SMALL_STATE(100)] = 3894,
  [SMALL_STATE(101)] = 3919,
  [SMALL_STATE(102)] = 3944,
  [SMALL_STATE(103)] = 3982,
  [SMALL_STATE(104)] = 4018,
  [SMALL_STATE(105)] = 4056,
  [SMALL_STATE(106)] = 4094,
  [SMALL_STATE(107)] = 4122,
  [SMALL_STATE(108)] = 4160,
  [SMALL_STATE(109)] = 4198,
  [SMALL_STATE(110)] = 4236,
  [SMALL_STATE(111)] = 4274,
  [SMALL_STATE(112)] = 4312,
  [SMALL_STATE(113)] = 4350,
  [SMALL_STATE(114)] = 4388,
  [SMALL_STATE(115)] = 4426,
  [SMALL_STATE(116)] = 4464,
  [SMALL_STATE(117)] = 4502,
  [SMALL_STATE(118)] = 4540,
  [SMALL_STATE(119)] = 4576,
  [SMALL_STATE(120)] = 4604,
  [SMALL_STATE(121)] = 4642,
  [SMALL_STATE(122)] = 4680,
  [SMALL_STATE(123)] = 4707,
  [SMALL_STATE(124)] = 4741,
  [SMALL_STATE(125)] = 4767,
  [SMALL_STATE(126)] = 4801,
  [SMALL_STATE(127)] = 4827,
  [SMALL_STATE(128)] = 4853,
  [SMALL_STATE(129)] = 4879,
  [SMALL_STATE(130)] = 4901,
  [SMALL_STATE(131)] = 4921,
  [SMALL_STATE(132)] = 4943,
  [SMALL_STATE(133)] = 4965,
  [SMALL_STATE(134)] = 4985,
  [SMALL_STATE(135)] = 5005,
  [SMALL_STATE(136)] = 5025,
  [SMALL_STATE(137)] = 5065,
  [SMALL_STATE(138)] = 5085,
  [SMALL_STATE(139)] = 5105,
  [SMALL_STATE(140)] = 5145,
  [SMALL_STATE(141)] = 5185,
  [SMALL_STATE(142)] = 5205,
  [SMALL_STATE(143)] = 5225,
  [SMALL_STATE(144)] = 5245,
  [SMALL_STATE(145)] = 5267,
  [SMALL_STATE(146)] = 5287,
  [SMALL_STATE(147)] = 5307,
  [SMALL_STATE(148)] = 5327,
  [SMALL_STATE(149)] = 5347,
  [SMALL_STATE(150)] = 5367,
  [SMALL_STATE(151)] = 5387,
  [SMALL_STATE(152)] = 5407,
  [SMALL_STATE(153)] = 5427,
  [SMALL_STATE(154)] = 5451,
  [SMALL_STATE(155)] = 5471,
  [SMALL_STATE(156)] = 5491,
  [SMALL_STATE(157)] = 5511,
  [SMALL_STATE(158)] = 5536,
  [SMALL_STATE(159)] = 5561,
  [SMALL_STATE(160)] = 5580,
  [SMALL_STATE(161)] = 5605,
  [SMALL_STATE(162)] = 5630,
  [SMALL_STATE(163)] = 5651,
  [SMALL_STATE(164)] = 5676,
  [SMALL_STATE(165)] = 5695,
  [SMALL_STATE(166)] = 5714,
  [SMALL_STATE(167)] = 5739,
  [SMALL_STATE(168)] = 5774,
  [SMALL_STATE(169)] = 5799,
  [SMALL_STATE(170)] = 5818,
  [SMALL_STATE(171)] = 5843,
  [SMALL_STATE(172)] = 5864,
  [SMALL_STATE(173)] = 5899,
  [SMALL_STATE(174)] = 5917,
  [SMALL_STATE(175)] = 5935,
  [SMALL_STATE(176)] = 5953,
  [SMALL_STATE(177)] = 5987,
  [SMALL_STATE(178)] = 6005,
  [SMALL_STATE(179)] = 6023,
  [SMALL_STATE(180)] = 6041,
  [SMALL_STATE(181)] = 6059,
  [SMALL_STATE(182)] = 6077,
  [SMALL_STATE(183)] = 6095,
  [SMALL_STATE(184)] = 6116,
  [SMALL_STATE(185)] = 6134,
  [SMALL_STATE(186)] = 6152,
  [SMALL_STATE(187)] = 6167,
  [SMALL_STATE(188)] = 6182,
  [SMALL_STATE(189)] = 6197,
  [SMALL_STATE(190)] = 6220,
  [SMALL_STATE(191)] = 6241,
  [SMALL_STATE(192)] = 6256,
  [SMALL_STATE(193)] = 6279,
  [SMALL_STATE(194)] = 6300,
  [SMALL_STATE(195)] = 6315,
  [SMALL_STATE(196)] = 6330,
  [SMALL_STATE(197)] = 6345,
  [SMALL_STATE(198)] = 6360,
  [SMALL_STATE(199)] = 6381,
  [SMALL_STATE(200)] = 6402,
  [SMALL_STATE(201)] = 6417,
  [SMALL_STATE(202)] = 6438,
  [SMALL_STATE(203)] = 6459,
  [SMALL_STATE(204)] = 6480,
  [SMALL_STATE(205)] = 6501,
  [SMALL_STATE(206)] = 6516,
  [SMALL_STATE(207)] = 6531,
  [SMALL_STATE(208)] = 6546,
  [SMALL_STATE(209)] = 6566,
  [SMALL_STATE(210)] = 6586,
  [SMALL_STATE(211)] = 6598,
  [SMALL_STATE(212)] = 6618,
  [SMALL_STATE(213)] = 6630,
  [SMALL_STATE(214)] = 6642,
  [SMALL_STATE(215)] = 6662,
  [SMALL_STATE(216)] = 6674,
  [SMALL_STATE(217)] = 6694,
  [SMALL_STATE(218)] = 6706,
  [SMALL_STATE(219)] = 6718,
  [SMALL_STATE(220)] = 6738,
  [SMALL_STATE(221)] = 6757,
  [SMALL_STATE(222)] = 6772,
  [SMALL_STATE(223)] = 6787,
  [SMALL_STATE(224)] = 6804,
  [SMALL_STATE(225)] = 6821,
  [SMALL_STATE(226)] = 6840,
  [SMALL_STATE(227)] = 6855,
  [SMALL_STATE(228)] = 6872,
  [SMALL_STATE(229)] = 6889,
  [SMALL_STATE(230)] = 6904,
  [SMALL_STATE(231)] = 6921,
  [SMALL_STATE(232)] = 6938,
  [SMALL_STATE(233)] = 6953,
  [SMALL_STATE(234)] = 6972,
  [SMALL_STATE(235)] = 6987,
  [SMALL_STATE(236)] = 7006,
  [SMALL_STATE(237)] = 7021,
  [SMALL_STATE(238)] = 7038,
  [SMALL_STATE(239)] = 7051,
  [SMALL_STATE(240)] = 7067,
  [SMALL_STATE(241)] = 7077,
  [SMALL_STATE(242)] = 7091,
  [SMALL_STATE(243)] = 7105,
  [SMALL_STATE(244)] = 7119,
  [SMALL_STATE(245)] = 7129,
  [SMALL_STATE(246)] = 7145,
  [SMALL_STATE(247)] = 7159,
  [SMALL_STATE(248)] = 7169,
  [SMALL_STATE(249)] = 7179,
  [SMALL_STATE(250)] = 7189,
  [SMALL_STATE(251)] = 7203,
  [SMALL_STATE(252)] = 7217,
  [SMALL_STATE(253)] = 7227,
  [SMALL_STATE(254)] = 7237,
  [SMALL_STATE(255)] = 7249,
  [SMALL_STATE(256)] = 7263,
  [SMALL_STATE(257)] = 7276,
  [SMALL_STATE(258)] = 7289,
  [SMALL_STATE(259)] = 7302,
  [SMALL_STATE(260)] = 7311,
  [SMALL_STATE(261)] = 7322,
  [SMALL_STATE(262)] = 7335,
  [SMALL_STATE(263)] = 7348,
  [SMALL_STATE(264)] = 7361,
  [SMALL_STATE(265)] = 7374,
  [SMALL_STATE(266)] = 7387,
  [SMALL_STATE(267)] = 7400,
  [SMALL_STATE(268)] = 7413,
  [SMALL_STATE(269)] = 7422,
  [SMALL_STATE(270)] = 7435,
  [SMALL_STATE(271)] = 7448,
  [SMALL_STATE(272)] = 7461,
  [SMALL_STATE(273)] = 7474,
  [SMALL_STATE(274)] = 7483,
  [SMALL_STATE(275)] = 7493,
  [SMALL_STATE(276)] = 7503,
  [SMALL_STATE(277)] = 7513,
  [SMALL_STATE(278)] = 7523,
  [SMALL_STATE(279)] = 7533,
  [SMALL_STATE(280)] = 7543,
  [SMALL_STATE(281)] = 7553,
  [SMALL_STATE(282)] = 7563,
  [SMALL_STATE(283)] = 7573,
  [SMALL_STATE(284)] = 7583,
  [SMALL_STATE(285)] = 7590,
  [SMALL_STATE(286)] = 7597,
  [SMALL_STATE(287)] = 7604,
  [SMALL_STATE(288)] = 7611,
  [SMALL_STATE(289)] = 7618,
  [SMALL_STATE(290)] = 7625,
  [SMALL_STATE(291)] = 7632,
  [SMALL_STATE(292)] = 7639,
  [SMALL_STATE(293)] = 7646,
  [SMALL_STATE(294)] = 7653,
  [SMALL_STATE(295)] = 7660,
  [SMALL_STATE(296)] = 7667,
  [SMALL_STATE(297)] = 7674,
  [SMALL_STATE(298)] = 7681,
  [SMALL_STATE(299)] = 7688,
  [SMALL_STATE(300)] = 7695,
  [SMALL_STATE(301)] = 7702,
  [SMALL_STATE(302)] = 7709,
  [SMALL_STATE(303)] = 7716,
  [SMALL_STATE(304)] = 7723,
  [SMALL_STATE(305)] = 7730,
  [SMALL_STATE(306)] = 7737,
  [SMALL_STATE(307)] = 7744,
  [SMALL_STATE(308)] = 7751,
  [SMALL_STATE(309)] = 7758,
  [SMALL_STATE(310)] = 7765,
  [SMALL_STATE(311)] = 7772,
  [SMALL_STATE(312)] = 7779,
  [SMALL_STATE(313)] = 7786,
  [SMALL_STATE(314)] = 7793,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(166),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(135),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(303),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(301),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(298),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(297),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(294),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(237),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(121),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(163),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(102),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(261),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(311),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(170),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(140),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(135),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(303),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(301),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(298),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(297),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(164),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(123),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(231),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(291),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(85),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(89),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(54),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(230),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(291),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(115),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(89),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(54),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(230),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 9),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 9),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 11),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(105),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(114),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(267),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(240),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(277),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(274),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(257),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(259),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 15),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(95),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(157),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(262),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [941] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(34),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [997] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
