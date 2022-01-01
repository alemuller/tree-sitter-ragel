#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 16

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
  aux_sym_string_token1 = 25,
  aux_sym_string_token2 = 26,
  sym_uint = 27,
  sym_hex = 28,
  sym_hex_char = 29,
  sym_ctrl_code = 30,
  sym_comment = 31,
  sym_specification = 32,
  sym__statement = 33,
  sym_machine_decl = 34,
  sym_include_spec = 35,
  sym_import_spec = 36,
  sym_machine_def = 37,
  sym_machine_inst = 38,
  sym__expression = 39,
  sym_join = 40,
  sym__binary_expression = 41,
  sym_combine = 42,
  sym_intersect = 43,
  sym_subtract = 44,
  sym__term = 45,
  sym_concatenate = 46,
  sym__factor_label = 47,
  sym_label = 48,
  sym__factor_ep = 49,
  sym__factor_aug = 50,
  sym__factor_rep = 51,
  sym_repeat = 52,
  sym__rep_op = 53,
  sym_limits = 54,
  sym__mininum = 55,
  sym__maximum = 56,
  sym__exactly = 57,
  sym__factor_neg = 58,
  sym_negate = 59,
  sym__factor = 60,
  sym_group = 61,
  sym__alphabet_num = 62,
  sym_string = 63,
  sym__number = 64,
  sym_signed = 65,
  aux_sym_specification_repeat1 = 66,
  aux_sym_join_repeat1 = 67,
  aux_sym_concatenate_repeat1 = 68,
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
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_uint] = "uint",
  [sym_hex] = "hex",
  [sym_hex_char] = "hex_char",
  [sym_ctrl_code] = "ctrl_code",
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
  [sym_string] = "string",
  [sym__number] = "_number",
  [sym_signed] = "signed",
  [aux_sym_specification_repeat1] = "specification_repeat1",
  [aux_sym_join_repeat1] = "join_repeat1",
  [aux_sym_concatenate_repeat1] = "concatenate_repeat1",
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_uint] = sym_uint,
  [sym_hex] = sym_hex,
  [sym_hex_char] = sym_hex_char,
  [sym_ctrl_code] = sym_ctrl_code,
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
  [sym_string] = sym_string,
  [sym__number] = sym__number,
  [sym_signed] = sym_signed,
  [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
  [aux_sym_join_repeat1] = aux_sym_join_repeat1,
  [aux_sym_concatenate_repeat1] = aux_sym_concatenate_repeat1,
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
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
  [sym_ctrl_code] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_signed] = {
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
};

enum {
  field_exactly = 1,
  field_expr = 2,
  field_lhs = 3,
  field_machine = 4,
  field_maximum = 5,
  field_minimum = 6,
  field_name = 7,
  field_operator = 8,
  field_rhs = 9,
  field_sign = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_exactly] = "exactly",
  [field_expr] = "expr",
  [field_lhs] = "lhs",
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 2},
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
    {field_maximum, 0},
  [15] =
    {field_exactly, 1, .inherited = true},
  [16] =
    {field_maximum, 2, .inherited = true},
  [17] =
    {field_minimum, 1, .inherited = true},
  [18] =
    {field_maximum, 3, .inherited = true},
    {field_minimum, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(36);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_uint);
      if (lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_ctrl_code);
      END_STATE();
    case 49:
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
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_machine);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
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
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_hex_char] = ACTIONS(1),
    [sym_ctrl_code] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_specification] = STATE(65),
    [sym__statement] = STATE(26),
    [sym_machine_decl] = STATE(45),
    [sym_include_spec] = STATE(45),
    [sym_import_spec] = STATE(45),
    [sym_machine_def] = STATE(45),
    [sym_machine_inst] = STATE(45),
    [aux_sym_specification_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [anon_sym_machine] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(54),
    [sym_join] = STATE(54),
    [sym__binary_expression] = STATE(34),
    [sym_combine] = STATE(34),
    [sym_intersect] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym__term] = STATE(34),
    [sym_concatenate] = STATE(34),
    [sym__factor_label] = STATE(30),
    [sym_label] = STATE(30),
    [sym__factor_ep] = STATE(30),
    [sym__factor_aug] = STATE(30),
    [sym__factor_rep] = STATE(14),
    [sym_repeat] = STATE(14),
    [sym__factor_neg] = STATE(14),
    [sym_negate] = STATE(14),
    [sym__factor] = STATE(14),
    [sym_group] = STATE(14),
    [sym__alphabet_num] = STATE(14),
    [sym_string] = STATE(14),
    [sym__number] = STATE(14),
    [sym_signed] = STATE(14),
    [aux_sym_join_repeat1] = STATE(5),
    [aux_sym_concatenate_repeat1] = STATE(10),
    [sym_word] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_string_token1] = ACTIONS(23),
    [aux_sym_string_token2] = ACTIONS(23),
    [sym_uint] = ACTIONS(25),
    [sym_hex] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__expression] = STATE(57),
    [sym_join] = STATE(57),
    [sym__binary_expression] = STATE(34),
    [sym_combine] = STATE(34),
    [sym_intersect] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym__term] = STATE(34),
    [sym_concatenate] = STATE(34),
    [sym__factor_label] = STATE(30),
    [sym_label] = STATE(30),
    [sym__factor_ep] = STATE(30),
    [sym__factor_aug] = STATE(30),
    [sym__factor_rep] = STATE(14),
    [sym_repeat] = STATE(14),
    [sym__factor_neg] = STATE(14),
    [sym_negate] = STATE(14),
    [sym__factor] = STATE(14),
    [sym_group] = STATE(14),
    [sym__alphabet_num] = STATE(14),
    [sym_string] = STATE(14),
    [sym__number] = STATE(14),
    [sym_signed] = STATE(14),
    [aux_sym_join_repeat1] = STATE(5),
    [aux_sym_concatenate_repeat1] = STATE(10),
    [sym_word] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_string_token1] = ACTIONS(23),
    [aux_sym_string_token2] = ACTIONS(23),
    [sym_uint] = ACTIONS(25),
    [sym_hex] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__expression] = STATE(55),
    [sym_join] = STATE(55),
    [sym__binary_expression] = STATE(34),
    [sym_combine] = STATE(34),
    [sym_intersect] = STATE(34),
    [sym_subtract] = STATE(34),
    [sym__term] = STATE(34),
    [sym_concatenate] = STATE(34),
    [sym__factor_label] = STATE(30),
    [sym_label] = STATE(30),
    [sym__factor_ep] = STATE(30),
    [sym__factor_aug] = STATE(30),
    [sym__factor_rep] = STATE(14),
    [sym_repeat] = STATE(14),
    [sym__factor_neg] = STATE(14),
    [sym_negate] = STATE(14),
    [sym__factor] = STATE(14),
    [sym_group] = STATE(14),
    [sym__alphabet_num] = STATE(14),
    [sym_string] = STATE(14),
    [sym__number] = STATE(14),
    [sym_signed] = STATE(14),
    [aux_sym_join_repeat1] = STATE(5),
    [aux_sym_concatenate_repeat1] = STATE(10),
    [sym_word] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_BANG] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_string_token1] = ACTIONS(23),
    [aux_sym_string_token2] = ACTIONS(23),
    [sym_uint] = ACTIONS(25),
    [sym_hex] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    STATE(6), 1,
      aux_sym_join_repeat1,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(32), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [60] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_word,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym_uint,
    ACTIONS(47), 1,
      sym_hex,
    STATE(6), 1,
      aux_sym_join_repeat1,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(32), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(35), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(41), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(44), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [120] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(36), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(35), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [234] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    STATE(10), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(30), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(33), 6,
      sym__binary_expression,
      sym_combine,
      sym_intersect,
      sym_subtract,
      sym__term,
      sym_concatenate,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [291] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(31), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [340] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_word,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym_uint,
    ACTIONS(68), 1,
      sym_hex,
    STATE(11), 1,
      aux_sym_concatenate_repeat1,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(56), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(62), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(61), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [389] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_word,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_uint,
    ACTIONS(27), 1,
      sym_hex,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    STATE(29), 4,
      sym__factor_label,
      sym_label,
      sym__factor_ep,
      sym__factor_aug,
    STATE(14), 10,
      sym__factor_rep,
      sym_repeat,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_uint,
    ACTIONS(17), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(19), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
    ACTIONS(71), 2,
      sym_hex,
      sym_word,
    STATE(24), 8,
      sym__factor_neg,
      sym_negate,
      sym__factor,
      sym_group,
      sym__alphabet_num,
      sym_string,
      sym__number,
      sym_signed,
  [471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(17), 2,
      sym__rep_op,
      sym_limits,
    ACTIONS(81), 3,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_PLUS,
    ACTIONS(75), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(85), 11,
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
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(91), 11,
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
  [547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(95), 11,
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
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(99), 11,
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
  [589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(103), 11,
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
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(107), 11,
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
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(111), 11,
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
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(115), 11,
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
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(119), 11,
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
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_DASH,
      anon_sym_STAR,
    ACTIONS(123), 11,
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
  [715] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_word,
    ACTIONS(132), 1,
      anon_sym_machine,
    ACTIONS(135), 1,
      anon_sym_include,
    ACTIONS(138), 1,
      anon_sym_import,
    STATE(25), 2,
      sym__statement,
      aux_sym_specification_repeat1,
    STATE(45), 5,
      sym_machine_decl,
      sym_include_spec,
      sym_import_spec,
      sym_machine_def,
      sym_machine_inst,
  [745] = 8,
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
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym__statement,
      aux_sym_specification_repeat1,
    STATE(45), 5,
      sym_machine_decl,
      sym_include_spec,
      sym_import_spec,
      sym_machine_def,
      sym_machine_inst,
  [775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_uint,
    ACTIONS(143), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_LPAREN,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_hex,
      sym_word,
  [793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_uint,
    ACTIONS(147), 9,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_BANG,
      anon_sym_CARET,
      anon_sym_LPAREN,
      aux_sym_string_token1,
      aux_sym_string_token2,
      sym_hex,
      sym_word,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(151), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_DASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(155), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(161), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(165), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DASH,
    ACTIONS(177), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [901] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(183), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DASH,
    ACTIONS(187), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_DASH_DASH,
      anon_sym_RPAREN,
  [954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_PIPE,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH,
    ACTIONS(175), 1,
      anon_sym_DASH,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 4,
      anon_sym_machine,
      anon_sym_include,
      anon_sym_import,
      sym_word,
  [1077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_word,
    STATE(67), 1,
      sym_string,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      sym_uint,
    STATE(58), 1,
      sym__mininum,
    STATE(59), 1,
      sym__exactly,
  [1107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_string,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym_string,
    ACTIONS(23), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [1132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      sym_uint,
    STATE(68), 1,
      sym__maximum,
  [1145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(237), 1,
      anon_sym_COLON_EQ,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_uint,
    STATE(63), 1,
      sym__maximum,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SEMI,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [1203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_SEMI,
  [1224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
  [1231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_uint,
  [1252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_word,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_SEMI,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 340,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 435,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 547,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 589,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 631,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 694,
  [SMALL_STATE(25)] = 715,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 775,
  [SMALL_STATE(28)] = 793,
  [SMALL_STATE(29)] = 811,
  [SMALL_STATE(30)] = 827,
  [SMALL_STATE(31)] = 845,
  [SMALL_STATE(32)] = 863,
  [SMALL_STATE(33)] = 886,
  [SMALL_STATE(34)] = 901,
  [SMALL_STATE(35)] = 924,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 954,
  [SMALL_STATE(38)] = 967,
  [SMALL_STATE(39)] = 980,
  [SMALL_STATE(40)] = 993,
  [SMALL_STATE(41)] = 1006,
  [SMALL_STATE(42)] = 1019,
  [SMALL_STATE(43)] = 1032,
  [SMALL_STATE(44)] = 1045,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1077,
  [SMALL_STATE(47)] = 1091,
  [SMALL_STATE(48)] = 1107,
  [SMALL_STATE(49)] = 1121,
  [SMALL_STATE(50)] = 1132,
  [SMALL_STATE(51)] = 1145,
  [SMALL_STATE(52)] = 1155,
  [SMALL_STATE(53)] = 1165,
  [SMALL_STATE(54)] = 1175,
  [SMALL_STATE(55)] = 1182,
  [SMALL_STATE(56)] = 1189,
  [SMALL_STATE(57)] = 1196,
  [SMALL_STATE(58)] = 1203,
  [SMALL_STATE(59)] = 1210,
  [SMALL_STATE(60)] = 1217,
  [SMALL_STATE(61)] = 1224,
  [SMALL_STATE(62)] = 1231,
  [SMALL_STATE(63)] = 1238,
  [SMALL_STATE(64)] = 1245,
  [SMALL_STATE(65)] = 1252,
  [SMALL_STATE(66)] = 1259,
  [SMALL_STATE(67)] = 1266,
  [SMALL_STATE(68)] = 1273,
  [SMALL_STATE(69)] = 1280,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(64),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(18),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(14),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 7), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(64),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(14),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__factor_aug, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__factor_aug, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alphabet_num, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alphabet_num, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 5, .production_id = 15),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 5, .production_id = 15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 3, .production_id = 12),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 3, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 4, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limits, 4, .production_id = 14),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limits, 4, .production_id = 14),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signed, 2, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signed, 2, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_specification_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(51),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(66),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(46),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_specification_repeat1, 2), SHIFT_REPEAT(49),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_specification, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concatenate_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_concatenate_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_join_repeat1, 2, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenate, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenate, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join, 2, .production_id = 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtract, 3, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtract, 3, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intersect, 3, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_intersect, 3, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_combine, 3, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_combine, 3, .production_id = 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_inst, 4, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_inst, 4, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 4, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 4, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_spec, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_spec, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_spec, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_spec, 3, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_decl, 3, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_decl, 3, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_def, 4, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_def, 4, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mininum, 1, .production_id = 9),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exactly, 1, .production_id = 10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__maximum, 1, .production_id = 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
