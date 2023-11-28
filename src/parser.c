#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 343
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 10
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 2
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
  anon_sym_COLON_COLON = 17,
  anon_sym_POUND = 18,
  anon_sym_LBRACK = 19,
  anon_sym_EQ = 20,
  anon_sym_TILDE_EQ = 21,
  anon_sym_CARET_EQ = 22,
  anon_sym_PIPE_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_DOLLAR_EQ = 25,
  anon_sym_RBRACK = 26,
  anon_sym_GT = 27,
  anon_sym_TILDE = 28,
  anon_sym_PLUS = 29,
  anon_sym_PIPE = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_COLON = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  sym_string_value = 42,
  aux_sym_integer_value_token1 = 43,
  aux_sym_float_value_token1 = 44,
  sym_unit = 45,
  anon_sym_DASH = 46,
  anon_sym_SLASH = 47,
  sym_identifier = 48,
  sym_at_keyword = 49,
  sym_comment = 50,
  sym_plain_value = 51,
  anon_sym_DOLLAR_LBRACE = 52,
  anon_sym_RBRACE_SEMI = 53,
  sym__js_statement = 54,
  sym__descendant_operator = 55,
  sym__pseudo_class_selector_colon = 56,
  sym_stylesheet = 57,
  sym_import_statement = 58,
  sym_media_statement = 59,
  sym_charset_statement = 60,
  sym_namespace_statement = 61,
  sym_keyframes_statement = 62,
  sym_keyframe_block_list = 63,
  sym_keyframe_block = 64,
  sym_supports_statement = 65,
  sym_at_rule = 66,
  sym_rule_set = 67,
  sym_selectors = 68,
  sym_block = 69,
  sym__selector = 70,
  sym_universal_selector = 71,
  sym_class_selector = 72,
  sym_pseudo_class_selector = 73,
  sym_pseudo_element_selector = 74,
  sym_id_selector = 75,
  sym_attribute_selector = 76,
  sym_child_selector = 77,
  sym_descendant_selector = 78,
  sym_sibling_selector = 79,
  sym_adjacent_sibling_selector = 80,
  sym_namespace_selector = 81,
  sym_pseudo_class_arguments = 82,
  sym_pseudo_element_arguments = 83,
  sym_declaration = 84,
  sym_last_declaration = 85,
  sym__query = 86,
  sym_feature_query = 87,
  sym_parenthesized_query = 88,
  sym_binary_query = 89,
  sym_unary_query = 90,
  sym_selector_query = 91,
  sym__value = 92,
  sym_parenthesized_value = 93,
  sym_color_value = 94,
  sym_integer_value = 95,
  sym_float_value = 96,
  sym_grid_value = 97,
  sym_call_expression = 98,
  sym_binary_expression = 99,
  sym_arguments = 100,
  sym_interpolation = 101,
  sym__inline_interpolation = 102,
  aux_sym__js_expressions = 103,
  sym__js_expression = 104,
  sym__js_block = 105,
  aux_sym_stylesheet_repeat1 = 106,
  aux_sym_import_statement_repeat1 = 107,
  aux_sym_keyframe_block_list_repeat1 = 108,
  aux_sym_selectors_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_pseudo_class_arguments_repeat1 = 111,
  aux_sym_pseudo_class_arguments_repeat2 = 112,
  aux_sym_declaration_repeat1 = 113,
  aux_sym_grid_value_repeat1 = 114,
  aux_sym_arguments_repeat1 = 115,
  aux_sym__js_block_repeat1 = 116,
  alias_sym_class_name = 117,
  alias_sym_feature_name = 118,
  alias_sym_function_name = 119,
  alias_sym_id_name = 120,
  alias_sym_js_expression = 121,
  alias_sym_keyframes_name = 122,
  alias_sym_keyword_query = 123,
  alias_sym_namespace_name = 124,
  alias_sym_property_name = 125,
  alias_sym_tag_name = 126,
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
  [sym__pseudo_class_selector_colon] = ":",
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
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
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
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
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
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
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
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
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
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
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
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
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
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
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
    [1] = alias_sym_class_name,
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
    [2] = alias_sym_class_name,
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
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
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
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
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
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 54,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 77,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 79,
  [89] = 84,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 98,
  [99] = 81,
  [100] = 82,
  [101] = 101,
  [102] = 83,
  [103] = 78,
  [104] = 104,
  [105] = 92,
  [106] = 106,
  [107] = 101,
  [108] = 104,
  [109] = 86,
  [110] = 110,
  [111] = 87,
  [112] = 106,
  [113] = 110,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 90,
  [120] = 118,
  [121] = 121,
  [122] = 121,
  [123] = 93,
  [124] = 117,
  [125] = 96,
  [126] = 98,
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
  [139] = 137,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 135,
  [144] = 144,
  [145] = 135,
  [146] = 146,
  [147] = 138,
  [148] = 148,
  [149] = 129,
  [150] = 133,
  [151] = 137,
  [152] = 152,
  [153] = 133,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 140,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 30,
  [169] = 169,
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 171,
  [177] = 177,
  [178] = 53,
  [179] = 179,
  [180] = 156,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 94,
  [185] = 185,
  [186] = 186,
  [187] = 95,
  [188] = 188,
  [189] = 185,
  [190] = 190,
  [191] = 190,
  [192] = 53,
  [193] = 144,
  [194] = 152,
  [195] = 128,
  [196] = 157,
  [197] = 155,
  [198] = 198,
  [199] = 136,
  [200] = 131,
  [201] = 130,
  [202] = 134,
  [203] = 141,
  [204] = 146,
  [205] = 95,
  [206] = 94,
  [207] = 130,
  [208] = 136,
  [209] = 144,
  [210] = 146,
  [211] = 141,
  [212] = 134,
  [213] = 152,
  [214] = 157,
  [215] = 156,
  [216] = 128,
  [217] = 155,
  [218] = 131,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 225,
  [226] = 224,
  [227] = 225,
  [228] = 228,
  [229] = 220,
  [230] = 225,
  [231] = 221,
  [232] = 232,
  [233] = 219,
  [234] = 234,
  [235] = 232,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 232,
  [243] = 238,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 250,
  [254] = 251,
  [255] = 245,
  [256] = 249,
  [257] = 257,
  [258] = 245,
  [259] = 259,
  [260] = 260,
  [261] = 257,
  [262] = 251,
  [263] = 248,
  [264] = 77,
  [265] = 265,
  [266] = 115,
  [267] = 267,
  [268] = 268,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 87,
  [273] = 273,
  [274] = 273,
  [275] = 275,
  [276] = 265,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 267,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 282,
  [285] = 277,
  [286] = 268,
  [287] = 287,
  [288] = 283,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 289,
  [297] = 295,
  [298] = 298,
  [299] = 299,
  [300] = 275,
  [301] = 293,
  [302] = 282,
  [303] = 303,
  [304] = 303,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 95,
  [310] = 307,
  [311] = 311,
  [312] = 312,
  [313] = 311,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 316,
  [323] = 323,
  [324] = 324,
  [325] = 323,
  [326] = 317,
  [327] = 318,
  [328] = 328,
  [329] = 324,
  [330] = 319,
  [331] = 316,
  [332] = 315,
  [333] = 321,
  [334] = 318,
  [335] = 335,
  [336] = 336,
  [337] = 324,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
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
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '{') ADVANCE(265);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(120);
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
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(91);
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
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(265);
      END_STATE();
    case 64:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 71:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(26);
      END_STATE();
    case 72:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(114);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(113);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == ';') ADVANCE(266);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
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
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '_') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(196);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(26);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(239);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(72);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE_SEMI);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__js_statement);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76, .external_lex_state = 2},
  [2] = {.lex_state = 76, .external_lex_state = 2},
  [3] = {.lex_state = 76, .external_lex_state = 2},
  [4] = {.lex_state = 76, .external_lex_state = 2},
  [5] = {.lex_state = 76, .external_lex_state = 2},
  [6] = {.lex_state = 76, .external_lex_state = 2},
  [7] = {.lex_state = 76, .external_lex_state = 2},
  [8] = {.lex_state = 76, .external_lex_state = 2},
  [9] = {.lex_state = 76, .external_lex_state = 2},
  [10] = {.lex_state = 76, .external_lex_state = 2},
  [11] = {.lex_state = 2, .external_lex_state = 2},
  [12] = {.lex_state = 2, .external_lex_state = 2},
  [13] = {.lex_state = 2, .external_lex_state = 2},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3, .external_lex_state = 1},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 7, .external_lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 7, .external_lex_state = 1},
  [30] = {.lex_state = 2, .external_lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 7, .external_lex_state = 1},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 7, .external_lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 76, .external_lex_state = 2},
  [39] = {.lex_state = 76, .external_lex_state = 2},
  [40] = {.lex_state = 76, .external_lex_state = 2},
  [41] = {.lex_state = 76, .external_lex_state = 2},
  [42] = {.lex_state = 76, .external_lex_state = 2},
  [43] = {.lex_state = 76, .external_lex_state = 2},
  [44] = {.lex_state = 76, .external_lex_state = 2},
  [45] = {.lex_state = 76, .external_lex_state = 2},
  [46] = {.lex_state = 76, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 1},
  [48] = {.lex_state = 7, .external_lex_state = 1},
  [49] = {.lex_state = 7, .external_lex_state = 1},
  [50] = {.lex_state = 7, .external_lex_state = 1},
  [51] = {.lex_state = 7, .external_lex_state = 1},
  [52] = {.lex_state = 7, .external_lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 1},
  [56] = {.lex_state = 7, .external_lex_state = 1},
  [57] = {.lex_state = 7, .external_lex_state = 1},
  [58] = {.lex_state = 7, .external_lex_state = 1},
  [59] = {.lex_state = 7, .external_lex_state = 1},
  [60] = {.lex_state = 7, .external_lex_state = 1},
  [61] = {.lex_state = 7, .external_lex_state = 1},
  [62] = {.lex_state = 7, .external_lex_state = 1},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 7, .external_lex_state = 1},
  [65] = {.lex_state = 7, .external_lex_state = 1},
  [66] = {.lex_state = 7, .external_lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 7, .external_lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 7, .external_lex_state = 1},
  [71] = {.lex_state = 7, .external_lex_state = 1},
  [72] = {.lex_state = 7, .external_lex_state = 1},
  [73] = {.lex_state = 7, .external_lex_state = 1},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 7, .external_lex_state = 1},
  [76] = {.lex_state = 7, .external_lex_state = 1},
  [77] = {.lex_state = 76, .external_lex_state = 2},
  [78] = {.lex_state = 76, .external_lex_state = 2},
  [79] = {.lex_state = 76, .external_lex_state = 2},
  [80] = {.lex_state = 76, .external_lex_state = 2},
  [81] = {.lex_state = 76, .external_lex_state = 2},
  [82] = {.lex_state = 76, .external_lex_state = 2},
  [83] = {.lex_state = 76, .external_lex_state = 2},
  [84] = {.lex_state = 76, .external_lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 76, .external_lex_state = 2},
  [87] = {.lex_state = 76, .external_lex_state = 2},
  [88] = {.lex_state = 76, .external_lex_state = 2},
  [89] = {.lex_state = 76, .external_lex_state = 2},
  [90] = {.lex_state = 76, .external_lex_state = 2},
  [91] = {.lex_state = 76, .external_lex_state = 2},
  [92] = {.lex_state = 76, .external_lex_state = 2},
  [93] = {.lex_state = 76, .external_lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 76, .external_lex_state = 2},
  [97] = {.lex_state = 76, .external_lex_state = 2},
  [98] = {.lex_state = 76, .external_lex_state = 2},
  [99] = {.lex_state = 76, .external_lex_state = 2},
  [100] = {.lex_state = 76, .external_lex_state = 2},
  [101] = {.lex_state = 76, .external_lex_state = 2},
  [102] = {.lex_state = 76, .external_lex_state = 2},
  [103] = {.lex_state = 76, .external_lex_state = 2},
  [104] = {.lex_state = 76, .external_lex_state = 2},
  [105] = {.lex_state = 76, .external_lex_state = 2},
  [106] = {.lex_state = 76, .external_lex_state = 2},
  [107] = {.lex_state = 76, .external_lex_state = 2},
  [108] = {.lex_state = 76, .external_lex_state = 2},
  [109] = {.lex_state = 76, .external_lex_state = 2},
  [110] = {.lex_state = 76, .external_lex_state = 2},
  [111] = {.lex_state = 76, .external_lex_state = 2},
  [112] = {.lex_state = 76, .external_lex_state = 2},
  [113] = {.lex_state = 76, .external_lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 76, .external_lex_state = 2},
  [116] = {.lex_state = 76, .external_lex_state = 2},
  [117] = {.lex_state = 76, .external_lex_state = 2},
  [118] = {.lex_state = 76, .external_lex_state = 2},
  [119] = {.lex_state = 76, .external_lex_state = 2},
  [120] = {.lex_state = 76, .external_lex_state = 2},
  [121] = {.lex_state = 76, .external_lex_state = 2},
  [122] = {.lex_state = 76, .external_lex_state = 2},
  [123] = {.lex_state = 76, .external_lex_state = 2},
  [124] = {.lex_state = 76, .external_lex_state = 2},
  [125] = {.lex_state = 76, .external_lex_state = 2},
  [126] = {.lex_state = 76, .external_lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 7, .external_lex_state = 1},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 7, .external_lex_state = 1},
  [162] = {.lex_state = 7, .external_lex_state = 1},
  [163] = {.lex_state = 7, .external_lex_state = 1},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 9, .external_lex_state = 1},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 76, .external_lex_state = 1},
  [172] = {.lex_state = 76, .external_lex_state = 1},
  [173] = {.lex_state = 76, .external_lex_state = 1},
  [174] = {.lex_state = 76, .external_lex_state = 1},
  [175] = {.lex_state = 76, .external_lex_state = 1},
  [176] = {.lex_state = 76, .external_lex_state = 1},
  [177] = {.lex_state = 76, .external_lex_state = 1},
  [178] = {.lex_state = 13},
  [179] = {.lex_state = 76, .external_lex_state = 1},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 76, .external_lex_state = 1},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 14},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 76, .external_lex_state = 1},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 27},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 27},
  [222] = {.lex_state = 64},
  [223] = {.lex_state = 64},
  [224] = {.lex_state = 64},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 64},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 64},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 9},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 28},
  [233] = {.lex_state = 28},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 28},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 9},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 28},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 27},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 27},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 27},
  [257] = {.lex_state = 76},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 76},
  [262] = {.lex_state = 27},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 64},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 64},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 64},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 64},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 28},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 28},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 28},
  [289] = {.lex_state = 28},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 28},
  [295] = {.lex_state = 76},
  [296] = {.lex_state = 28},
  [297] = {.lex_state = 76},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 28},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 76},
  [306] = {.lex_state = 76},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 7},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 76},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 25},
  [319] = {.lex_state = 76},
  [320] = {.lex_state = 76},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 76},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 76},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 25},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 76},
  [330] = {.lex_state = 76},
  [331] = {.lex_state = 76},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 25},
  [335] = {.lex_state = 76},
  [336] = {.lex_state = 76},
  [337] = {.lex_state = 76},
  [338] = {.lex_state = 76},
  [339] = {.lex_state = 76},
  [340] = {.lex_state = 76},
  [341] = {.lex_state = 76},
  [342] = {.lex_state = 76},
};

enum {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [2] = {
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
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(328),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(307),
    [sym__selector] = STATE(173),
    [sym_universal_selector] = STATE(173),
    [sym_class_selector] = STATE(173),
    [sym_pseudo_class_selector] = STATE(173),
    [sym_pseudo_element_selector] = STATE(173),
    [sym_id_selector] = STATE(173),
    [sym_attribute_selector] = STATE(173),
    [sym_child_selector] = STATE(173),
    [sym_descendant_selector] = STATE(173),
    [sym_sibling_selector] = STATE(173),
    [sym_adjacent_sibling_selector] = STATE(173),
    [sym_namespace_selector] = STATE(173),
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
    [anon_sym_COLON_COLON] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(31),
    [sym_at_keyword] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(35),
    [sym__pseudo_class_selector_colon] = ACTIONS(37),
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
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(329), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [90] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(331), 1,
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
    STATE(173), 12,
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
  [180] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(324), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [270] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(316), 1,
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
    STATE(173), 12,
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
  [360] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(322), 1,
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
    STATE(173), 12,
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
  [450] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
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
    STATE(310), 1,
      sym_selectors,
    STATE(337), 1,
      sym_last_declaration,
    ACTIONS(19), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(47), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [540] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(86), 1,
      anon_sym_ATsupports,
    ACTIONS(92), 1,
      anon_sym_STAR,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(98), 1,
      anon_sym_COLON_COLON,
    ACTIONS(101), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(110), 1,
      sym_at_keyword,
    ACTIONS(113), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(116), 1,
      sym__pseudo_class_selector_colon,
    STATE(307), 1,
      sym_selectors,
    ACTIONS(83), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(173), 12,
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
  [627] = 21,
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
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_at_keyword,
    ACTIONS(35), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(307), 1,
      sym_selectors,
    ACTIONS(15), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(19), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(173), 12,
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
  [714] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_ATimport,
    ACTIONS(124), 1,
      anon_sym_ATmedia,
    ACTIONS(127), 1,
      anon_sym_ATcharset,
    ACTIONS(130), 1,
      anon_sym_ATnamespace,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      anon_sym_ATsupports,
    ACTIONS(144), 1,
      anon_sym_STAR,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(150), 1,
      anon_sym_COLON_COLON,
    ACTIONS(153), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_at_keyword,
    ACTIONS(165), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(168), 1,
      sym__pseudo_class_selector_colon,
    STATE(310), 1,
      sym_selectors,
    ACTIONS(133), 2,
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
      aux_sym_block_repeat1,
    STATE(173), 12,
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
  [801] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(171), 1,
      sym_nesting_selector,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      sym_string_value,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(35), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(172), 12,
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
  [878] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      sym_string_value,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(195), 1,
      sym_nesting_selector,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(174), 12,
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
  [955] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      sym_string_value,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      sym_nesting_selector,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(177), 12,
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
  [1029] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      sym_nesting_selector,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(162), 1,
      sym_namespace_selector,
    STATE(230), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(198), 11,
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
  [1102] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      sym_nesting_selector,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(209), 1,
      sym_string_value,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(221), 1,
      sym_plain_value,
    STATE(162), 1,
      sym_namespace_selector,
    STATE(227), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
    STATE(198), 11,
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
  [1175] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      sym_important,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    STATE(23), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1240] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(245), 1,
      sym_important,
    STATE(28), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1302] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      sym_important,
    STATE(26), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(255), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(253), 3,
      anon_sym_STAR,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(259), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(251), 10,
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
  [1404] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_LPAREN2,
    ACTIONS(275), 1,
      sym_string_value,
    ACTIONS(278), 1,
      aux_sym_integer_value_token1,
    ACTIONS(281), 1,
      aux_sym_float_value_token1,
    ACTIONS(284), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_plain_value,
    ACTIONS(290), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(20), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(264), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1457] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(269), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1512] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(265), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1567] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      sym_important,
    STATE(20), 1,
      aux_sym_declaration_repeat1,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1624] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(276), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1679] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(309), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(251), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [1722] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      sym_important,
    STATE(20), 1,
      aux_sym_declaration_repeat1,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_pseudo_class_arguments,
    ACTIONS(321), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(319), 18,
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
  [1810] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym_string_value,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_plain_value,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      sym_important,
    STATE(20), 1,
      aux_sym_declaration_repeat1,
    STATE(160), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_pseudo_class_arguments,
    ACTIONS(329), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(327), 18,
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
  [1898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(333), 4,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(337), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(331), 10,
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
  [1932] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      anon_sym_LPAREN2,
    ACTIONS(350), 1,
      sym_string_value,
    ACTIONS(353), 1,
      aux_sym_integer_value_token1,
    ACTIONS(356), 1,
      aux_sym_float_value_token1,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(362), 1,
      sym_plain_value,
    ACTIONS(365), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [1982] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(368), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2032] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2086] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_pseudo_element_arguments,
    ACTIONS(376), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(374), 18,
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
  [2120] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(291), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2174] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_pseudo_element_arguments,
    ACTIONS(384), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(382), 18,
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
  [2208] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2257] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(388), 1,
      sym_identifier,
    STATE(162), 1,
      sym_namespace_selector,
    ACTIONS(201), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(198), 11,
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
  [2302] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(390), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(65), 12,
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
  [2345] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(394), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(59), 12,
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
  [2388] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(396), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(58), 12,
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
  [2431] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(398), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(57), 12,
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
  [2474] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(400), 1,
      sym_identifier,
    STATE(161), 1,
      sym_namespace_selector,
    ACTIONS(201), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(198), 11,
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
  [2519] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(402), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(179), 12,
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
  [2562] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(404), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(71), 12,
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
  [2605] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(25), 1,
      anon_sym_COLON_COLON,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(406), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(183), 12,
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
  [2648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(408), 18,
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
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(412), 18,
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
  [2704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(416), 18,
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
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(420), 18,
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
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(424), 18,
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
  [2788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(428), 18,
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
  [2816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_arguments,
    ACTIONS(259), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(253), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [2848] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [2896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(434), 18,
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
  [2924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(438), 18,
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
  [2952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(442), 17,
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
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(450), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(448), 17,
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
  [3012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(454), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(452), 17,
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
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(456), 18,
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
  [3070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(460), 18,
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
  [3098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(464), 18,
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
  [3126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(468), 18,
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
  [3154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(472), 18,
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
  [3182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(478), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(476), 17,
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
  [3212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(480), 18,
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
  [3240] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(486), 18,
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
  [3316] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(251), 18,
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
  [3392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(494), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(492), 17,
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
  [3422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(496), 18,
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
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(500), 18,
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
  [3478] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(506), 18,
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
  [3554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(510), 18,
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
  [3582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(516), 11,
      sym__pseudo_class_selector_colon,
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
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(520), 11,
      sym__pseudo_class_selector_colon,
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
  [3636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(522), 11,
      sym__pseudo_class_selector_colon,
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
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(516), 11,
      sym__pseudo_class_selector_colon,
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
  [3690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(526), 11,
      sym__pseudo_class_selector_colon,
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
  [3717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(530), 11,
      sym__pseudo_class_selector_colon,
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
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(534), 11,
      sym__pseudo_class_selector_colon,
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
  [3771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(538), 11,
      sym__pseudo_class_selector_colon,
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
  [3798] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    STATE(32), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(542), 11,
      sym__pseudo_class_selector_colon,
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
  [3870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(546), 11,
      sym__pseudo_class_selector_colon,
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
  [3897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(522), 11,
      sym__pseudo_class_selector_colon,
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
  [3924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(538), 11,
      sym__pseudo_class_selector_colon,
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
  [3951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(550), 11,
      sym__pseudo_class_selector_colon,
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
  [3978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(556), 11,
      sym__pseudo_class_selector_colon,
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
  [4005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(560), 11,
      sym__pseudo_class_selector_colon,
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
  [4032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(562), 11,
      sym__pseudo_class_selector_colon,
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
  [4059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_unit,
    ACTIONS(568), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(566), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_unit,
    ACTIONS(574), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(572), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [4117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(580), 11,
      sym__pseudo_class_selector_colon,
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
  [4144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(556), 11,
      sym__pseudo_class_selector_colon,
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
  [4171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(582), 11,
      sym__pseudo_class_selector_colon,
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
  [4198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(526), 11,
      sym__pseudo_class_selector_colon,
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
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(530), 11,
      sym__pseudo_class_selector_colon,
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
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(588), 11,
      sym__pseudo_class_selector_colon,
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
  [4279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(534), 11,
      sym__pseudo_class_selector_colon,
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
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(520), 11,
      sym__pseudo_class_selector_colon,
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
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(592), 11,
      sym__pseudo_class_selector_colon,
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
  [4360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(560), 11,
      sym__pseudo_class_selector_colon,
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
  [4387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 11,
      sym__pseudo_class_selector_colon,
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
  [4414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(588), 11,
      sym__pseudo_class_selector_colon,
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
  [4441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(592), 11,
      sym__pseudo_class_selector_colon,
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
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(542), 11,
      sym__pseudo_class_selector_colon,
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
  [4495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(600), 11,
      sym__pseudo_class_selector_colon,
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
  [4522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(546), 11,
      sym__pseudo_class_selector_colon,
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
  [4549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(596), 11,
      sym__pseudo_class_selector_colon,
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
  [4576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(600), 11,
      sym__pseudo_class_selector_colon,
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
  [4603] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_string_value,
    STATE(69), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(167), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [4648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(602), 11,
      sym__pseudo_class_selector_colon,
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
  [4675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(602), 11,
      sym__pseudo_class_selector_colon,
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
  [4702] = 3,
    ACTIONS(3), 1,
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
    ACTIONS(606), 11,
      sym__pseudo_class_selector_colon,
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
  [4729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 11,
      sym__pseudo_class_selector_colon,
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
  [4756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(550), 11,
      sym__pseudo_class_selector_colon,
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
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(610), 11,
      sym__pseudo_class_selector_colon,
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
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 11,
      sym__pseudo_class_selector_colon,
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
  [4837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(616), 11,
      sym__pseudo_class_selector_colon,
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
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(562), 11,
      sym__pseudo_class_selector_colon,
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
  [4891] = 3,
    ACTIONS(3), 1,
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
    ACTIONS(606), 11,
      sym__pseudo_class_selector_colon,
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
  [4918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(580), 11,
      sym__pseudo_class_selector_colon,
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
  [4945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(582), 11,
      sym__pseudo_class_selector_colon,
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
  [4972] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(618), 1,
      sym_string_value,
    ACTIONS(620), 1,
      sym_plain_value,
    STATE(164), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(622), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5040] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(626), 1,
      sym_string_value,
    ACTIONS(628), 1,
      sym_plain_value,
    STATE(18), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(630), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(634), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5134] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      sym_string_value,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(646), 1,
      sym_plain_value,
    STATE(240), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      anon_sym_LPAREN2,
    ACTIONS(654), 1,
      sym_string_value,
    ACTIONS(656), 1,
      aux_sym_integer_value_token1,
    ACTIONS(658), 1,
      aux_sym_float_value_token1,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(662), 1,
      sym_plain_value,
    ACTIONS(664), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(199), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(666), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(670), 1,
      sym_string_value,
    ACTIONS(672), 1,
      sym_plain_value,
    STATE(225), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(674), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5312] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(678), 1,
      sym_string_value,
    ACTIONS(680), 1,
      sym_plain_value,
    STATE(255), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5354] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      anon_sym_LPAREN2,
    ACTIONS(656), 1,
      aux_sym_integer_value_token1,
    ACTIONS(658), 1,
      aux_sym_float_value_token1,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(664), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(682), 1,
      sym_string_value,
    ACTIONS(684), 1,
      sym_plain_value,
    STATE(166), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5396] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(686), 1,
      sym_string_value,
    ACTIONS(688), 1,
      sym_plain_value,
    STATE(258), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5438] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(690), 1,
      sym_string_value,
    ACTIONS(692), 1,
      sym_plain_value,
    STATE(247), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(694), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5506] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(698), 1,
      sym_string_value,
    ACTIONS(700), 1,
      sym_plain_value,
    STATE(260), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5548] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(221), 1,
      sym_plain_value,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(702), 1,
      sym_string_value,
    STATE(227), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(704), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(217), 1,
      sym_plain_value,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(708), 1,
      sym_string_value,
    STATE(230), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(710), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5684] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      anon_sym_LPAREN2,
    ACTIONS(656), 1,
      aux_sym_integer_value_token1,
    ACTIONS(658), 1,
      aux_sym_float_value_token1,
    ACTIONS(660), 1,
      sym_identifier,
    ACTIONS(664), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(714), 1,
      sym_string_value,
    ACTIONS(716), 1,
      sym_plain_value,
    STATE(165), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5726] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(718), 1,
      sym_string_value,
    ACTIONS(720), 1,
      sym_plain_value,
    STATE(16), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5768] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(722), 1,
      sym_string_value,
    ACTIONS(724), 1,
      sym_plain_value,
    STATE(17), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5810] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN2,
    ACTIONS(185), 1,
      aux_sym_integer_value_token1,
    ACTIONS(187), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(726), 1,
      sym_string_value,
    ACTIONS(728), 1,
      sym_plain_value,
    STATE(136), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5852] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(730), 1,
      sym_string_value,
    ACTIONS(732), 1,
      sym_plain_value,
    STATE(245), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(734), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [5920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(738), 1,
      sym_string_value,
    ACTIONS(740), 1,
      sym_plain_value,
    STATE(208), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [5962] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(742), 1,
      sym_string_value,
    ACTIONS(744), 1,
      sym_plain_value,
    STATE(252), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(746), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(750), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(754), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6082] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 1,
      aux_sym_integer_value_token1,
    ACTIONS(213), 1,
      aux_sym_float_value_token1,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(638), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(758), 1,
      sym_string_value,
    ACTIONS(760), 1,
      sym_plain_value,
    STATE(246), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
      sym__inline_interpolation,
  [6124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(309), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(251), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [6153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(764), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(762), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(766), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(331), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [6211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(335), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(309), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(331), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [6240] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(766), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(251), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [6269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(770), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(264), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SEMI,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(774), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(782), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(253), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(786), 1,
      anon_sym_SEMI,
    ACTIONS(774), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(782), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(250), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(235), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(790), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(788), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
      anon_sym_DOLLAR_LBRACE,
  [6398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SLASH,
    ACTIONS(333), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_DASH,
    ACTIONS(331), 10,
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
  [6423] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_block,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(229), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6457] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(220), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(251), 12,
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
  [6512] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    STATE(291), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6555] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_LBRACE,
    STATE(299), 1,
      aux_sym_selectors_repeat1,
  [6598] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    STATE(281), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COLON,
    ACTIONS(251), 12,
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
  [6662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_COLON,
    ACTIONS(251), 12,
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
  [6683] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(259), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6745] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [6783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(752), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(259), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(241), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6852] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_unit,
    ACTIONS(566), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(568), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(280), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(237), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [6960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_unit,
    ACTIONS(572), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(574), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [6981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(838), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(298), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7006] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(267), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(238), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7056] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_LPAREN2,
    ACTIONS(780), 1,
      anon_sym_selector,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(778), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(243), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [7081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SLASH,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_arguments,
    ACTIONS(253), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(706), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(736), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(624), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(756), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(748), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7193] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(802), 1,
      anon_sym_COLON_COLON,
    ACTIONS(804), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      anon_sym_LBRACK,
    ACTIONS(808), 1,
      anon_sym_GT,
    ACTIONS(810), 1,
      anon_sym_TILDE,
    ACTIONS(812), 1,
      anon_sym_PLUS,
    ACTIONS(814), 1,
      anon_sym_PIPE,
    ACTIONS(816), 1,
      sym__descendant_operator,
    ACTIONS(818), 1,
      sym__pseudo_class_selector_colon,
  [7227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(676), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(636), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(632), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(668), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(696), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(712), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [7335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_SLASH,
    ACTIONS(840), 1,
      sym_unit,
    ACTIONS(572), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SLASH,
    ACTIONS(842), 1,
      sym_unit,
    ACTIONS(566), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SLASH,
    ACTIONS(630), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_SLASH,
    ACTIONS(674), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SLASH,
    ACTIONS(704), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_SLASH,
    ACTIONS(710), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SLASH,
    ACTIONS(694), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_SLASH,
    ACTIONS(666), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_SLASH,
    ACTIONS(734), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_SLASH,
    ACTIONS(754), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SLASH,
    ACTIONS(750), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_SLASH,
    ACTIONS(622), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_SLASH,
    ACTIONS(746), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_SLASH,
    ACTIONS(634), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [7565] = 6,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym__js_statement,
    STATE(219), 1,
      aux_sym__js_expressions,
    ACTIONS(847), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(268), 2,
      sym__js_expression,
      sym__js_block,
  [7586] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(856), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_block,
    STATE(263), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [7609] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym__js_statement,
    STATE(219), 1,
      aux_sym__js_expressions,
    ACTIONS(862), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(268), 2,
      sym__js_expression,
      sym__js_block,
  [7630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_RBRACE,
    ACTIONS(870), 1,
      aux_sym_integer_value_token1,
    STATE(312), 1,
      sym_integer_value,
    ACTIONS(868), 2,
      sym_from,
      sym_to,
    STATE(224), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7651] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_integer_value_token1,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_integer_value,
    ACTIONS(868), 2,
      sym_from,
      sym_to,
    STATE(226), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_integer_value_token1,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_integer_value,
    ACTIONS(868), 2,
      sym_from,
      sym_to,
    STATE(228), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7693] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      anon_sym_RBRACK,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    STATE(282), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_integer_value_token1,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_integer_value,
    ACTIONS(868), 2,
      sym_from,
      sym_to,
    STATE(228), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7735] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(284), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7756] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(893), 1,
      aux_sym_integer_value_token1,
    STATE(312), 1,
      sym_integer_value,
    ACTIONS(890), 2,
      sym_from,
      sym_to,
    STATE(228), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [7777] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      sym_block,
    STATE(248), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [7800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
    STATE(302), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7821] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym__js_statement,
    STATE(219), 1,
      aux_sym__js_expressions,
    ACTIONS(900), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
    STATE(268), 2,
      sym__js_expression,
      sym__js_block,
  [7842] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    STATE(233), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [7862] = 6,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      sym__js_statement,
    STATE(233), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [7882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7894] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [7914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7938] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      sym_block,
    STATE(273), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [7958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(924), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [7986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [7998] = 6,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [8018] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      sym_block,
    STATE(274), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(934), 1,
      anon_sym_SEMI,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8080] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(936), 1,
      anon_sym_SEMI,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8095] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_block,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8114] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym__js_statement,
    STATE(231), 1,
      aux_sym__js_expressions,
    STATE(268), 2,
      sym__js_expression,
      sym__js_block,
  [8131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_SEMI,
    STATE(301), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8148] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    STATE(232), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [8165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(942), 1,
      anon_sym_RBRACK,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_SEMI,
    STATE(293), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8197] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    STATE(235), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [8214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8229] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    ACTIONS(864), 1,
      sym__js_statement,
    STATE(221), 1,
      aux_sym__js_expressions,
    STATE(268), 2,
      sym__js_expression,
      sym__js_block,
  [8246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      sym_string_value,
    ACTIONS(950), 1,
      sym_identifier,
    STATE(197), 1,
      sym_arguments,
    STATE(333), 1,
      sym_call_expression,
  [8265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(954), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [8293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SLASH,
    ACTIONS(956), 1,
      anon_sym_RBRACK,
    ACTIONS(878), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [8308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      sym_identifier,
    ACTIONS(958), 1,
      sym_string_value,
    STATE(197), 1,
      sym_arguments,
    STATE(321), 1,
      sym_call_expression,
  [8327] = 5,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    ACTIONS(906), 1,
      sym__js_statement,
    STATE(242), 1,
      aux_sym__js_expressions,
    STATE(286), 2,
      sym__js_expression,
      sym__js_block,
  [8344] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_block,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_block,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8411] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(964), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [8421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(954), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [8449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      anon_sym_COLON,
    ACTIONS(918), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [8461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      sym_block,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      sym_block,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8503] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(973), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8527] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(977), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACE_SEMI,
      sym__js_statement,
  [8537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(979), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [8561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_grid_value_repeat1,
  [8601] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    ACTIONS(990), 1,
      sym__js_statement,
    STATE(294), 1,
      aux_sym__js_block_repeat1,
  [8614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_grid_value_repeat1,
  [8627] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(977), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [8636] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(964), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [8645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_selectors_repeat1,
  [8658] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym__js_statement,
    ACTIONS(997), 1,
      anon_sym_RBRACE,
    STATE(294), 1,
      aux_sym__js_block_repeat1,
  [8671] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_RBRACE,
    ACTIONS(1001), 1,
      sym__js_statement,
    STATE(283), 1,
      aux_sym__js_block_repeat1,
  [8684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RBRACK,
    ACTIONS(1003), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_grid_value_repeat1,
  [8697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [8723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8736] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(1015), 1,
      sym__js_statement,
    STATE(294), 1,
      aux_sym__js_block_repeat1,
  [8749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      sym_string_value,
    ACTIONS(1020), 1,
      sym_identifier,
    STATE(325), 1,
      sym_call_expression,
  [8762] = 4,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(1022), 1,
      anon_sym_RBRACE,
    ACTIONS(1024), 1,
      sym__js_statement,
    STATE(288), 1,
      aux_sym__js_block_repeat1,
  [8775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1026), 1,
      sym_string_value,
    ACTIONS(1028), 1,
      sym_identifier,
    STATE(323), 1,
      sym_call_expression,
  [8788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1030), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 2,
      anon_sym_and,
      anon_sym_or,
  [8799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_COMMA,
    ACTIONS(1032), 1,
      anon_sym_LBRACE,
    STATE(287), 1,
      aux_sym_selectors_repeat1,
  [8812] = 2,
    ACTIONS(849), 1,
      sym_comment,
    ACTIONS(973), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym__js_statement,
  [8821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    ACTIONS(1034), 1,
      anon_sym_SEMI,
    STATE(270), 1,
      aux_sym_import_statement_repeat1,
  [8834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    ACTIONS(1036), 1,
      anon_sym_RBRACK,
    STATE(290), 1,
      aux_sym_grid_value_repeat1,
  [8847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_keyframe_block_list,
  [8857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_keyframe_block_list,
  [8867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [8877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
  [8887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_block,
  [8897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
  [8907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    ACTIONS(1046), 1,
      sym_unit,
  [8917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
  [8927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 1,
      aux_sym_color_value_token1,
    ACTIONS(1050), 1,
      sym_identifier,
  [8937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym_block,
  [8947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1050), 1,
      sym_identifier,
    ACTIONS(1054), 1,
      aux_sym_color_value_token1,
  [8957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1056), 1,
      anon_sym_LPAREN2,
  [8964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [8971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
  [8978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
  [8985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      aux_sym_color_value_token1,
  [8992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym_identifier,
  [8999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym_identifier,
  [9006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1064), 1,
      anon_sym_SEMI,
  [9013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [9020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
  [9027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_RBRACE,
  [9034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_SEMI,
  [9041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      anon_sym_SEMI,
  [9048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym_color_value_token1,
  [9055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 1,
      ts_builtin_sym_end,
  [9062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
  [9069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym_identifier,
  [9076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [9083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [9090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      anon_sym_SEMI,
  [9097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      aux_sym_color_value_token1,
  [9104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_identifier,
  [9111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym_identifier,
  [9118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
  [9125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_identifier,
  [9132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      sym_identifier,
  [9139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym_identifier,
  [9146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      sym_identifier,
  [9153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 627,
  [SMALL_STATE(10)] = 714,
  [SMALL_STATE(11)] = 801,
  [SMALL_STATE(12)] = 878,
  [SMALL_STATE(13)] = 955,
  [SMALL_STATE(14)] = 1029,
  [SMALL_STATE(15)] = 1102,
  [SMALL_STATE(16)] = 1175,
  [SMALL_STATE(17)] = 1240,
  [SMALL_STATE(18)] = 1302,
  [SMALL_STATE(19)] = 1364,
  [SMALL_STATE(20)] = 1404,
  [SMALL_STATE(21)] = 1457,
  [SMALL_STATE(22)] = 1512,
  [SMALL_STATE(23)] = 1567,
  [SMALL_STATE(24)] = 1624,
  [SMALL_STATE(25)] = 1679,
  [SMALL_STATE(26)] = 1722,
  [SMALL_STATE(27)] = 1776,
  [SMALL_STATE(28)] = 1810,
  [SMALL_STATE(29)] = 1864,
  [SMALL_STATE(30)] = 1898,
  [SMALL_STATE(31)] = 1932,
  [SMALL_STATE(32)] = 1982,
  [SMALL_STATE(33)] = 2032,
  [SMALL_STATE(34)] = 2086,
  [SMALL_STATE(35)] = 2120,
  [SMALL_STATE(36)] = 2174,
  [SMALL_STATE(37)] = 2208,
  [SMALL_STATE(38)] = 2257,
  [SMALL_STATE(39)] = 2302,
  [SMALL_STATE(40)] = 2345,
  [SMALL_STATE(41)] = 2388,
  [SMALL_STATE(42)] = 2431,
  [SMALL_STATE(43)] = 2474,
  [SMALL_STATE(44)] = 2519,
  [SMALL_STATE(45)] = 2562,
  [SMALL_STATE(46)] = 2605,
  [SMALL_STATE(47)] = 2648,
  [SMALL_STATE(48)] = 2676,
  [SMALL_STATE(49)] = 2704,
  [SMALL_STATE(50)] = 2732,
  [SMALL_STATE(51)] = 2760,
  [SMALL_STATE(52)] = 2788,
  [SMALL_STATE(53)] = 2816,
  [SMALL_STATE(54)] = 2848,
  [SMALL_STATE(55)] = 2896,
  [SMALL_STATE(56)] = 2924,
  [SMALL_STATE(57)] = 2952,
  [SMALL_STATE(58)] = 2982,
  [SMALL_STATE(59)] = 3012,
  [SMALL_STATE(60)] = 3042,
  [SMALL_STATE(61)] = 3070,
  [SMALL_STATE(62)] = 3098,
  [SMALL_STATE(63)] = 3126,
  [SMALL_STATE(64)] = 3154,
  [SMALL_STATE(65)] = 3182,
  [SMALL_STATE(66)] = 3212,
  [SMALL_STATE(67)] = 3240,
  [SMALL_STATE(68)] = 3288,
  [SMALL_STATE(69)] = 3316,
  [SMALL_STATE(70)] = 3364,
  [SMALL_STATE(71)] = 3392,
  [SMALL_STATE(72)] = 3422,
  [SMALL_STATE(73)] = 3450,
  [SMALL_STATE(74)] = 3478,
  [SMALL_STATE(75)] = 3526,
  [SMALL_STATE(76)] = 3554,
  [SMALL_STATE(77)] = 3582,
  [SMALL_STATE(78)] = 3609,
  [SMALL_STATE(79)] = 3636,
  [SMALL_STATE(80)] = 3663,
  [SMALL_STATE(81)] = 3690,
  [SMALL_STATE(82)] = 3717,
  [SMALL_STATE(83)] = 3744,
  [SMALL_STATE(84)] = 3771,
  [SMALL_STATE(85)] = 3798,
  [SMALL_STATE(86)] = 3843,
  [SMALL_STATE(87)] = 3870,
  [SMALL_STATE(88)] = 3897,
  [SMALL_STATE(89)] = 3924,
  [SMALL_STATE(90)] = 3951,
  [SMALL_STATE(91)] = 3978,
  [SMALL_STATE(92)] = 4005,
  [SMALL_STATE(93)] = 4032,
  [SMALL_STATE(94)] = 4059,
  [SMALL_STATE(95)] = 4088,
  [SMALL_STATE(96)] = 4117,
  [SMALL_STATE(97)] = 4144,
  [SMALL_STATE(98)] = 4171,
  [SMALL_STATE(99)] = 4198,
  [SMALL_STATE(100)] = 4225,
  [SMALL_STATE(101)] = 4252,
  [SMALL_STATE(102)] = 4279,
  [SMALL_STATE(103)] = 4306,
  [SMALL_STATE(104)] = 4333,
  [SMALL_STATE(105)] = 4360,
  [SMALL_STATE(106)] = 4387,
  [SMALL_STATE(107)] = 4414,
  [SMALL_STATE(108)] = 4441,
  [SMALL_STATE(109)] = 4468,
  [SMALL_STATE(110)] = 4495,
  [SMALL_STATE(111)] = 4522,
  [SMALL_STATE(112)] = 4549,
  [SMALL_STATE(113)] = 4576,
  [SMALL_STATE(114)] = 4603,
  [SMALL_STATE(115)] = 4648,
  [SMALL_STATE(116)] = 4675,
  [SMALL_STATE(117)] = 4702,
  [SMALL_STATE(118)] = 4729,
  [SMALL_STATE(119)] = 4756,
  [SMALL_STATE(120)] = 4783,
  [SMALL_STATE(121)] = 4810,
  [SMALL_STATE(122)] = 4837,
  [SMALL_STATE(123)] = 4864,
  [SMALL_STATE(124)] = 4891,
  [SMALL_STATE(125)] = 4918,
  [SMALL_STATE(126)] = 4945,
  [SMALL_STATE(127)] = 4972,
  [SMALL_STATE(128)] = 5014,
  [SMALL_STATE(129)] = 5040,
  [SMALL_STATE(130)] = 5082,
  [SMALL_STATE(131)] = 5108,
  [SMALL_STATE(132)] = 5134,
  [SMALL_STATE(133)] = 5176,
  [SMALL_STATE(134)] = 5218,
  [SMALL_STATE(135)] = 5244,
  [SMALL_STATE(136)] = 5286,
  [SMALL_STATE(137)] = 5312,
  [SMALL_STATE(138)] = 5354,
  [SMALL_STATE(139)] = 5396,
  [SMALL_STATE(140)] = 5438,
  [SMALL_STATE(141)] = 5480,
  [SMALL_STATE(142)] = 5506,
  [SMALL_STATE(143)] = 5548,
  [SMALL_STATE(144)] = 5590,
  [SMALL_STATE(145)] = 5616,
  [SMALL_STATE(146)] = 5658,
  [SMALL_STATE(147)] = 5684,
  [SMALL_STATE(148)] = 5726,
  [SMALL_STATE(149)] = 5768,
  [SMALL_STATE(150)] = 5810,
  [SMALL_STATE(151)] = 5852,
  [SMALL_STATE(152)] = 5894,
  [SMALL_STATE(153)] = 5920,
  [SMALL_STATE(154)] = 5962,
  [SMALL_STATE(155)] = 6004,
  [SMALL_STATE(156)] = 6030,
  [SMALL_STATE(157)] = 6056,
  [SMALL_STATE(158)] = 6082,
  [SMALL_STATE(159)] = 6124,
  [SMALL_STATE(160)] = 6153,
  [SMALL_STATE(161)] = 6182,
  [SMALL_STATE(162)] = 6211,
  [SMALL_STATE(163)] = 6240,
  [SMALL_STATE(164)] = 6269,
  [SMALL_STATE(165)] = 6298,
  [SMALL_STATE(166)] = 6334,
  [SMALL_STATE(167)] = 6370,
  [SMALL_STATE(168)] = 6398,
  [SMALL_STATE(169)] = 6423,
  [SMALL_STATE(170)] = 6457,
  [SMALL_STATE(171)] = 6491,
  [SMALL_STATE(172)] = 6512,
  [SMALL_STATE(173)] = 6555,
  [SMALL_STATE(174)] = 6598,
  [SMALL_STATE(175)] = 6641,
  [SMALL_STATE(176)] = 6662,
  [SMALL_STATE(177)] = 6683,
  [SMALL_STATE(178)] = 6721,
  [SMALL_STATE(179)] = 6745,
  [SMALL_STATE(180)] = 6783,
  [SMALL_STATE(181)] = 6802,
  [SMALL_STATE(182)] = 6827,
  [SMALL_STATE(183)] = 6852,
  [SMALL_STATE(184)] = 6889,
  [SMALL_STATE(185)] = 6910,
  [SMALL_STATE(186)] = 6935,
  [SMALL_STATE(187)] = 6960,
  [SMALL_STATE(188)] = 6981,
  [SMALL_STATE(189)] = 7006,
  [SMALL_STATE(190)] = 7031,
  [SMALL_STATE(191)] = 7056,
  [SMALL_STATE(192)] = 7081,
  [SMALL_STATE(193)] = 7103,
  [SMALL_STATE(194)] = 7121,
  [SMALL_STATE(195)] = 7139,
  [SMALL_STATE(196)] = 7157,
  [SMALL_STATE(197)] = 7175,
  [SMALL_STATE(198)] = 7193,
  [SMALL_STATE(199)] = 7227,
  [SMALL_STATE(200)] = 7245,
  [SMALL_STATE(201)] = 7263,
  [SMALL_STATE(202)] = 7281,
  [SMALL_STATE(203)] = 7299,
  [SMALL_STATE(204)] = 7317,
  [SMALL_STATE(205)] = 7335,
  [SMALL_STATE(206)] = 7354,
  [SMALL_STATE(207)] = 7373,
  [SMALL_STATE(208)] = 7389,
  [SMALL_STATE(209)] = 7405,
  [SMALL_STATE(210)] = 7421,
  [SMALL_STATE(211)] = 7437,
  [SMALL_STATE(212)] = 7453,
  [SMALL_STATE(213)] = 7469,
  [SMALL_STATE(214)] = 7485,
  [SMALL_STATE(215)] = 7501,
  [SMALL_STATE(216)] = 7517,
  [SMALL_STATE(217)] = 7533,
  [SMALL_STATE(218)] = 7549,
  [SMALL_STATE(219)] = 7565,
  [SMALL_STATE(220)] = 7586,
  [SMALL_STATE(221)] = 7609,
  [SMALL_STATE(222)] = 7630,
  [SMALL_STATE(223)] = 7651,
  [SMALL_STATE(224)] = 7672,
  [SMALL_STATE(225)] = 7693,
  [SMALL_STATE(226)] = 7714,
  [SMALL_STATE(227)] = 7735,
  [SMALL_STATE(228)] = 7756,
  [SMALL_STATE(229)] = 7777,
  [SMALL_STATE(230)] = 7800,
  [SMALL_STATE(231)] = 7821,
  [SMALL_STATE(232)] = 7842,
  [SMALL_STATE(233)] = 7862,
  [SMALL_STATE(234)] = 7882,
  [SMALL_STATE(235)] = 7894,
  [SMALL_STATE(236)] = 7914,
  [SMALL_STATE(237)] = 7926,
  [SMALL_STATE(238)] = 7938,
  [SMALL_STATE(239)] = 7958,
  [SMALL_STATE(240)] = 7970,
  [SMALL_STATE(241)] = 7986,
  [SMALL_STATE(242)] = 7998,
  [SMALL_STATE(243)] = 8018,
  [SMALL_STATE(244)] = 8038,
  [SMALL_STATE(245)] = 8050,
  [SMALL_STATE(246)] = 8065,
  [SMALL_STATE(247)] = 8080,
  [SMALL_STATE(248)] = 8095,
  [SMALL_STATE(249)] = 8114,
  [SMALL_STATE(250)] = 8131,
  [SMALL_STATE(251)] = 8148,
  [SMALL_STATE(252)] = 8165,
  [SMALL_STATE(253)] = 8180,
  [SMALL_STATE(254)] = 8197,
  [SMALL_STATE(255)] = 8214,
  [SMALL_STATE(256)] = 8229,
  [SMALL_STATE(257)] = 8246,
  [SMALL_STATE(258)] = 8265,
  [SMALL_STATE(259)] = 8280,
  [SMALL_STATE(260)] = 8293,
  [SMALL_STATE(261)] = 8308,
  [SMALL_STATE(262)] = 8327,
  [SMALL_STATE(263)] = 8344,
  [SMALL_STATE(264)] = 8363,
  [SMALL_STATE(265)] = 8373,
  [SMALL_STATE(266)] = 8387,
  [SMALL_STATE(267)] = 8397,
  [SMALL_STATE(268)] = 8411,
  [SMALL_STATE(269)] = 8421,
  [SMALL_STATE(270)] = 8435,
  [SMALL_STATE(271)] = 8449,
  [SMALL_STATE(272)] = 8461,
  [SMALL_STATE(273)] = 8471,
  [SMALL_STATE(274)] = 8487,
  [SMALL_STATE(275)] = 8503,
  [SMALL_STATE(276)] = 8513,
  [SMALL_STATE(277)] = 8527,
  [SMALL_STATE(278)] = 8537,
  [SMALL_STATE(279)] = 8551,
  [SMALL_STATE(280)] = 8561,
  [SMALL_STATE(281)] = 8575,
  [SMALL_STATE(282)] = 8588,
  [SMALL_STATE(283)] = 8601,
  [SMALL_STATE(284)] = 8614,
  [SMALL_STATE(285)] = 8627,
  [SMALL_STATE(286)] = 8636,
  [SMALL_STATE(287)] = 8645,
  [SMALL_STATE(288)] = 8658,
  [SMALL_STATE(289)] = 8671,
  [SMALL_STATE(290)] = 8684,
  [SMALL_STATE(291)] = 8697,
  [SMALL_STATE(292)] = 8710,
  [SMALL_STATE(293)] = 8723,
  [SMALL_STATE(294)] = 8736,
  [SMALL_STATE(295)] = 8749,
  [SMALL_STATE(296)] = 8762,
  [SMALL_STATE(297)] = 8775,
  [SMALL_STATE(298)] = 8788,
  [SMALL_STATE(299)] = 8799,
  [SMALL_STATE(300)] = 8812,
  [SMALL_STATE(301)] = 8821,
  [SMALL_STATE(302)] = 8834,
  [SMALL_STATE(303)] = 8847,
  [SMALL_STATE(304)] = 8857,
  [SMALL_STATE(305)] = 8867,
  [SMALL_STATE(306)] = 8877,
  [SMALL_STATE(307)] = 8887,
  [SMALL_STATE(308)] = 8897,
  [SMALL_STATE(309)] = 8907,
  [SMALL_STATE(310)] = 8917,
  [SMALL_STATE(311)] = 8927,
  [SMALL_STATE(312)] = 8937,
  [SMALL_STATE(313)] = 8947,
  [SMALL_STATE(314)] = 8957,
  [SMALL_STATE(315)] = 8964,
  [SMALL_STATE(316)] = 8971,
  [SMALL_STATE(317)] = 8978,
  [SMALL_STATE(318)] = 8985,
  [SMALL_STATE(319)] = 8992,
  [SMALL_STATE(320)] = 8999,
  [SMALL_STATE(321)] = 9006,
  [SMALL_STATE(322)] = 9013,
  [SMALL_STATE(323)] = 9020,
  [SMALL_STATE(324)] = 9027,
  [SMALL_STATE(325)] = 9034,
  [SMALL_STATE(326)] = 9041,
  [SMALL_STATE(327)] = 9048,
  [SMALL_STATE(328)] = 9055,
  [SMALL_STATE(329)] = 9062,
  [SMALL_STATE(330)] = 9069,
  [SMALL_STATE(331)] = 9076,
  [SMALL_STATE(332)] = 9083,
  [SMALL_STATE(333)] = 9090,
  [SMALL_STATE(334)] = 9097,
  [SMALL_STATE(335)] = 9104,
  [SMALL_STATE(336)] = 9111,
  [SMALL_STATE(337)] = 9118,
  [SMALL_STATE(338)] = 9125,
  [SMALL_STATE(339)] = 9132,
  [SMALL_STATE(340)] = 9139,
  [SMALL_STATE(341)] = 9146,
  [SMALL_STATE(342)] = 9153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(147),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(191),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(158),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(297),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(319),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(189),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(173),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(73),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(342),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(336),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(320),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(38),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(176),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(169),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(256),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(335),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(190),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(140),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(295),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(330),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(185),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(173),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(73),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(342),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(336),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(320),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(171),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(170),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(249),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(335),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 15),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 3),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(127),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(318),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(143),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(151),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(160),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(95),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(94),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(160),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(262),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 15),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(318),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(143),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(151),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(167),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(95),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(94),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(53),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(167),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(262),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 12),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 11),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 11),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 13),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 16),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, .production_id = 12),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 16),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 5),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 15),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 15),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_interpolation, 3, .production_id = 10),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [844] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(296),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(268),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(312),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(309),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [908] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(289),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_expressions, 2), SHIFT_REPEAT(286),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 4),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 17),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_expressions, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [968] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(181),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_block, 2),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(85),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(44),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2), SHIFT_REPEAT(132),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(13),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_block_repeat1, 2), SHIFT_REPEAT(294),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 15),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1076] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
