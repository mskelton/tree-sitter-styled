#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
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
  aux_sym_stylesheet_repeat1 = 101,
  aux_sym_import_statement_repeat1 = 102,
  aux_sym_keyframe_block_list_repeat1 = 103,
  aux_sym_selectors_repeat1 = 104,
  aux_sym_block_repeat1 = 105,
  aux_sym_pseudo_class_arguments_repeat1 = 106,
  aux_sym_pseudo_class_arguments_repeat2 = 107,
  aux_sym_declaration_repeat1 = 108,
  aux_sym_arguments_repeat1 = 109,
  aux_sym__js_block_repeat1 = 110,
  alias_sym_class_name = 111,
  alias_sym_feature_name = 112,
  alias_sym_function_name = 113,
  alias_sym_id_name = 114,
  alias_sym_js_expression = 115,
  alias_sym_keyframes_name = 116,
  alias_sym_keyword_query = 117,
  alias_sym_namespace_name = 118,
  alias_sym_property_name = 119,
  alias_sym_tag_name = 120,
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
  [3] = 2,
  [4] = 4,
  [5] = 2,
  [6] = 4,
  [7] = 4,
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
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
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
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 35,
  [49] = 41,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 38,
  [54] = 37,
  [55] = 55,
  [56] = 56,
  [57] = 45,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 47,
  [62] = 62,
  [63] = 63,
  [64] = 62,
  [65] = 60,
  [66] = 52,
  [67] = 67,
  [68] = 36,
  [69] = 40,
  [70] = 59,
  [71] = 71,
  [72] = 42,
  [73] = 71,
  [74] = 55,
  [75] = 51,
  [76] = 76,
  [77] = 63,
  [78] = 76,
  [79] = 67,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 82,
  [84] = 82,
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
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 112,
  [113] = 110,
  [114] = 114,
  [115] = 114,
  [116] = 107,
  [117] = 114,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 46,
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
  [151] = 150,
  [152] = 152,
  [153] = 86,
  [154] = 87,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 88,
  [163] = 163,
  [164] = 160,
  [165] = 93,
  [166] = 97,
  [167] = 167,
  [168] = 90,
  [169] = 95,
  [170] = 92,
  [171] = 96,
  [172] = 94,
  [173] = 99,
  [174] = 98,
  [175] = 46,
  [176] = 87,
  [177] = 86,
  [178] = 178,
  [179] = 97,
  [180] = 90,
  [181] = 178,
  [182] = 182,
  [183] = 93,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 95,
  [189] = 94,
  [190] = 186,
  [191] = 92,
  [192] = 192,
  [193] = 193,
  [194] = 96,
  [195] = 88,
  [196] = 99,
  [197] = 98,
  [198] = 193,
  [199] = 184,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 202,
  [208] = 208,
  [209] = 209,
  [210] = 204,
  [211] = 185,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 216,
  [220] = 216,
  [221] = 218,
  [222] = 213,
  [223] = 223,
  [224] = 215,
  [225] = 212,
  [226] = 223,
  [227] = 227,
  [228] = 212,
  [229] = 227,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 71,
  [240] = 232,
  [241] = 231,
  [242] = 236,
  [243] = 232,
  [244] = 47,
  [245] = 245,
  [246] = 38,
  [247] = 247,
  [248] = 234,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 253,
  [260] = 255,
  [261] = 252,
  [262] = 238,
  [263] = 235,
  [264] = 256,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 265,
  [273] = 270,
  [274] = 86,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 278,
  [282] = 282,
  [283] = 283,
  [284] = 282,
  [285] = 285,
  [286] = 286,
  [287] = 280,
  [288] = 288,
  [289] = 289,
  [290] = 279,
  [291] = 280,
  [292] = 292,
  [293] = 275,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 282,
  [298] = 298,
  [299] = 277,
  [300] = 279,
  [301] = 301,
  [302] = 296,
  [303] = 303,
  [304] = 304,
  [305] = 295,
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
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 76},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
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
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
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
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 76, .external_lex_state = 1},
  [124] = {.lex_state = 76, .external_lex_state = 1},
  [125] = {.lex_state = 76, .external_lex_state = 1},
  [126] = {.lex_state = 76, .external_lex_state = 1},
  [127] = {.lex_state = 76, .external_lex_state = 1},
  [128] = {.lex_state = 11},
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
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 76, .external_lex_state = 1},
  [151] = {.lex_state = 76, .external_lex_state = 1},
  [152] = {.lex_state = 76, .external_lex_state = 1},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 76, .external_lex_state = 1},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 76, .external_lex_state = 1},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 76, .external_lex_state = 1},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 26},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 26},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 27},
  [205] = {.lex_state = 27},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 27},
  [211] = {.lex_state = 27},
  [212] = {.lex_state = 26},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 26},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 26},
  [225] = {.lex_state = 26},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 76},
  [228] = {.lex_state = 26},
  [229] = {.lex_state = 76},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 26},
  [235] = {.lex_state = 26},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 26},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 7},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 27},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 27},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 76},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 76},
  [260] = {.lex_state = 27},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 27},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 76},
  [267] = {.lex_state = 18},
  [268] = {.lex_state = 76},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 10},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 76},
  [280] = {.lex_state = 76},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 24},
  [283] = {.lex_state = 76},
  [284] = {.lex_state = 24},
  [285] = {.lex_state = 76},
  [286] = {.lex_state = 76},
  [287] = {.lex_state = 76},
  [288] = {.lex_state = 76},
  [289] = {.lex_state = 76},
  [290] = {.lex_state = 76},
  [291] = {.lex_state = 76},
  [292] = {.lex_state = 76},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 76},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 76},
  [297] = {.lex_state = 24},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 76},
  [301] = {.lex_state = 76},
  [302] = {.lex_state = 76},
  [303] = {.lex_state = 76},
  [304] = {.lex_state = 76},
  [305] = {.lex_state = 0},
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
    [sym_stylesheet] = STATE(276),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(270),
    [sym__selector] = STATE(131),
    [sym_universal_selector] = STATE(131),
    [sym_class_selector] = STATE(131),
    [sym_pseudo_class_selector] = STATE(131),
    [sym_pseudo_element_selector] = STATE(131),
    [sym_id_selector] = STATE(131),
    [sym_attribute_selector] = STATE(131),
    [sym_child_selector] = STATE(131),
    [sym_descendant_selector] = STATE(131),
    [sym_sibling_selector] = STATE(131),
    [sym_adjacent_sibling_selector] = STATE(131),
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
    STATE(273), 1,
      sym_selectors,
    STATE(279), 1,
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
    STATE(273), 1,
      sym_selectors,
    STATE(300), 1,
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
    STATE(273), 1,
      sym_selectors,
    STATE(291), 1,
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
    STATE(273), 1,
      sym_selectors,
    STATE(290), 1,
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
    STATE(273), 1,
      sym_selectors,
    STATE(287), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(5), 11,
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
    STATE(273), 1,
      sym_selectors,
    STATE(280), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 11,
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
    STATE(273), 1,
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
    STATE(270), 1,
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
    STATE(270), 1,
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
    STATE(32), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(135), 11,
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
  [867] = 18,
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
    STATE(39), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(161), 11,
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
  [939] = 17,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_important,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    STATE(18), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1000] = 16,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(217), 1,
      sym_important,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1058] = 16,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      sym_important,
    STATE(30), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1116] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_arguments,
    ACTIONS(223), 3,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(225), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(229), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(221), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1155] = 14,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(232), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1206] = 15,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      sym_important,
    STATE(22), 1,
      aux_sym_declaration_repeat1,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1259] = 14,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(240), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(247), 4,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(251), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(245), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1343] = 14,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(243), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1394] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_LPAREN2,
    ACTIONS(266), 1,
      sym_string_value,
    ACTIONS(269), 1,
      aux_sym_integer_value_token1,
    ACTIONS(272), 1,
      aux_sym_float_value_token1,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(278), 1,
      sym_plain_value,
    ACTIONS(281), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(22), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(258), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1443] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(284), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1489] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(286), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(127), 11,
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
  [1531] = 14,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(292), 1,
      sym_important,
    STATE(22), 1,
      aux_sym_declaration_repeat1,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1581] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(294), 2,
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
  [1623] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(296), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(157), 11,
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
  [1665] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(298), 2,
      sym_nesting_selector,
      sym_string_value,
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
  [1707] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(300), 2,
      sym_nesting_selector,
      sym_string_value,
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
  [1749] = 14,
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
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      sym_important,
    STATE(22), 1,
      aux_sym_declaration_repeat1,
    STATE(103), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1799] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      sym_string_value,
    ACTIONS(315), 1,
      aux_sym_integer_value_token1,
    ACTIONS(318), 1,
      aux_sym_float_value_token1,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(324), 1,
      sym_plain_value,
    ACTIONS(327), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(304), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1845] = 14,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(249), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1895] = 10,
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
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(334), 2,
      sym_nesting_selector,
      sym_string_value,
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
  [1937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(338), 10,
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
  [1964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(342), 10,
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
  [1991] = 3,
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
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
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
  [2045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(352), 10,
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
  [2072] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2117] = 3,
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
  [2144] = 3,
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
  [2171] = 3,
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
  [2198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(372), 10,
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
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(372), 10,
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
  [2252] = 3,
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
  [2279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_arguments,
    ACTIONS(229), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(223), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [2310] = 3,
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
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(342), 10,
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
  [2364] = 3,
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
  [2391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(338), 10,
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
  [2418] = 3,
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
  [2445] = 3,
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
  [2472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(352), 10,
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
  [2499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
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
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
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
  [2553] = 3,
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
  [2580] = 3,
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
  [2607] = 3,
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
  [2634] = 3,
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
  [2661] = 3,
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
    ACTIONS(402), 10,
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
  [2688] = 3,
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
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
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
  [2742] = 3,
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
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
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
  [2796] = 3,
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
    ACTIONS(402), 10,
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
  [2823] = 3,
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
  [2850] = 3,
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
    ACTIONS(416), 10,
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
  [2877] = 3,
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
  [2904] = 3,
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
  [2931] = 3,
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
  [2958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 9,
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
  [2985] = 3,
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
  [3012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 9,
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
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
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
  [3066] = 3,
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
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(422), 10,
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
  [3120] = 3,
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
  [3147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(422), 10,
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
  [3174] = 3,
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
    ACTIONS(416), 10,
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
  [3201] = 3,
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
  [3228] = 3,
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
  [3255] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3299] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3343] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3387] = 12,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3431] = 4,
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
  [3459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_unit,
    ACTIONS(446), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(444), 10,
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
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [3512] = 11,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    STATE(85), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(454), 10,
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
  [3578] = 11,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym_string_value,
    STATE(23), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(120), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(458), 10,
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
  [3644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(462), 10,
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
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(466), 10,
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
  [3694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(470), 10,
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
  [3719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(474), 10,
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
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(478), 10,
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
  [3769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(482), 10,
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
  [3794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(486), 10,
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
  [3819] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(494), 1,
      sym_string_value,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym_plain_value,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(219), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3857] = 10,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(506), 1,
      sym_string_value,
    ACTIONS(508), 1,
      sym_plain_value,
    STATE(13), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3895] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(510), 1,
      sym_string_value,
    ACTIONS(512), 1,
      sym_plain_value,
    STATE(216), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3933] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(516), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(514), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [3961] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(518), 1,
      sym_string_value,
    ACTIONS(520), 1,
      sym_plain_value,
    STATE(223), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3999] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(522), 1,
      sym_string_value,
    ACTIONS(524), 1,
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
  [4037] = 10,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(526), 1,
      sym_string_value,
    ACTIONS(528), 1,
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
  [4075] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_LPAREN2,
    ACTIONS(534), 1,
      sym_string_value,
    ACTIONS(536), 1,
      aux_sym_integer_value_token1,
    ACTIONS(538), 1,
      aux_sym_float_value_token1,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_plain_value,
    ACTIONS(544), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(109), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4113] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(546), 1,
      sym_string_value,
    ACTIONS(548), 1,
      sym_plain_value,
    STATE(220), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4151] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(552), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(560), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(221), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4187] = 10,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(564), 1,
      sym_string_value,
    ACTIONS(566), 1,
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
  [4225] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(568), 1,
      anon_sym_SEMI,
    ACTIONS(552), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(560), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(218), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4261] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(570), 1,
      sym_string_value,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(214), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4299] = 10,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_string_value,
    ACTIONS(576), 1,
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
  [4337] = 10,
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
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_string_value,
    ACTIONS(580), 1,
      sym_plain_value,
    STATE(90), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4375] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_LPAREN2,
    ACTIONS(536), 1,
      aux_sym_integer_value_token1,
    ACTIONS(538), 1,
      aux_sym_float_value_token1,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(582), 1,
      sym_string_value,
    ACTIONS(584), 1,
      sym_plain_value,
    STATE(168), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4413] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_POUND,
    ACTIONS(532), 1,
      anon_sym_LPAREN2,
    ACTIONS(536), 1,
      aux_sym_integer_value_token1,
    ACTIONS(538), 1,
      aux_sym_float_value_token1,
    ACTIONS(540), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(586), 1,
      sym_string_value,
    ACTIONS(588), 1,
      sym_plain_value,
    STATE(111), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4451] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(590), 1,
      sym_string_value,
    ACTIONS(592), 1,
      sym_plain_value,
    STATE(180), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      anon_sym_LPAREN2,
    ACTIONS(496), 1,
      aux_sym_integer_value_token1,
    ACTIONS(498), 1,
      aux_sym_float_value_token1,
    ACTIONS(500), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_plain_value,
    STATE(230), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(598), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(258), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(602), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(600), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4582] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(181), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4616] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(608), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(178), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_pseudo_class_arguments,
    ACTIONS(612), 11,
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
  [4676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(620), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_pseudo_class_arguments,
    ACTIONS(618), 11,
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
  [4702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_COLON,
    ACTIONS(622), 11,
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
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(626), 11,
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
  [4742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(630), 10,
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
  [4764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
    ACTIONS(223), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(229), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [4788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(640), 1,
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
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(642), 11,
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
  [4830] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_COLON_COLON,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      anon_sym_TILDE,
    ACTIONS(662), 1,
      anon_sym_PLUS,
    ACTIONS(664), 1,
      sym__descendant_operator,
    STATE(251), 1,
      aux_sym_selectors_repeat1,
  [4870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(666), 11,
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
  [4890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(670), 11,
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
  [4910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(674), 11,
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
  [4930] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_COLON_COLON,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      anon_sym_TILDE,
    ACTIONS(662), 1,
      anon_sym_PLUS,
    ACTIONS(664), 1,
      sym__descendant_operator,
    STATE(249), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(678), 10,
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
  [4992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(682), 11,
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
  [5012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(686), 11,
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
  [5032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(690), 10,
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
  [5054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(221), 11,
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
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(694), 11,
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
  [5094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_COLON,
    ACTIONS(698), 11,
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
  [5114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(702), 11,
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
  [5134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(706), 11,
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
  [5154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(710), 11,
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
  [5174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_COLON,
    ACTIONS(714), 11,
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
  [5194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_COLON,
    ACTIONS(718), 11,
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
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COLON,
    ACTIONS(722), 11,
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
  [5234] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(217), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(221), 10,
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
  [5278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_COLON,
    ACTIONS(221), 10,
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
  [5297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_COLON,
    ACTIONS(221), 10,
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
  [5316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
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
  [5337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_unit,
    ACTIONS(444), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(446), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(209), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5383] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(236), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5408] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_COLON_COLON,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      anon_sym_TILDE,
    ACTIONS(662), 1,
      anon_sym_PLUS,
    ACTIONS(664), 1,
      sym__descendant_operator,
    ACTIONS(738), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(206), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(242), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(207), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5518] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_COLON_COLON,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      anon_sym_TILDE,
    ACTIONS(662), 1,
      anon_sym_PLUS,
    ACTIONS(664), 1,
      sym__descendant_operator,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5572] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(740), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(254), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LPAREN2,
    ACTIONS(558), 1,
      anon_sym_selector,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(556), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(202), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(464), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(480), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5658] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(650), 1,
      anon_sym_COLON,
    ACTIONS(652), 1,
      anon_sym_COLON_COLON,
    ACTIONS(654), 1,
      anon_sym_POUND,
    ACTIONS(656), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      anon_sym_GT,
    ACTIONS(660), 1,
      anon_sym_TILDE,
    ACTIONS(662), 1,
      anon_sym_PLUS,
    ACTIONS(664), 1,
      sym__descendant_operator,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [5692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(456), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(472), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(460), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(476), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(468), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(488), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(484), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(223), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(746), 1,
      sym_unit,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      sym_unit,
    ACTIONS(438), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5875] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_block,
    STATE(213), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [5898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(478), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(454), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5928] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [5951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
    ACTIONS(758), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(462), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    ACTIONS(766), 1,
      aux_sym_integer_value_token1,
    STATE(271), 1,
      sym_integer_value,
    ACTIONS(764), 2,
      sym_from,
      sym_to,
    STATE(190), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6002] = 6,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(775), 1,
      sym__js_statement,
    STATE(185), 1,
      aux_sym__js_expressions,
    ACTIONS(771), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(235), 2,
      sym__js_expression,
      sym__js_block,
  [6023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_integer_value_token1,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym_integer_value,
    ACTIONS(764), 2,
      sym_from,
      sym_to,
    STATE(187), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6044] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      aux_sym_integer_value_token1,
    STATE(271), 1,
      sym_integer_value,
    ACTIONS(782), 2,
      sym_from,
      sym_to,
    STATE(187), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(470), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SLASH,
    ACTIONS(466), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_integer_value_token1,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym_integer_value,
    ACTIONS(764), 2,
      sym_from,
      sym_to,
    STATE(187), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SLASH,
    ACTIONS(458), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
    ACTIONS(790), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6146] = 6,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym__js_statement,
    STATE(185), 1,
      aux_sym__js_expressions,
    ACTIONS(796), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(235), 2,
      sym__js_expression,
      sym__js_block,
  [6167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SLASH,
    ACTIONS(474), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(450), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    ACTIONS(486), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(482), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6227] = 6,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym__js_statement,
    STATE(185), 1,
      aux_sym__js_expressions,
    ACTIONS(800), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(235), 2,
      sym__js_expression,
      sym__js_block,
  [6248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_integer_value_token1,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      sym_integer_value,
    ACTIONS(764), 2,
      sym_from,
      sym_to,
    STATE(186), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6293] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      sym_block,
    STATE(241), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6325] = 6,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    STATE(211), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6345] = 6,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6377] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      sym_block,
    STATE(231), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6421] = 6,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6441] = 6,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    ACTIONS(829), 1,
      sym__js_statement,
    STATE(211), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6461] = 5,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    STATE(210), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [6497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACK,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6512] = 5,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym__js_statement,
    STATE(198), 1,
      aux_sym__js_expressions,
    STATE(235), 2,
      sym__js_expression,
      sym__js_block,
  [6529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(842), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    STATE(261), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    STATE(252), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [6640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(854), 1,
      anon_sym_SEMI,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6655] = 5,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(798), 1,
      sym__js_statement,
    STATE(193), 1,
      aux_sym__js_expressions,
    STATE(235), 2,
      sym__js_expression,
      sym__js_block,
  [6672] = 5,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    STATE(204), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6704] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      sym_string_value,
    ACTIONS(860), 1,
      sym_identifier,
    STATE(174), 1,
      sym_arguments,
    STATE(293), 1,
      sym_call_expression,
  [6723] = 5,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    ACTIONS(814), 1,
      sym__js_statement,
    STATE(205), 1,
      aux_sym__js_expressions,
    STATE(263), 2,
      sym__js_expression,
      sym__js_block,
  [6740] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(860), 1,
      sym_identifier,
    ACTIONS(862), 1,
      sym_string_value,
    STATE(174), 1,
      sym_arguments,
    STATE(275), 1,
      sym_call_expression,
  [6759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SLASH,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    ACTIONS(834), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [6790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(868), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6818] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(871), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [6828] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(873), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [6838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6862] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(877), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [6872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_block,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [6912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(842), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_COLON,
    ACTIONS(808), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6986] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(871), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [6995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7008] = 4,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_RBRACE,
    ACTIONS(892), 1,
      sym__js_statement,
    STATE(250), 1,
      aux_sym__js_block_repeat1,
  [7021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      aux_sym_selectors_repeat1,
  [7034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [7047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_string_value,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(295), 1,
      sym_call_expression,
  [7060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RPAREN,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [7071] = 4,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    ACTIONS(907), 1,
      sym__js_statement,
    STATE(264), 1,
      aux_sym__js_block_repeat1,
  [7084] = 4,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_RBRACE,
    ACTIONS(911), 1,
      sym__js_statement,
    STATE(250), 1,
      aux_sym__js_block_repeat1,
  [7097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
    ACTIONS(913), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_selectors_repeat1,
  [7110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [7123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      sym_string_value,
    ACTIONS(921), 1,
      sym_identifier,
    STATE(305), 1,
      sym_call_expression,
  [7136] = 4,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    ACTIONS(925), 1,
      sym__js_statement,
    STATE(256), 1,
      aux_sym__js_block_repeat1,
  [7149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym_import_statement_repeat1,
  [7162] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(877), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [7171] = 2,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(873), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [7180] = 4,
    ACTIONS(773), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__js_statement,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      aux_sym__js_block_repeat1,
  [7193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_keyframe_block_list,
  [7203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
  [7213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym_color_value_token1,
    ACTIONS(939), 1,
      sym_identifier,
  [7223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [7233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_arguments,
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [7253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACE,
    STATE(237), 1,
      sym_block,
  [7263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_keyframe_block_list,
  [7273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [7283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(945), 1,
      sym_unit,
  [7293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_SEMI,
  [7300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [7307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
  [7314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_SEMI,
  [7321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
  [7328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [7335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_SEMI,
  [7342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      aux_sym_color_value_token1,
  [7349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym_identifier,
  [7356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      aux_sym_color_value_token1,
  [7363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym_identifier,
  [7370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_identifier,
  [7377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [7384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      sym_identifier,
  [7391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      sym_identifier,
  [7398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
  [7405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [7412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym_identifier,
  [7419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_SEMI,
  [7426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      sym_identifier,
  [7433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_SEMI,
  [7440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [7447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      aux_sym_color_value_token1,
  [7454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_LPAREN2,
  [7461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [7468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_RBRACE,
  [7475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      sym_identifier,
  [7482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [7489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_identifier,
  [7496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      sym_identifier,
  [7503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_SEMI,
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
  [SMALL_STATE(13)] = 939,
  [SMALL_STATE(14)] = 1000,
  [SMALL_STATE(15)] = 1058,
  [SMALL_STATE(16)] = 1116,
  [SMALL_STATE(17)] = 1155,
  [SMALL_STATE(18)] = 1206,
  [SMALL_STATE(19)] = 1259,
  [SMALL_STATE(20)] = 1310,
  [SMALL_STATE(21)] = 1343,
  [SMALL_STATE(22)] = 1394,
  [SMALL_STATE(23)] = 1443,
  [SMALL_STATE(24)] = 1489,
  [SMALL_STATE(25)] = 1531,
  [SMALL_STATE(26)] = 1581,
  [SMALL_STATE(27)] = 1623,
  [SMALL_STATE(28)] = 1665,
  [SMALL_STATE(29)] = 1707,
  [SMALL_STATE(30)] = 1749,
  [SMALL_STATE(31)] = 1799,
  [SMALL_STATE(32)] = 1845,
  [SMALL_STATE(33)] = 1895,
  [SMALL_STATE(34)] = 1937,
  [SMALL_STATE(35)] = 1964,
  [SMALL_STATE(36)] = 1991,
  [SMALL_STATE(37)] = 2018,
  [SMALL_STATE(38)] = 2045,
  [SMALL_STATE(39)] = 2072,
  [SMALL_STATE(40)] = 2117,
  [SMALL_STATE(41)] = 2144,
  [SMALL_STATE(42)] = 2171,
  [SMALL_STATE(43)] = 2198,
  [SMALL_STATE(44)] = 2225,
  [SMALL_STATE(45)] = 2252,
  [SMALL_STATE(46)] = 2279,
  [SMALL_STATE(47)] = 2310,
  [SMALL_STATE(48)] = 2337,
  [SMALL_STATE(49)] = 2364,
  [SMALL_STATE(50)] = 2391,
  [SMALL_STATE(51)] = 2418,
  [SMALL_STATE(52)] = 2445,
  [SMALL_STATE(53)] = 2472,
  [SMALL_STATE(54)] = 2499,
  [SMALL_STATE(55)] = 2526,
  [SMALL_STATE(56)] = 2553,
  [SMALL_STATE(57)] = 2580,
  [SMALL_STATE(58)] = 2607,
  [SMALL_STATE(59)] = 2634,
  [SMALL_STATE(60)] = 2661,
  [SMALL_STATE(61)] = 2688,
  [SMALL_STATE(62)] = 2715,
  [SMALL_STATE(63)] = 2742,
  [SMALL_STATE(64)] = 2769,
  [SMALL_STATE(65)] = 2796,
  [SMALL_STATE(66)] = 2823,
  [SMALL_STATE(67)] = 2850,
  [SMALL_STATE(68)] = 2877,
  [SMALL_STATE(69)] = 2904,
  [SMALL_STATE(70)] = 2931,
  [SMALL_STATE(71)] = 2958,
  [SMALL_STATE(72)] = 2985,
  [SMALL_STATE(73)] = 3012,
  [SMALL_STATE(74)] = 3039,
  [SMALL_STATE(75)] = 3066,
  [SMALL_STATE(76)] = 3093,
  [SMALL_STATE(77)] = 3120,
  [SMALL_STATE(78)] = 3147,
  [SMALL_STATE(79)] = 3174,
  [SMALL_STATE(80)] = 3201,
  [SMALL_STATE(81)] = 3228,
  [SMALL_STATE(82)] = 3255,
  [SMALL_STATE(83)] = 3299,
  [SMALL_STATE(84)] = 3343,
  [SMALL_STATE(85)] = 3387,
  [SMALL_STATE(86)] = 3431,
  [SMALL_STATE(87)] = 3459,
  [SMALL_STATE(88)] = 3487,
  [SMALL_STATE(89)] = 3512,
  [SMALL_STATE(90)] = 3553,
  [SMALL_STATE(91)] = 3578,
  [SMALL_STATE(92)] = 3619,
  [SMALL_STATE(93)] = 3644,
  [SMALL_STATE(94)] = 3669,
  [SMALL_STATE(95)] = 3694,
  [SMALL_STATE(96)] = 3719,
  [SMALL_STATE(97)] = 3744,
  [SMALL_STATE(98)] = 3769,
  [SMALL_STATE(99)] = 3794,
  [SMALL_STATE(100)] = 3819,
  [SMALL_STATE(101)] = 3857,
  [SMALL_STATE(102)] = 3895,
  [SMALL_STATE(103)] = 3933,
  [SMALL_STATE(104)] = 3961,
  [SMALL_STATE(105)] = 3999,
  [SMALL_STATE(106)] = 4037,
  [SMALL_STATE(107)] = 4075,
  [SMALL_STATE(108)] = 4113,
  [SMALL_STATE(109)] = 4151,
  [SMALL_STATE(110)] = 4187,
  [SMALL_STATE(111)] = 4225,
  [SMALL_STATE(112)] = 4261,
  [SMALL_STATE(113)] = 4299,
  [SMALL_STATE(114)] = 4337,
  [SMALL_STATE(115)] = 4375,
  [SMALL_STATE(116)] = 4413,
  [SMALL_STATE(117)] = 4451,
  [SMALL_STATE(118)] = 4489,
  [SMALL_STATE(119)] = 4527,
  [SMALL_STATE(120)] = 4555,
  [SMALL_STATE(121)] = 4582,
  [SMALL_STATE(122)] = 4616,
  [SMALL_STATE(123)] = 4650,
  [SMALL_STATE(124)] = 4676,
  [SMALL_STATE(125)] = 4702,
  [SMALL_STATE(126)] = 4722,
  [SMALL_STATE(127)] = 4742,
  [SMALL_STATE(128)] = 4764,
  [SMALL_STATE(129)] = 4788,
  [SMALL_STATE(130)] = 4810,
  [SMALL_STATE(131)] = 4830,
  [SMALL_STATE(132)] = 4870,
  [SMALL_STATE(133)] = 4890,
  [SMALL_STATE(134)] = 4910,
  [SMALL_STATE(135)] = 4930,
  [SMALL_STATE(136)] = 4970,
  [SMALL_STATE(137)] = 4992,
  [SMALL_STATE(138)] = 5012,
  [SMALL_STATE(139)] = 5032,
  [SMALL_STATE(140)] = 5054,
  [SMALL_STATE(141)] = 5074,
  [SMALL_STATE(142)] = 5094,
  [SMALL_STATE(143)] = 5114,
  [SMALL_STATE(144)] = 5134,
  [SMALL_STATE(145)] = 5154,
  [SMALL_STATE(146)] = 5174,
  [SMALL_STATE(147)] = 5194,
  [SMALL_STATE(148)] = 5214,
  [SMALL_STATE(149)] = 5234,
  [SMALL_STATE(150)] = 5259,
  [SMALL_STATE(151)] = 5278,
  [SMALL_STATE(152)] = 5297,
  [SMALL_STATE(153)] = 5316,
  [SMALL_STATE(154)] = 5337,
  [SMALL_STATE(155)] = 5358,
  [SMALL_STATE(156)] = 5383,
  [SMALL_STATE(157)] = 5408,
  [SMALL_STATE(158)] = 5443,
  [SMALL_STATE(159)] = 5468,
  [SMALL_STATE(160)] = 5493,
  [SMALL_STATE(161)] = 5518,
  [SMALL_STATE(162)] = 5553,
  [SMALL_STATE(163)] = 5572,
  [SMALL_STATE(164)] = 5597,
  [SMALL_STATE(165)] = 5622,
  [SMALL_STATE(166)] = 5640,
  [SMALL_STATE(167)] = 5658,
  [SMALL_STATE(168)] = 5692,
  [SMALL_STATE(169)] = 5710,
  [SMALL_STATE(170)] = 5728,
  [SMALL_STATE(171)] = 5746,
  [SMALL_STATE(172)] = 5764,
  [SMALL_STATE(173)] = 5782,
  [SMALL_STATE(174)] = 5800,
  [SMALL_STATE(175)] = 5818,
  [SMALL_STATE(176)] = 5839,
  [SMALL_STATE(177)] = 5857,
  [SMALL_STATE(178)] = 5875,
  [SMALL_STATE(179)] = 5898,
  [SMALL_STATE(180)] = 5913,
  [SMALL_STATE(181)] = 5928,
  [SMALL_STATE(182)] = 5951,
  [SMALL_STATE(183)] = 5966,
  [SMALL_STATE(184)] = 5981,
  [SMALL_STATE(185)] = 6002,
  [SMALL_STATE(186)] = 6023,
  [SMALL_STATE(187)] = 6044,
  [SMALL_STATE(188)] = 6065,
  [SMALL_STATE(189)] = 6080,
  [SMALL_STATE(190)] = 6095,
  [SMALL_STATE(191)] = 6116,
  [SMALL_STATE(192)] = 6131,
  [SMALL_STATE(193)] = 6146,
  [SMALL_STATE(194)] = 6167,
  [SMALL_STATE(195)] = 6182,
  [SMALL_STATE(196)] = 6197,
  [SMALL_STATE(197)] = 6212,
  [SMALL_STATE(198)] = 6227,
  [SMALL_STATE(199)] = 6248,
  [SMALL_STATE(200)] = 6269,
  [SMALL_STATE(201)] = 6281,
  [SMALL_STATE(202)] = 6293,
  [SMALL_STATE(203)] = 6313,
  [SMALL_STATE(204)] = 6325,
  [SMALL_STATE(205)] = 6345,
  [SMALL_STATE(206)] = 6365,
  [SMALL_STATE(207)] = 6377,
  [SMALL_STATE(208)] = 6397,
  [SMALL_STATE(209)] = 6409,
  [SMALL_STATE(210)] = 6421,
  [SMALL_STATE(211)] = 6441,
  [SMALL_STATE(212)] = 6461,
  [SMALL_STATE(213)] = 6478,
  [SMALL_STATE(214)] = 6497,
  [SMALL_STATE(215)] = 6512,
  [SMALL_STATE(216)] = 6529,
  [SMALL_STATE(217)] = 6544,
  [SMALL_STATE(218)] = 6557,
  [SMALL_STATE(219)] = 6574,
  [SMALL_STATE(220)] = 6589,
  [SMALL_STATE(221)] = 6604,
  [SMALL_STATE(222)] = 6621,
  [SMALL_STATE(223)] = 6640,
  [SMALL_STATE(224)] = 6655,
  [SMALL_STATE(225)] = 6672,
  [SMALL_STATE(226)] = 6689,
  [SMALL_STATE(227)] = 6704,
  [SMALL_STATE(228)] = 6723,
  [SMALL_STATE(229)] = 6740,
  [SMALL_STATE(230)] = 6759,
  [SMALL_STATE(231)] = 6774,
  [SMALL_STATE(232)] = 6790,
  [SMALL_STATE(233)] = 6804,
  [SMALL_STATE(234)] = 6818,
  [SMALL_STATE(235)] = 6828,
  [SMALL_STATE(236)] = 6838,
  [SMALL_STATE(237)] = 6852,
  [SMALL_STATE(238)] = 6862,
  [SMALL_STATE(239)] = 6872,
  [SMALL_STATE(240)] = 6882,
  [SMALL_STATE(241)] = 6896,
  [SMALL_STATE(242)] = 6912,
  [SMALL_STATE(243)] = 6926,
  [SMALL_STATE(244)] = 6940,
  [SMALL_STATE(245)] = 6950,
  [SMALL_STATE(246)] = 6964,
  [SMALL_STATE(247)] = 6974,
  [SMALL_STATE(248)] = 6986,
  [SMALL_STATE(249)] = 6995,
  [SMALL_STATE(250)] = 7008,
  [SMALL_STATE(251)] = 7021,
  [SMALL_STATE(252)] = 7034,
  [SMALL_STATE(253)] = 7047,
  [SMALL_STATE(254)] = 7060,
  [SMALL_STATE(255)] = 7071,
  [SMALL_STATE(256)] = 7084,
  [SMALL_STATE(257)] = 7097,
  [SMALL_STATE(258)] = 7110,
  [SMALL_STATE(259)] = 7123,
  [SMALL_STATE(260)] = 7136,
  [SMALL_STATE(261)] = 7149,
  [SMALL_STATE(262)] = 7162,
  [SMALL_STATE(263)] = 7171,
  [SMALL_STATE(264)] = 7180,
  [SMALL_STATE(265)] = 7193,
  [SMALL_STATE(266)] = 7203,
  [SMALL_STATE(267)] = 7213,
  [SMALL_STATE(268)] = 7223,
  [SMALL_STATE(269)] = 7233,
  [SMALL_STATE(270)] = 7243,
  [SMALL_STATE(271)] = 7253,
  [SMALL_STATE(272)] = 7263,
  [SMALL_STATE(273)] = 7273,
  [SMALL_STATE(274)] = 7283,
  [SMALL_STATE(275)] = 7293,
  [SMALL_STATE(276)] = 7300,
  [SMALL_STATE(277)] = 7307,
  [SMALL_STATE(278)] = 7314,
  [SMALL_STATE(279)] = 7321,
  [SMALL_STATE(280)] = 7328,
  [SMALL_STATE(281)] = 7335,
  [SMALL_STATE(282)] = 7342,
  [SMALL_STATE(283)] = 7349,
  [SMALL_STATE(284)] = 7356,
  [SMALL_STATE(285)] = 7363,
  [SMALL_STATE(286)] = 7370,
  [SMALL_STATE(287)] = 7377,
  [SMALL_STATE(288)] = 7384,
  [SMALL_STATE(289)] = 7391,
  [SMALL_STATE(290)] = 7398,
  [SMALL_STATE(291)] = 7405,
  [SMALL_STATE(292)] = 7412,
  [SMALL_STATE(293)] = 7419,
  [SMALL_STATE(294)] = 7426,
  [SMALL_STATE(295)] = 7433,
  [SMALL_STATE(296)] = 7440,
  [SMALL_STATE(297)] = 7447,
  [SMALL_STATE(298)] = 7454,
  [SMALL_STATE(299)] = 7461,
  [SMALL_STATE(300)] = 7468,
  [SMALL_STATE(301)] = 7475,
  [SMALL_STATE(302)] = 7482,
  [SMALL_STATE(303)] = 7489,
  [SMALL_STATE(304)] = 7496,
  [SMALL_STATE(305)] = 7503,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(160),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(253),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(296),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(159),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(131),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(126),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(294),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(292),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(289),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(288),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(285),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(224),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(116),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(164),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(105),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(259),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(302),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(156),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(131),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(126),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(294),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(292),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(289),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(288),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(285),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(150),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(121),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(215),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(106),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(282),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(100),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(86),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(46),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(225),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(282),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(100),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(86),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(46),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(225),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 9),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 9),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 9),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(113),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(110),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [768] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(255),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(235),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(271),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(274),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 15),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(260),
  [829] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(263),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(91),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(149),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(250),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(27),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [949] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
