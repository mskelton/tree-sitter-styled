#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 293
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 9
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

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
  sym_js_expression = 53,
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
  aux_sym_stylesheet_repeat1 = 98,
  aux_sym_import_statement_repeat1 = 99,
  aux_sym_keyframe_block_list_repeat1 = 100,
  aux_sym_selectors_repeat1 = 101,
  aux_sym_block_repeat1 = 102,
  aux_sym_pseudo_class_arguments_repeat1 = 103,
  aux_sym_pseudo_class_arguments_repeat2 = 104,
  aux_sym_declaration_repeat1 = 105,
  aux_sym_arguments_repeat1 = 106,
  alias_sym_class_name = 107,
  alias_sym_feature_name = 108,
  alias_sym_function_name = 109,
  alias_sym_id_name = 110,
  alias_sym_keyframes_name = 111,
  alias_sym_keyword_query = 112,
  alias_sym_namespace_name = 113,
  alias_sym_property_name = 114,
  alias_sym_tag_name = 115,
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
  [sym_js_expression] = "js_expression",
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
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
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
  [sym_js_expression] = sym_js_expression,
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
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
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
  [sym_js_expression] = {
    .visible = true,
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
    [2] = alias_sym_class_name,
  },
  [10] = {
    [2] = alias_sym_tag_name,
  },
  [11] = {
    [2] = alias_sym_id_name,
  },
  [12] = {
    [1] = alias_sym_namespace_name,
  },
  [13] = {
    [0] = alias_sym_property_name,
  },
  [14] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [18] = 18,
  [19] = 17,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
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
  [53] = 53,
  [54] = 35,
  [55] = 53,
  [56] = 50,
  [57] = 40,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 44,
  [62] = 62,
  [63] = 42,
  [64] = 45,
  [65] = 41,
  [66] = 66,
  [67] = 46,
  [68] = 68,
  [69] = 68,
  [70] = 58,
  [71] = 36,
  [72] = 66,
  [73] = 47,
  [74] = 48,
  [75] = 39,
  [76] = 37,
  [77] = 52,
  [78] = 34,
  [79] = 51,
  [80] = 49,
  [81] = 38,
  [82] = 82,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 83,
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
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 102,
  [111] = 104,
  [112] = 112,
  [113] = 113,
  [114] = 101,
  [115] = 103,
  [116] = 116,
  [117] = 107,
  [118] = 108,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 62,
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
  [152] = 98,
  [153] = 151,
  [154] = 85,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 150,
  [159] = 159,
  [160] = 160,
  [161] = 149,
  [162] = 86,
  [163] = 163,
  [164] = 164,
  [165] = 93,
  [166] = 96,
  [167] = 97,
  [168] = 99,
  [169] = 92,
  [170] = 95,
  [171] = 89,
  [172] = 172,
  [173] = 94,
  [174] = 88,
  [175] = 62,
  [176] = 86,
  [177] = 85,
  [178] = 178,
  [179] = 93,
  [180] = 180,
  [181] = 178,
  [182] = 95,
  [183] = 94,
  [184] = 184,
  [185] = 180,
  [186] = 186,
  [187] = 92,
  [188] = 88,
  [189] = 89,
  [190] = 99,
  [191] = 98,
  [192] = 97,
  [193] = 96,
  [194] = 194,
  [195] = 194,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 208,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 213,
  [214] = 207,
  [215] = 212,
  [216] = 207,
  [217] = 205,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 220,
  [227] = 227,
  [228] = 46,
  [229] = 223,
  [230] = 38,
  [231] = 227,
  [232] = 34,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 233,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 85,
  [246] = 246,
  [247] = 243,
  [248] = 246,
  [249] = 249,
  [250] = 250,
  [251] = 250,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 255,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 255,
  [265] = 265,
  [266] = 266,
  [267] = 265,
  [268] = 254,
  [269] = 269,
  [270] = 270,
  [271] = 261,
  [272] = 272,
  [273] = 273,
  [274] = 261,
  [275] = 269,
  [276] = 266,
  [277] = 266,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 269,
  [283] = 270,
  [284] = 258,
  [285] = 272,
  [286] = 286,
  [287] = 257,
  [288] = 288,
  [289] = 263,
  [290] = 290,
  [291] = 257,
  [292] = 292,
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
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '_') ADVANCE(193);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '{') ADVANCE(86);
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
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '{') ADVANCE(261);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(261);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 70:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 71:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(260);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '}') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(262);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '_') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(193);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '/') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(230);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 's') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(71);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_js_expression);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 75},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 75},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 75},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 75},
  [45] = {.lex_state = 75},
  [46] = {.lex_state = 75},
  [47] = {.lex_state = 75},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 75},
  [50] = {.lex_state = 75},
  [51] = {.lex_state = 75},
  [52] = {.lex_state = 75},
  [53] = {.lex_state = 75},
  [54] = {.lex_state = 75},
  [55] = {.lex_state = 75},
  [56] = {.lex_state = 75},
  [57] = {.lex_state = 75},
  [58] = {.lex_state = 75},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 75},
  [61] = {.lex_state = 75},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 75},
  [64] = {.lex_state = 75},
  [65] = {.lex_state = 75},
  [66] = {.lex_state = 75},
  [67] = {.lex_state = 75},
  [68] = {.lex_state = 75},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 75},
  [74] = {.lex_state = 75},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 75},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 75},
  [80] = {.lex_state = 75},
  [81] = {.lex_state = 75},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
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
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 75, .external_lex_state = 1},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 75, .external_lex_state = 1},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 75, .external_lex_state = 1},
  [126] = {.lex_state = 75, .external_lex_state = 1},
  [127] = {.lex_state = 75, .external_lex_state = 1},
  [128] = {.lex_state = 75, .external_lex_state = 1},
  [129] = {.lex_state = 75, .external_lex_state = 1},
  [130] = {.lex_state = 75, .external_lex_state = 1},
  [131] = {.lex_state = 75, .external_lex_state = 1},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 75, .external_lex_state = 1},
  [134] = {.lex_state = 75, .external_lex_state = 1},
  [135] = {.lex_state = 75, .external_lex_state = 1},
  [136] = {.lex_state = 75, .external_lex_state = 1},
  [137] = {.lex_state = 75, .external_lex_state = 1},
  [138] = {.lex_state = 75, .external_lex_state = 1},
  [139] = {.lex_state = 75, .external_lex_state = 1},
  [140] = {.lex_state = 75, .external_lex_state = 1},
  [141] = {.lex_state = 75, .external_lex_state = 1},
  [142] = {.lex_state = 75, .external_lex_state = 1},
  [143] = {.lex_state = 75, .external_lex_state = 1},
  [144] = {.lex_state = 75, .external_lex_state = 1},
  [145] = {.lex_state = 75, .external_lex_state = 1},
  [146] = {.lex_state = 75, .external_lex_state = 1},
  [147] = {.lex_state = 75, .external_lex_state = 1},
  [148] = {.lex_state = 75, .external_lex_state = 1},
  [149] = {.lex_state = 75, .external_lex_state = 1},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 75, .external_lex_state = 1},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 75, .external_lex_state = 1},
  [161] = {.lex_state = 75, .external_lex_state = 1},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 75, .external_lex_state = 1},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 75, .external_lex_state = 1},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 75},
  [211] = {.lex_state = 75},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 75},
  [240] = {.lex_state = 75},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 75},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 75},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 18},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 75},
  [256] = {.lex_state = 75},
  [257] = {.lex_state = 23},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 75},
  [261] = {.lex_state = 75},
  [262] = {.lex_state = 75},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 75},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 75},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 25},
  [270] = {.lex_state = 75},
  [271] = {.lex_state = 75},
  [272] = {.lex_state = 23},
  [273] = {.lex_state = 75},
  [274] = {.lex_state = 75},
  [275] = {.lex_state = 25},
  [276] = {.lex_state = 75},
  [277] = {.lex_state = 75},
  [278] = {.lex_state = 75},
  [279] = {.lex_state = 75},
  [280] = {.lex_state = 75},
  [281] = {.lex_state = 75},
  [282] = {.lex_state = 25},
  [283] = {.lex_state = 75},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 23},
  [286] = {.lex_state = 75},
  [287] = {.lex_state = 23},
  [288] = {.lex_state = 75},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 23},
  [292] = {.lex_state = 75},
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
    [sym_stylesheet] = STATE(290),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(248),
    [sym__selector] = STATE(144),
    [sym_universal_selector] = STATE(144),
    [sym_class_selector] = STATE(144),
    [sym_pseudo_class_selector] = STATE(144),
    [sym_pseudo_element_selector] = STATE(144),
    [sym_id_selector] = STATE(144),
    [sym_attribute_selector] = STATE(144),
    [sym_child_selector] = STATE(144),
    [sym_descendant_selector] = STATE(144),
    [sym_sibling_selector] = STATE(144),
    [sym_adjacent_sibling_selector] = STATE(144),
    [sym_declaration] = STATE(9),
    [sym_interpolation] = STATE(9),
    [aux_sym_stylesheet_repeat1] = STATE(9),
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
    STATE(246), 1,
      sym_selectors,
    STATE(266), 1,
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
    STATE(246), 1,
      sym_selectors,
    STATE(277), 1,
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
    STATE(246), 1,
      sym_selectors,
    STATE(276), 1,
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
    STATE(246), 1,
      sym_selectors,
    STATE(274), 1,
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
    STATE(246), 1,
      sym_selectors,
    STATE(271), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
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
    STATE(246), 1,
      sym_selectors,
    STATE(261), 1,
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
    STATE(246), 1,
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
  [620] = 21,
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
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(248), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 11,
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
  [706] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_ATimport,
    ACTIONS(126), 1,
      anon_sym_ATmedia,
    ACTIONS(129), 1,
      anon_sym_ATcharset,
    ACTIONS(132), 1,
      anon_sym_ATnamespace,
    ACTIONS(138), 1,
      anon_sym_ATsupports,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      anon_sym_COLON_COLON,
    ACTIONS(156), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_at_keyword,
    ACTIONS(168), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(248), 1,
      sym_selectors,
    ACTIONS(135), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(141), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(10), 11,
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
    STATE(26), 1,
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
    STATE(137), 11,
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
    STATE(59), 1,
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
    STATE(22), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(113), 8,
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
    ACTIONS(215), 1,
      sym_important,
    STATE(25), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(113), 8,
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
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(219), 1,
      sym_important,
    STATE(27), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(113), 8,
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
    STATE(96), 1,
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
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(229), 1,
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
  [1206] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(239), 4,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(243), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(237), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1239] = 14,
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
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(224), 1,
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
  [1290] = 14,
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
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(223), 1,
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
  [1341] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_LPAREN2,
    ACTIONS(260), 1,
      sym_string_value,
    ACTIONS(263), 1,
      aux_sym_integer_value_token1,
    ACTIONS(266), 1,
      aux_sym_float_value_token1,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(272), 1,
      sym_plain_value,
    ACTIONS(275), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(21), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(113), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1390] = 15,
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
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_important,
    STATE(21), 1,
      aux_sym_declaration_repeat1,
    STATE(113), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1443] = 10,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(284), 2,
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
  [1485] = 10,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(288), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(125), 11,
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
  [1527] = 14,
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
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym_important,
    STATE(21), 1,
      aux_sym_declaration_repeat1,
    STATE(113), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1577] = 14,
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
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(234), 1,
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
  [1627] = 14,
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
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      sym_important,
    STATE(21), 1,
      aux_sym_declaration_repeat1,
    STATE(113), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1677] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_LPAREN2,
    ACTIONS(308), 1,
      sym_string_value,
    ACTIONS(311), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(300), 3,
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
  [1723] = 12,
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
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(326), 3,
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
  [1769] = 10,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(328), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(163), 11,
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
  [1811] = 10,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(330), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(141), 11,
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
  [1853] = 10,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(332), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(130), 11,
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
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(334), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(143), 11,
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
    ACTIONS(338), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(336), 10,
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
  [1964] = 3,
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
    ACTIONS(340), 10,
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
  [1991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(346), 10,
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
  [2018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
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
  [2045] = 3,
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
  [2072] = 3,
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
  [2099] = 3,
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
  [2126] = 3,
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
  [2153] = 3,
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
  [2180] = 3,
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
  [2207] = 3,
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
  [2234] = 3,
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
  [2261] = 3,
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
  [2288] = 3,
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
    ACTIONS(390), 10,
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
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(394), 10,
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
  [2342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(398), 10,
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
  [2369] = 3,
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
  [2396] = 3,
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
  [2423] = 3,
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
    ACTIONS(410), 10,
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
  [2450] = 3,
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
  [2477] = 3,
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
    ACTIONS(340), 10,
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
  [2504] = 3,
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
  [2531] = 3,
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
  [2558] = 3,
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
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 9,
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
  [2612] = 12,
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
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(420), 2,
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
  [2657] = 3,
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
  [2684] = 3,
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
  [2711] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
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
  [2742] = 3,
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
  [2769] = 3,
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
  [2796] = 3,
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
  [2823] = 3,
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
  [2850] = 3,
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
  [2877] = 3,
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
  [2904] = 3,
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
  [2931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 9,
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
  [2958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(346), 10,
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
  [3012] = 3,
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
    ACTIONS(390), 10,
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
  [3039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(394), 10,
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
  [3093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
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
  [3120] = 3,
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
    ACTIONS(410), 10,
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
    ACTIONS(338), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(336), 10,
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
  [3201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 9,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
    ACTIONS(398), 10,
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
  [3228] = 3,
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
    STATE(28), 1,
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
    STATE(20), 1,
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
  [3387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym_unit,
    ACTIONS(438), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(436), 10,
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
  [3415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_unit,
    ACTIONS(444), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(442), 10,
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
  [3443] = 12,
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
    ACTIONS(448), 1,
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
  [3512] = 3,
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
  [3537] = 11,
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
    STATE(82), 1,
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
    STATE(29), 1,
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
    STATE(213), 8,
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
    ACTIONS(506), 1,
      sym_string_value,
    ACTIONS(508), 1,
      sym_plain_value,
    STATE(212), 8,
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
    STATE(179), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3933] = 10,
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
    ACTIONS(514), 1,
      sym_string_value,
    ACTIONS(516), 1,
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
  [3971] = 10,
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
    ACTIONS(518), 1,
      sym_string_value,
    ACTIONS(520), 1,
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
  [4009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(522), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(252), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4037] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      sym_string_value,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(536), 1,
      sym_plain_value,
    ACTIONS(538), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(165), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4075] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(542), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(550), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(205), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4111] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(554), 1,
      sym_string_value,
    ACTIONS(556), 1,
      sym_plain_value,
    STATE(107), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4149] = 10,
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
    ACTIONS(558), 1,
      sym_string_value,
    ACTIONS(560), 1,
      sym_plain_value,
    STATE(207), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
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
    ACTIONS(562), 1,
      sym_string_value,
    ACTIONS(564), 1,
      sym_plain_value,
    STATE(93), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4225] = 10,
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
    ACTIONS(566), 1,
      sym_string_value,
    ACTIONS(568), 1,
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
  [4263] = 10,
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
    ACTIONS(570), 1,
      sym_string_value,
    ACTIONS(572), 1,
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
  [4301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(576), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(574), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4329] = 10,
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
    ACTIONS(578), 1,
      sym_string_value,
    ACTIONS(580), 1,
      sym_plain_value,
    STATE(215), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4367] = 10,
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
    ACTIONS(582), 1,
      sym_string_value,
    ACTIONS(584), 1,
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
  [4405] = 10,
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
    ACTIONS(586), 1,
      sym_string_value,
    ACTIONS(588), 1,
      sym_plain_value,
    STATE(206), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4443] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(542), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(550), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(217), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4479] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_POUND,
    ACTIONS(526), 1,
      anon_sym_LPAREN2,
    ACTIONS(530), 1,
      aux_sym_integer_value_token1,
    ACTIONS(532), 1,
      aux_sym_float_value_token1,
    ACTIONS(534), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(592), 1,
      sym_string_value,
    ACTIONS(594), 1,
      sym_plain_value,
    STATE(117), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4517] = 10,
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
    ACTIONS(596), 1,
      sym_string_value,
    ACTIONS(598), 1,
      sym_plain_value,
    STATE(105), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
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
  [4582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COLON,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_pseudo_class_arguments,
    ACTIONS(604), 11,
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
  [4608] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(610), 1,
      anon_sym_SEMI,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(181), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
    ACTIONS(616), 1,
      anon_sym_COLON,
    STATE(146), 1,
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
  [4668] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(618), 1,
      anon_sym_SEMI,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(178), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(622), 10,
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
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(628), 11,
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
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(632), 11,
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
  [4764] = 3,
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
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(636), 11,
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
  [4804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(640), 10,
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
  [4826] = 3,
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
  [4846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
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
  [4870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_COLON,
    ACTIONS(650), 11,
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
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(654), 11,
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
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(658), 11,
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
  [4930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(662), 11,
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
  [4950] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_TILDE,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    ACTIONS(680), 1,
      sym__descendant_operator,
    STATE(234), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4990] = 3,
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
  [5010] = 3,
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
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(690), 11,
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
  [5050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(694), 10,
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
  [5072] = 3,
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
  [5092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(702), 10,
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
  [5114] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_TILDE,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    ACTIONS(680), 1,
      sym__descendant_operator,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      aux_sym_selectors_repeat1,
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
  [5234] = 3,
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
  [5253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(198), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5278] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(227), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [5322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(231), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_unit,
    ACTIONS(436), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(438), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(731), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(241), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(197), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5418] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_TILDE,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    ACTIONS(680), 1,
      sym__descendant_operator,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(199), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5478] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(203), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
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
  [5522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
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
  [5541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_unit,
    ACTIONS(442), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(444), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5562] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_TILDE,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    ACTIONS(680), 1,
      sym__descendant_operator,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5597] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN2,
    ACTIONS(548), 1,
      anon_sym_selector,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(218), 6,
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
  [5658] = 3,
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
  [5676] = 3,
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
  [5694] = 3,
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
  [5712] = 3,
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
  [5730] = 3,
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
  [5748] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_DOT,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      anon_sym_COLON_COLON,
    ACTIONS(670), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_GT,
    ACTIONS(676), 1,
      anon_sym_TILDE,
    ACTIONS(678), 1,
      anon_sym_PLUS,
    ACTIONS(680), 1,
      sym__descendant_operator,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [5782] = 3,
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
  [5800] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [5818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SLASH,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
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
    ACTIONS(444), 1,
      anon_sym_SLASH,
    ACTIONS(746), 1,
      sym_unit,
    ACTIONS(442), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SLASH,
    ACTIONS(748), 1,
      sym_unit,
    ACTIONS(436), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5875] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_block,
    STATE(208), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [5898] = 3,
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
  [5913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(760), 1,
      aux_sym_integer_value_token1,
    STATE(242), 1,
      sym_integer_value,
    ACTIONS(758), 2,
      sym_from,
      sym_to,
    STATE(195), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5934] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_block,
    STATE(209), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [5957] = 3,
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
  [5972] = 3,
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
  [5987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACK,
    ACTIONS(764), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_integer_value_token1,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_integer_value,
    ACTIONS(758), 2,
      sym_from,
      sym_to,
    STATE(194), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6023] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 1,
      aux_sym_integer_value_token1,
    STATE(242), 1,
      sym_integer_value,
    ACTIONS(772), 2,
      sym_from,
      sym_to,
    STATE(186), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6044] = 3,
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
  [6059] = 3,
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
  [6074] = 3,
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
  [6089] = 3,
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
  [6104] = 3,
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
  [6119] = 3,
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
  [6134] = 3,
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
  [6149] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_integer_value_token1,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_integer_value,
    ACTIONS(758), 2,
      sym_from,
      sym_to,
    STATE(186), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      aux_sym_integer_value_token1,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_integer_value,
    ACTIONS(758), 2,
      sym_from,
      sym_to,
    STATE(186), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_RBRACK,
    ACTIONS(782), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [6206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_block,
    STATE(226), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_block,
    STATE(220), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6318] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACK,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_block,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6384] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_block,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6403] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    ACTIONS(812), 1,
      sym_string_value,
    ACTIONS(814), 1,
      sym_identifier,
    STATE(166), 1,
      sym_arguments,
    STATE(284), 1,
      sym_call_expression,
  [6422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    ACTIONS(814), 1,
      sym_identifier,
    ACTIONS(816), 1,
      sym_string_value,
    STATE(166), 1,
      sym_arguments,
    STATE(258), 1,
      sym_call_expression,
  [6441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(818), 1,
      anon_sym_SEMI,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(824), 1,
      anon_sym_SEMI,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_SLASH,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    ACTIONS(800), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(828), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(830), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(830), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      sym_block,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(792), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      sym_block,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      aux_sym_selectors_repeat1,
  [6767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_selectors_repeat1,
  [6780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_SEMI,
    STATE(219), 1,
      aux_sym_import_statement_repeat1,
  [6793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      sym_string_value,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(289), 1,
      sym_call_expression,
  [6819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_string_value,
    ACTIONS(868), 1,
      sym_identifier,
    STATE(263), 1,
      sym_call_expression,
  [6832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RPAREN,
    ACTIONS(754), 2,
      anon_sym_and,
      anon_sym_or,
  [6843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym_block,
  [6853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_keyframe_block_list,
  [6863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [6873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(876), 1,
      sym_unit,
  [6883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [6893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_keyframe_block_list,
  [6903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [6913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [6923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    ACTIONS(886), 1,
      anon_sym_RBRACE_SEMI,
  [6933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(890), 1,
      anon_sym_RBRACE_SEMI,
  [6943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_arguments,
  [6953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      aux_sym_color_value_token1,
    ACTIONS(894), 1,
      sym_identifier,
  [6963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
  [6970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
  [6977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [6984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_js_expression,
  [6991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_SEMI,
  [6998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_LPAREN2,
  [7005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_identifier,
  [7012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [7019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
  [7026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
  [7033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [7040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [7047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [7054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [7061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [7068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym_color_value_token1,
  [7075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
  [7082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [7089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_js_expression,
  [7096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_identifier,
  [7103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [7110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      aux_sym_color_value_token1,
  [7117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [7124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [7131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [7138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [7145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym_identifier,
  [7152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_identifier,
  [7159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      aux_sym_color_value_token1,
  [7166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
  [7173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_SEMI,
  [7180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_js_expression,
  [7187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_identifier,
  [7194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_js_expression,
  [7201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      sym_identifier,
  [7208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_SEMI,
  [7215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
  [7222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      sym_js_expression,
  [7229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_identifier,
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
  [SMALL_STATE(19)] = 1239,
  [SMALL_STATE(20)] = 1290,
  [SMALL_STATE(21)] = 1341,
  [SMALL_STATE(22)] = 1390,
  [SMALL_STATE(23)] = 1443,
  [SMALL_STATE(24)] = 1485,
  [SMALL_STATE(25)] = 1527,
  [SMALL_STATE(26)] = 1577,
  [SMALL_STATE(27)] = 1627,
  [SMALL_STATE(28)] = 1677,
  [SMALL_STATE(29)] = 1723,
  [SMALL_STATE(30)] = 1769,
  [SMALL_STATE(31)] = 1811,
  [SMALL_STATE(32)] = 1853,
  [SMALL_STATE(33)] = 1895,
  [SMALL_STATE(34)] = 1937,
  [SMALL_STATE(35)] = 1964,
  [SMALL_STATE(36)] = 1991,
  [SMALL_STATE(37)] = 2018,
  [SMALL_STATE(38)] = 2045,
  [SMALL_STATE(39)] = 2072,
  [SMALL_STATE(40)] = 2099,
  [SMALL_STATE(41)] = 2126,
  [SMALL_STATE(42)] = 2153,
  [SMALL_STATE(43)] = 2180,
  [SMALL_STATE(44)] = 2207,
  [SMALL_STATE(45)] = 2234,
  [SMALL_STATE(46)] = 2261,
  [SMALL_STATE(47)] = 2288,
  [SMALL_STATE(48)] = 2315,
  [SMALL_STATE(49)] = 2342,
  [SMALL_STATE(50)] = 2369,
  [SMALL_STATE(51)] = 2396,
  [SMALL_STATE(52)] = 2423,
  [SMALL_STATE(53)] = 2450,
  [SMALL_STATE(54)] = 2477,
  [SMALL_STATE(55)] = 2504,
  [SMALL_STATE(56)] = 2531,
  [SMALL_STATE(57)] = 2558,
  [SMALL_STATE(58)] = 2585,
  [SMALL_STATE(59)] = 2612,
  [SMALL_STATE(60)] = 2657,
  [SMALL_STATE(61)] = 2684,
  [SMALL_STATE(62)] = 2711,
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
  [SMALL_STATE(86)] = 3415,
  [SMALL_STATE(87)] = 3443,
  [SMALL_STATE(88)] = 3487,
  [SMALL_STATE(89)] = 3512,
  [SMALL_STATE(90)] = 3537,
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
  [SMALL_STATE(104)] = 3971,
  [SMALL_STATE(105)] = 4009,
  [SMALL_STATE(106)] = 4037,
  [SMALL_STATE(107)] = 4075,
  [SMALL_STATE(108)] = 4111,
  [SMALL_STATE(109)] = 4149,
  [SMALL_STATE(110)] = 4187,
  [SMALL_STATE(111)] = 4225,
  [SMALL_STATE(112)] = 4263,
  [SMALL_STATE(113)] = 4301,
  [SMALL_STATE(114)] = 4329,
  [SMALL_STATE(115)] = 4367,
  [SMALL_STATE(116)] = 4405,
  [SMALL_STATE(117)] = 4443,
  [SMALL_STATE(118)] = 4479,
  [SMALL_STATE(119)] = 4517,
  [SMALL_STATE(120)] = 4555,
  [SMALL_STATE(121)] = 4582,
  [SMALL_STATE(122)] = 4608,
  [SMALL_STATE(123)] = 4642,
  [SMALL_STATE(124)] = 4668,
  [SMALL_STATE(125)] = 4702,
  [SMALL_STATE(126)] = 4724,
  [SMALL_STATE(127)] = 4744,
  [SMALL_STATE(128)] = 4764,
  [SMALL_STATE(129)] = 4784,
  [SMALL_STATE(130)] = 4804,
  [SMALL_STATE(131)] = 4826,
  [SMALL_STATE(132)] = 4846,
  [SMALL_STATE(133)] = 4870,
  [SMALL_STATE(134)] = 4890,
  [SMALL_STATE(135)] = 4910,
  [SMALL_STATE(136)] = 4930,
  [SMALL_STATE(137)] = 4950,
  [SMALL_STATE(138)] = 4990,
  [SMALL_STATE(139)] = 5010,
  [SMALL_STATE(140)] = 5030,
  [SMALL_STATE(141)] = 5050,
  [SMALL_STATE(142)] = 5072,
  [SMALL_STATE(143)] = 5092,
  [SMALL_STATE(144)] = 5114,
  [SMALL_STATE(145)] = 5154,
  [SMALL_STATE(146)] = 5174,
  [SMALL_STATE(147)] = 5194,
  [SMALL_STATE(148)] = 5214,
  [SMALL_STATE(149)] = 5234,
  [SMALL_STATE(150)] = 5253,
  [SMALL_STATE(151)] = 5278,
  [SMALL_STATE(152)] = 5303,
  [SMALL_STATE(153)] = 5322,
  [SMALL_STATE(154)] = 5347,
  [SMALL_STATE(155)] = 5368,
  [SMALL_STATE(156)] = 5393,
  [SMALL_STATE(157)] = 5418,
  [SMALL_STATE(158)] = 5453,
  [SMALL_STATE(159)] = 5478,
  [SMALL_STATE(160)] = 5503,
  [SMALL_STATE(161)] = 5522,
  [SMALL_STATE(162)] = 5541,
  [SMALL_STATE(163)] = 5562,
  [SMALL_STATE(164)] = 5597,
  [SMALL_STATE(165)] = 5622,
  [SMALL_STATE(166)] = 5640,
  [SMALL_STATE(167)] = 5658,
  [SMALL_STATE(168)] = 5676,
  [SMALL_STATE(169)] = 5694,
  [SMALL_STATE(170)] = 5712,
  [SMALL_STATE(171)] = 5730,
  [SMALL_STATE(172)] = 5748,
  [SMALL_STATE(173)] = 5782,
  [SMALL_STATE(174)] = 5800,
  [SMALL_STATE(175)] = 5818,
  [SMALL_STATE(176)] = 5839,
  [SMALL_STATE(177)] = 5857,
  [SMALL_STATE(178)] = 5875,
  [SMALL_STATE(179)] = 5898,
  [SMALL_STATE(180)] = 5913,
  [SMALL_STATE(181)] = 5934,
  [SMALL_STATE(182)] = 5957,
  [SMALL_STATE(183)] = 5972,
  [SMALL_STATE(184)] = 5987,
  [SMALL_STATE(185)] = 6002,
  [SMALL_STATE(186)] = 6023,
  [SMALL_STATE(187)] = 6044,
  [SMALL_STATE(188)] = 6059,
  [SMALL_STATE(189)] = 6074,
  [SMALL_STATE(190)] = 6089,
  [SMALL_STATE(191)] = 6104,
  [SMALL_STATE(192)] = 6119,
  [SMALL_STATE(193)] = 6134,
  [SMALL_STATE(194)] = 6149,
  [SMALL_STATE(195)] = 6170,
  [SMALL_STATE(196)] = 6191,
  [SMALL_STATE(197)] = 6206,
  [SMALL_STATE(198)] = 6218,
  [SMALL_STATE(199)] = 6238,
  [SMALL_STATE(200)] = 6258,
  [SMALL_STATE(201)] = 6270,
  [SMALL_STATE(202)] = 6282,
  [SMALL_STATE(203)] = 6294,
  [SMALL_STATE(204)] = 6306,
  [SMALL_STATE(205)] = 6318,
  [SMALL_STATE(206)] = 6335,
  [SMALL_STATE(207)] = 6350,
  [SMALL_STATE(208)] = 6365,
  [SMALL_STATE(209)] = 6384,
  [SMALL_STATE(210)] = 6403,
  [SMALL_STATE(211)] = 6422,
  [SMALL_STATE(212)] = 6441,
  [SMALL_STATE(213)] = 6456,
  [SMALL_STATE(214)] = 6471,
  [SMALL_STATE(215)] = 6486,
  [SMALL_STATE(216)] = 6501,
  [SMALL_STATE(217)] = 6516,
  [SMALL_STATE(218)] = 6533,
  [SMALL_STATE(219)] = 6546,
  [SMALL_STATE(220)] = 6560,
  [SMALL_STATE(221)] = 6576,
  [SMALL_STATE(222)] = 6588,
  [SMALL_STATE(223)] = 6598,
  [SMALL_STATE(224)] = 6612,
  [SMALL_STATE(225)] = 6626,
  [SMALL_STATE(226)] = 6640,
  [SMALL_STATE(227)] = 6656,
  [SMALL_STATE(228)] = 6670,
  [SMALL_STATE(229)] = 6680,
  [SMALL_STATE(230)] = 6694,
  [SMALL_STATE(231)] = 6704,
  [SMALL_STATE(232)] = 6718,
  [SMALL_STATE(233)] = 6728,
  [SMALL_STATE(234)] = 6741,
  [SMALL_STATE(235)] = 6754,
  [SMALL_STATE(236)] = 6767,
  [SMALL_STATE(237)] = 6780,
  [SMALL_STATE(238)] = 6793,
  [SMALL_STATE(239)] = 6806,
  [SMALL_STATE(240)] = 6819,
  [SMALL_STATE(241)] = 6832,
  [SMALL_STATE(242)] = 6843,
  [SMALL_STATE(243)] = 6853,
  [SMALL_STATE(244)] = 6863,
  [SMALL_STATE(245)] = 6873,
  [SMALL_STATE(246)] = 6883,
  [SMALL_STATE(247)] = 6893,
  [SMALL_STATE(248)] = 6903,
  [SMALL_STATE(249)] = 6913,
  [SMALL_STATE(250)] = 6923,
  [SMALL_STATE(251)] = 6933,
  [SMALL_STATE(252)] = 6943,
  [SMALL_STATE(253)] = 6953,
  [SMALL_STATE(254)] = 6963,
  [SMALL_STATE(255)] = 6970,
  [SMALL_STATE(256)] = 6977,
  [SMALL_STATE(257)] = 6984,
  [SMALL_STATE(258)] = 6991,
  [SMALL_STATE(259)] = 6998,
  [SMALL_STATE(260)] = 7005,
  [SMALL_STATE(261)] = 7012,
  [SMALL_STATE(262)] = 7019,
  [SMALL_STATE(263)] = 7026,
  [SMALL_STATE(264)] = 7033,
  [SMALL_STATE(265)] = 7040,
  [SMALL_STATE(266)] = 7047,
  [SMALL_STATE(267)] = 7054,
  [SMALL_STATE(268)] = 7061,
  [SMALL_STATE(269)] = 7068,
  [SMALL_STATE(270)] = 7075,
  [SMALL_STATE(271)] = 7082,
  [SMALL_STATE(272)] = 7089,
  [SMALL_STATE(273)] = 7096,
  [SMALL_STATE(274)] = 7103,
  [SMALL_STATE(275)] = 7110,
  [SMALL_STATE(276)] = 7117,
  [SMALL_STATE(277)] = 7124,
  [SMALL_STATE(278)] = 7131,
  [SMALL_STATE(279)] = 7138,
  [SMALL_STATE(280)] = 7145,
  [SMALL_STATE(281)] = 7152,
  [SMALL_STATE(282)] = 7159,
  [SMALL_STATE(283)] = 7166,
  [SMALL_STATE(284)] = 7173,
  [SMALL_STATE(285)] = 7180,
  [SMALL_STATE(286)] = 7187,
  [SMALL_STATE(287)] = 7194,
  [SMALL_STATE(288)] = 7201,
  [SMALL_STATE(289)] = 7208,
  [SMALL_STATE(290)] = 7215,
  [SMALL_STATE(291)] = 7222,
  [SMALL_STATE(292)] = 7229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(118),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(239),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(283),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(151),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(144),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(262),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(260),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(273),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(286),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(292),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(285),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(108),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(150),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(101),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(240),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(270),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(153),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(144),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(133),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(262),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(260),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(273),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(286),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(292),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(161),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(124),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(272),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(119),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(269),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(85),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(86),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(62),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(291),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(269),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(103),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(86),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(62),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(120),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(291),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 12),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 13),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 13),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 10),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 9),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 11),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 9),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(111),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(104),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(242),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(245),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 14),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(164),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(91),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(30),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [956] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
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
