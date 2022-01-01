#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 18

enum {
  sym_word = 1,
  anon_sym_machine = 2,
  anon_sym_SEMI = 3,
  anon_sym_include = 4,
  anon_sym_import = 5,
  anon_sym_EQ = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_COMMA = 8,
  anon_sym_PIPE = 9,
  anon_sym_AMP = 10,
  anon_sym_DASH_DASH = 11,
  anon_sym_DASH = 12,
  anon_sym_DOT = 13,
  anon_sym_COLON = 14,
  anon_sym_STAR = 15,
  anon_sym_STAR_STAR = 16,
  anon_sym_QMARK = 17,
  anon_sym_PLUS = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_BANG = 21,
  anon_sym_CARET = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  sym_uint = 25,
  sym_hex = 26,
  sym_hex_char = 27,
  aux_sym_string_token1 = 28,
  aux_sym_string_token2 = 29,
  anon_sym_SLASH = 30,
  anon_sym_i = 31,
  anon_sym_STAR2 = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_CARET2 = 35,
  aux_sym_literal_token1 = 36,
  aux_sym_literal_token2 = 37,
  sym_ctrl_code = 38,
  sym_quote = 39,
  sym_escape = 40,
  sym_comment = 41,
  sym_specification = 42,
  sym__statement = 43,
  sym_machine_decl = 44,
  sym_include_spec = 45,
  sym_import_spec = 46,
  sym_machine_def = 47,
  sym_machine_inst = 48,
  sym__expression = 49,
  sym_join = 50,
  sym__binary_expression = 51,
  sym_combine = 52,
  sym_intersect = 53,
  sym_subtract = 54,
  sym__term = 55,
  sym_concatenate = 56,
  sym__factor_label = 57,
  sym_label = 58,
  sym__factor_ep = 59,
  sym__factor_aug = 60,
  sym__factor_rep = 61,
  sym_repeat = 62,
  sym__rep_op = 63,
  sym_limits = 64,
  sym__mininum = 65,
  sym__maximum = 66,
  sym__exactly = 67,
  sym__factor_neg = 68,
  sym_negate = 69,
  sym__factor = 70,
  sym_group = 71,
  sym__alphabet_num = 72,
  sym_signed = 73,
  sym_string = 74,
  sym_regex = 75,
  sym__re_reg_item = 76,
  sym_reg_repeat = 77,
  sym__reg_item = 78,
  sym_char_class = 79,
  sym_re_negate = 80,
  aux_sym__char_cls_expr = 81,
  sym_range = 82,
  sym__codepoint = 83,
  sym_literal = 84,
  aux_sym_specification_repeat1 = 85,
  aux_sym_join_repeat1 = 86,
  aux_sym_concatenate_repeat1 = 87,
  aux_sym_regex_repeat1 = 88,
  alias_sym_any = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_machine] = "machine",
  [anon_sym_SEMI] = ";",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BANG] = "!",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_uint] = "uint",
  [sym_hex] = "hex",
  [sym_hex_char] = "hex_char",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_i] = "i",
  [anon_sym_STAR2] = "*",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET2] = "^",
  [aux_sym_literal_token1] = "literal_token1",
  [aux_sym_literal_token2] = "literal_token2",
  [sym_ctrl_code] = "ctrl_code",
  [sym_quote] = "quote",
  [sym_escape] = "escape",
  [sym_comment] = "comment",
  [sym_specification] = "specification",
  [sym__statement] = "_statement",
  [sym_machine_decl] = "machine_decl",
  [sym_include_spec] = "include_spec",
  [sym_import_spec] = "import_spec",
  [sym_machine_def] = "machine_def",
  [sym_machine_inst] = "machine_inst",
  [sym__expression] = "_expression",
  [sym_join] = "join",
  [sym__binary_expression] = "_binary_expression",
  [sym_combine] = "combine",
  [sym_intersect] = "intersect",
  [sym_subtract] = "subtract",
  [sym__term] = "_term",
  [sym_concatenate] = "concatenate",
  [sym__factor_label] = "_factor_label",
  [sym_label] = "label",
  [sym__factor_ep] = "_factor_ep",
  [sym__factor_aug] = "_factor_aug",
  [sym__factor_rep] = "_factor_rep",
  [sym_repeat] = "repeat",
  [sym__rep_op] = "_rep_op",
  [sym_limits] = "limits",
  [sym__mininum] = "_mininum",
  [sym__maximum] = "_maximum",
  [sym__exactly] = "_exactly",
  [sym__factor_neg] = "_factor_neg",
  [sym_negate] = "negate",
  [sym__factor] = "_factor",
  [sym_group] = "group",
  [sym__alphabet_num] = "_alphabet_num",
  [sym_signed] = "signed",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym__re_reg_item] = "_re_reg_item",
  [sym_reg_repeat] = "repeat",
  [sym__reg_item] = "_reg_item",
  [sym_char_class] = "char_class",
  [sym_re_negate] = "negate",
  [aux_sym__char_cls_expr] = "_char_cls_expr",
  [sym_range] = "range",
  [sym__codepoint] = "_codepoint",
  [sym_literal] = "literal",
  [aux_sym_specification_repeat1] = "specification_repeat1",
  [aux_sym_join_repeat1] = "join_repeat1",
  [aux_sym_concatenate_repeat1] = "concatenate_repeat1",
  [aux_sym_regex_repeat1] = "regex_repeat1",
  [alias_sym_any] = "any",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_machine] = anon_sym_machine,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_uint] = sym_uint,
  [sym_hex] = sym_hex,
  [sym_hex_char] = sym_hex_char,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_STAR2] = anon_sym_STAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET2] = anon_sym_CARET,
  [aux_sym_literal_token1] = aux_sym_literal_token1,
  [aux_sym_literal_token2] = aux_sym_literal_token2,
  [sym_ctrl_code] = sym_ctrl_code,
  [sym_quote] = sym_quote,
  [sym_escape] = sym_escape,
  [sym_comment] = sym_comment,
  [sym_specification] = sym_specification,
  [sym__statement] = sym__statement,
  [sym_machine_decl] = sym_machine_decl,
  [sym_include_spec] = sym_include_spec,
  [sym_import_spec] = sym_import_spec,
  [sym_machine_def] = sym_machine_def,
  [sym_machine_inst] = sym_machine_inst,
  [sym__expression] = sym__expression,
  [sym_join] = sym_join,
  [sym__binary_expression] = sym__binary_expression,
  [sym_combine] = sym_combine,
  [sym_intersect] = sym_intersect,
  [sym_subtract] = sym_subtract,
  [sym__term] = sym__term,
  [sym_concatenate] = sym_concatenate,
  [sym__factor_label] = sym__factor_label,
  [sym_label] = sym_label,
  [sym__factor_ep] = sym__factor_ep,
  [sym__factor_aug] = sym__factor_aug,
  [sym__factor_rep] = sym__factor_rep,
  [sym_repeat] = sym_repeat,
  [sym__rep_op] = sym__rep_op,
  [sym_limits] = sym_limits,
  [sym__mininum] = sym__mininum,
  [sym__maximum] = sym__maximum,
  [sym__exactly] = sym__exactly,
  [sym__factor_neg] = sym__factor_neg,
  [sym_negate] = sym_negate,
  [sym__factor] = sym__factor,
  [sym_group] = sym_group,
  [sym__alphabet_num] = sym__alphabet_num,
  [sym_signed] = sym_signed,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym__re_reg_item] = sym__re_reg_item,
  [sym_reg_repeat] = sym_repeat,
  [sym__reg_item] = sym__reg_item,
  [sym_char_class] = sym_char_class,
  [sym_re_negate] = sym_negate,
  [aux_sym__char_cls_expr] = aux_sym__char_cls_expr,
  [sym_range] = sym_range,
  [sym__codepoint] = sym__codepoint,
  [sym_literal] = sym_literal,
  [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
  [aux_sym_join_repeat1] = aux_sym_join_repeat1,
  [aux_sym_concatenate_repeat1] = aux_sym_concatenate_repeat1,
  [aux_sym_regex_repeat1] = aux_sym_regex_repeat1,
  [alias_sym_any] = alias_sym_any,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
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
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_ctrl_code] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_specification] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_machine_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_include_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_import_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_def] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_inst] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_combine] = {
    .visible = true,
    .named = true,
  },
  [sym_intersect] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_concatenate] = {
    .visible = true,
    .named = true,
  },
  [sym__factor_label] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__factor_ep] = {
    .visible = false,
    .named = true,
  },
  [sym__factor_aug] = {
    .visible = false,
    .named = true,
  },
  [sym__factor_rep] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym__rep_op] = {
    .visible = false,
    .named = true,
  },
  [sym_limits] = {
    .visible = true,
    .named = true,
  },
  [sym__mininum] = {
    .visible = false,
    .named = true,
  },
  [sym__maximum] = {
    .visible = false,
    .named = true,
  },
  [sym__exactly] = {
    .visible = false,
    .named = true,
  },
  [sym__factor_neg] = {
    .visible = false,
    .named = true,
  },
  [sym_negate] = {
    .visible = true,
    .named = true,
  },
  [sym__factor] = {
    .visible = false,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym__alphabet_num] = {
    .visible = false,
    .named = true,
  },
  [sym_signed] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__re_reg_item] = {
    .visible = false,
    .named = true,
  },
  [sym_reg_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym__reg_item] = {
    .visible = false,
    .named = true,
  },
  [sym_char_class] = {
    .visible = true,
    .named = true,
  },
  [sym_re_negate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__char_cls_expr] = {
    .visible = false,
    .named = false,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__codepoint] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_join_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concatenate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_any] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_exactly = 1,
  field_expr = 2,
  field_high = 3,
  field_lhs = 4,
  field_low = 5,
  field_machine = 6,
  field_maximum = 7,
  field_minimum = 8,
  field_name = 9,
  field_operator = 10,
  field_rhs = 11,
  field_sign = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_exactly] = "exactly",
  [field_expr] = "expr",
  [field_high] = "high",
  [field_lhs] = "lhs",
  [field_low] = "low",
  [field_machine] = "machine",
  [field_maximum] = "maximum",
  [field_minimum] = "minimum",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_rhs] = "rhs",
  [field_sign] = "sign",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_machine, 1},
  [2] =
    {field_sign, 0},
  [3] =
    {field_expr, 2},
    {field_name, 0},
  [5] =
    {field_operator, 1},
  [6] =
    {field_operator, 0, .inherited = true},
  [7] =
    {field_operator, 0, .inherited = true},
    {field_operator, 1, .inherited = true},
  [9] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [12] =
    {field_minimum, 0},
  [13] =
    {field_exactly, 0},
  [14] =
    {field_high, 2},
    {field_low, 0},
  [16] =
    {field_maximum, 0},
  [17] =
    {field_exactly, 1, .inherited = true},
  [18] =
    {field_maximum, 2, .inherited = true},
  [19] =
    {field_minimum, 1, .inherited = true},
  [20] =
    {field_maximum, 3, .inherited = true},
    {field_minimum, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_any,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(80);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(27)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(80);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(25)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28)
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(80);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') ADVANCE(81);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(80);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(19)
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '\\') SKIP(13)
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') SKIP(18)
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 34:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(36)
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') SKIP(36)
      if (lookahead == '\r') SKIP(34)
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\\') SKIP(35)
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == '^') ADVANCE(58);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_uint);
      if (lookahead == 'x') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_literal_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_literal_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ctrl_code);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_machine] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_hex_char] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET2] = ACTIONS(1),
    [sym_ctrl_code] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_specification] = STATE(93),
    [sym__statement] = STATE(38),
    [sym_machine_decl] = STATE(66),
    [sym_include_spec] = STATE(66),
    [sym_import_spec] = STATE(66),
    [sym_machine_def] = STATE(66),
    [sym_machine_inst] = STATE(66),
    [aux_sym_specification_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_machine] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_join_repeat1,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(80), 2,
      sym__expression,
      sym_join,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(61), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [71] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_join_repeat1,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(94), 2,
      sym__expression,
      sym_join,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(61), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [142] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      aux_sym_join_repeat1,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(95), 2,
      sym__expression,
      sym_join,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(61), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [213] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_word,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_uint,
    ACTIONS(48), 1,
      sym_hex,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_join_repeat1,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(36), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(51), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(71), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [280] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      aux_sym_join_repeat1,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(57), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [347] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(56), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [411] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(58), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(52), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(59), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [539] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_word,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_uint,
    ACTIONS(75), 1,
      sym_hex,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(66), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(78), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(81), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [595] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(51), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [651] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_uint,
    ACTIONS(25), 1,
      sym_hex,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(53), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(16), 11,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [704] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_uint,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(87), 2,
      sym_hex,
      sym_word,
    STATE(21), 9,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_signed,
      sym_string,
      sym_regex,
      sym_char_class,
  [747] = 9,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_SLASH,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(97), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(99), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(15), 3,
      sym__re_reg_item,
      sym_reg_repeat,
      aux_sym_regex_repeat1,
    STATE(45), 4,
      sym__reg_item,
      sym_char_class,
      sym__codepoint,
      sym_literal,
  [782] = 9,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym_escape,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(99), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(17), 3,
      sym__re_reg_item,
      sym_reg_repeat,
      aux_sym_regex_repeat1,
    STATE(45), 4,
      sym__reg_item,
      sym_char_class,
      sym__codepoint,
      sym_literal,
  [817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_STAR,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(22), 2,
      sym__rep_op,
      sym_limits,
    ACTIONS(113), 3,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(107), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [848] = 9,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      sym_escape,
    ACTIONS(125), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(128), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(17), 3,
      sym__re_reg_item,
      sym_reg_repeat,
      aux_sym_regex_repeat1,
    STATE(45), 4,
      sym__reg_item,
      sym_char_class,
      sym__codepoint,
      sym_literal,
  [883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(136), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(134), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_i,
    ACTIONS(142), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(140), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_i,
    ACTIONS(148), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(146), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(152), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(156), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(160), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(164), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(140), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(168), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(172), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(176), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(180), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(184), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(188), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(192), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(196), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [1228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_uint,
    ACTIONS(200), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_hex,
      sym_word,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_SLASH,
      anon_sym_LBRACK,
  [1248] = 9,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    ACTIONS(206), 1,
      anon_sym_CARET2,
    ACTIONS(212), 1,
      sym_escape,
    STATE(97), 1,
      sym_re_negate,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(40), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_uint,
    ACTIONS(214), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_hex,
      sym_word,
      aux_sym_string_token1,
      aux_sym_string_token2,
      anon_sym_SLASH,
      anon_sym_LBRACK,
  [1300] = 9,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_CARET2,
    ACTIONS(212), 1,
      sym_escape,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_re_negate,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(42), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_word,
    ACTIONS(9), 1,
      anon_sym_machine,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym__statement,
      aux_sym_specification_repeat1,
    STATE(66), 5,
      sym_machine_decl,
      sym_include_spec,
      sym_import_spec,
      sym_machine_def,
      sym_machine_inst,
  [1362] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_word,
    ACTIONS(227), 1,
      anon_sym_machine,
    ACTIONS(230), 1,
      anon_sym_include,
    ACTIONS(233), 1,
      anon_sym_import,
    STATE(39), 2,
      sym__statement,
      aux_sym_specification_repeat1,
    STATE(66), 5,
      sym_machine_decl,
      sym_include_spec,
      sym_import_spec,
      sym_machine_def,
      sym_machine_inst,
  [1392] = 7,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_escape,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(41), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1418] = 7,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      sym_escape,
    ACTIONS(240), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(243), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(41), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1444] = 7,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_escape,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(41), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1470] = 7,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_escape,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(41), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1496] = 7,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_escape,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(210), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(43), 2,
      aux_sym__char_cls_expr,
      sym_range,
    STATE(54), 2,
      sym__codepoint,
      sym_literal,
  [1522] = 4,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_STAR2,
    ACTIONS(259), 2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(255), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1541] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_STAR2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(261), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1558] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_STAR2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(265), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1575] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_STAR2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(162), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1592] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_STAR2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(170), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1609] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(269), 6,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_LBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(273), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [1643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_DASH,
    ACTIONS(279), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DASH,
    ACTIONS(283), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1677] = 4,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DASH,
    ACTIONS(291), 2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(289), 4,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1694] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(261), 5,
      anon_sym_DASH,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DASH,
    ACTIONS(293), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [1724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_AMP,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(297), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DASH,
    ACTIONS(309), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [1762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(313), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [1777] = 5,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_escape,
    ACTIONS(208), 2,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
    ACTIONS(317), 2,
      sym_ctrl_code,
      sym_quote,
    STATE(62), 2,
      sym__codepoint,
      sym_literal,
  [1796] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_AMP,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    ACTIONS(307), 1,
      anon_sym_DASH,
    ACTIONS(321), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1819] = 3,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(325), 2,
      sym_ctrl_code,
      sym_quote,
    ACTIONS(323), 4,
      anon_sym_RBRACK,
      aux_sym_literal_token1,
      aux_sym_literal_token2,
      sym_escape,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1937] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_AMP,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH,
    ACTIONS(307), 1,
      anon_sym_DASH,
  [1956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_string,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      sym_uint,
    STATE(83), 1,
      sym__exactly,
    STATE(86), 1,
      sym__mininum,
  [1986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_word,
    STATE(87), 1,
      sym_string,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 1,
      sym_uint,
    STATE(90), 1,
      sym__maximum,
  [2013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(82), 1,
      sym_string,
    ACTIONS(27), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [2024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_EQ,
    ACTIONS(373), 1,
      anon_sym_COLON_EQ,
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym_uint,
    STATE(85), 1,
      sym__maximum,
  [2044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOT,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SEMI,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_word,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SEMI,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_uint,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 347,
  [SMALL_STATE(8)] = 411,
  [SMALL_STATE(9)] = 475,
  [SMALL_STATE(10)] = 539,
  [SMALL_STATE(11)] = 595,
  [SMALL_STATE(12)] = 651,
  [SMALL_STATE(13)] = 704,
  [SMALL_STATE(14)] = 747,
  [SMALL_STATE(15)] = 782,
  [SMALL_STATE(16)] = 817,
  [SMALL_STATE(17)] = 848,
  [SMALL_STATE(18)] = 883,
  [SMALL_STATE(19)] = 907,
  [SMALL_STATE(20)] = 931,
  [SMALL_STATE(21)] = 955,
  [SMALL_STATE(22)] = 976,
  [SMALL_STATE(23)] = 997,
  [SMALL_STATE(24)] = 1018,
  [SMALL_STATE(25)] = 1039,
  [SMALL_STATE(26)] = 1060,
  [SMALL_STATE(27)] = 1081,
  [SMALL_STATE(28)] = 1102,
  [SMALL_STATE(29)] = 1123,
  [SMALL_STATE(30)] = 1144,
  [SMALL_STATE(31)] = 1165,
  [SMALL_STATE(32)] = 1186,
  [SMALL_STATE(33)] = 1207,
  [SMALL_STATE(34)] = 1228,
  [SMALL_STATE(35)] = 1248,
  [SMALL_STATE(36)] = 1280,
  [SMALL_STATE(37)] = 1300,
  [SMALL_STATE(38)] = 1332,
  [SMALL_STATE(39)] = 1362,
  [SMALL_STATE(40)] = 1392,
  [SMALL_STATE(41)] = 1418,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1470,
  [SMALL_STATE(44)] = 1496,
  [SMALL_STATE(45)] = 1522,
  [SMALL_STATE(46)] = 1541,
  [SMALL_STATE(47)] = 1558,
  [SMALL_STATE(48)] = 1575,
  [SMALL_STATE(49)] = 1592,
  [SMALL_STATE(50)] = 1609,
  [SMALL_STATE(51)] = 1625,
  [SMALL_STATE(52)] = 1643,
  [SMALL_STATE(53)] = 1661,
  [SMALL_STATE(54)] = 1677,
  [SMALL_STATE(55)] = 1694,
  [SMALL_STATE(56)] = 1709,
  [SMALL_STATE(57)] = 1724,
  [SMALL_STATE(58)] = 1747,
  [SMALL_STATE(59)] = 1762,
  [SMALL_STATE(60)] = 1777,
  [SMALL_STATE(61)] = 1796,
  [SMALL_STATE(62)] = 1819,
  [SMALL_STATE(63)] = 1833,
  [SMALL_STATE(64)] = 1846,
  [SMALL_STATE(65)] = 1859,
  [SMALL_STATE(66)] = 1872,
  [SMALL_STATE(67)] = 1885,
  [SMALL_STATE(68)] = 1898,
  [SMALL_STATE(69)] = 1911,
  [SMALL_STATE(70)] = 1924,
  [SMALL_STATE(71)] = 1937,
  [SMALL_STATE(72)] = 1956,
  [SMALL_STATE(73)] = 1970,
  [SMALL_STATE(74)] = 1986,
  [SMALL_STATE(75)] = 2000,
  [SMALL_STATE(76)] = 2013,
  [SMALL_STATE(77)] = 2024,
  [SMALL_STATE(78)] = 2034,
  [SMALL_STATE(79)] = 2044,
  [SMALL_STATE(80)] = 2054,
  [SMALL_STATE(81)] = 2061,
  [SMALL_STATE(82)] = 2068,
  [SMALL_STATE(83)] = 2075,
  [SMALL_STATE(84)] = 2082,
  [SMALL_STATE(85)] = 2089,
  [SMALL_STATE(86)] = 2096,
  [SMALL_STATE(87)] = 2103,
  [SMALL_STATE(88)] = 2110,
  [SMALL_STATE(89)] = 2117,
  [SMALL_STATE(90)] = 2124,
  [SMALL_STATE(91)] = 2131,
  [SMALL_STATE(92)] = 2138,
  [SMALL_STATE(93)] = 2145,
  [SMALL_STATE(94)] = 2152,
  [SMALL_STATE(95)] = 2159,
  [SMALL_STATE(96)] = 2166,
  [SMALL_STATE(97)] = 2173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(18),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(92),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(24),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(14),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 8), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(18),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(92),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(13),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(24),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor_aug, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor_aug, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(47),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(37),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(46),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(45),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_repeat1, 2), SHIFT_REPEAT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_class, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_class, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_class, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_class, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed, 2, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signed, 2, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 14),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 3, .production_id = 14),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 16),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 4, .production_id = 16),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 17),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 5, .production_id = 17),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 15),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 4, .production_id = 15),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 6),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenate_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(77),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(88),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(74),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(76),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__char_cls_expr, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__char_cls_expr, 2), SHIFT_REPEAT(55),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__char_cls_expr, 2), SHIFT_REPEAT(54),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__char_cls_expr, 2), SHIFT_REPEAT(54),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_re_negate, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_re_negate, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__re_reg_item, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__re_reg_item, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reg_item, 1, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reg_item, 1, .production_id = 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg_repeat, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_repeat, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenate, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenate, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__char_cls_expr, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__char_cls_expr, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3, .production_id = 9),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtract, 3, .production_id = 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 2, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersect, 3, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersect, 3, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combine, 3, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_combine, 3, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 12),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 4, .production_id = 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 4, .production_id = 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_inst, 4, .production_id = 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_inst, 4, .production_id = 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_def, 4, .production_id = 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_def, 4, .production_id = 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 3, .production_id = 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 3, .production_id = 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_decl, 3, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_decl, 3, .production_id = 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 13),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [403] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ragel(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
