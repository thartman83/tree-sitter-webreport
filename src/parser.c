#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym__ = 1,
  sym__begin_tag = 2,
  sym__end_tag = 3,
  sym__parameter_tag_prefix = 4,
  sym__constant_tag_prefix = 5,
  sym__variable_tag_prefix = 6,
  sym__column_tag_prefix = 7,
  sym__webreport = 8,
  sym__reptag = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym__quote = 12,
  sym__dblquote = 13,
  sym__whitespace = 14,
  sym_source_file = 15,
  sym__definition = 16,
  sym__reptag_definition = 17,
  sym__main_tag = 18,
  sym_parameter_tag = 19,
  sym_constant_tag = 20,
  sym_variable_tag = 21,
  sym_column_tag = 22,
  sym_column_index_tag = 23,
  sym_literal_quote_tag = 24,
  sym_literal_dblquote_tag = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_literal_quote_tag_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym__] = "_",
  [sym__begin_tag] = "_begin_tag",
  [sym__end_tag] = "_end_tag",
  [sym__parameter_tag_prefix] = "_parameter_tag_prefix",
  [sym__constant_tag_prefix] = "_constant_tag_prefix",
  [sym__variable_tag_prefix] = "_variable_tag_prefix",
  [sym__column_tag_prefix] = "_column_tag_prefix",
  [sym__webreport] = "_webreport",
  [sym__reptag] = "_reptag",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__quote] = "_quote",
  [sym__dblquote] = "_dblquote",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__reptag_definition] = "_reptag_definition",
  [sym__main_tag] = "_main_tag",
  [sym_parameter_tag] = "parameter_tag",
  [sym_constant_tag] = "constant_tag",
  [sym_variable_tag] = "variable_tag",
  [sym_column_tag] = "column_tag",
  [sym_column_index_tag] = "column_index_tag",
  [sym_literal_quote_tag] = "literal_quote_tag",
  [sym_literal_dblquote_tag] = "literal_dblquote_tag",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_literal_quote_tag_repeat1] = "literal_quote_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym__] = anon_sym__,
  [sym__begin_tag] = sym__begin_tag,
  [sym__end_tag] = sym__end_tag,
  [sym__parameter_tag_prefix] = sym__parameter_tag_prefix,
  [sym__constant_tag_prefix] = sym__constant_tag_prefix,
  [sym__variable_tag_prefix] = sym__variable_tag_prefix,
  [sym__column_tag_prefix] = sym__column_tag_prefix,
  [sym__webreport] = sym__webreport,
  [sym__reptag] = sym__reptag,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym__quote] = sym__quote,
  [sym__dblquote] = sym__dblquote,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__reptag_definition] = sym__reptag_definition,
  [sym__main_tag] = sym__main_tag,
  [sym_parameter_tag] = sym_parameter_tag,
  [sym_constant_tag] = sym_constant_tag,
  [sym_variable_tag] = sym_variable_tag,
  [sym_column_tag] = sym_column_tag,
  [sym_column_index_tag] = sym_column_index_tag,
  [sym_literal_quote_tag] = sym_literal_quote_tag,
  [sym_literal_dblquote_tag] = sym_literal_dblquote_tag,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_literal_quote_tag_repeat1] = aux_sym_literal_quote_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__begin_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_tag_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__constant_tag_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_tag_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__column_tag_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__webreport] = {
    .visible = false,
    .named = true,
  },
  [sym__reptag] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [sym__dblquote] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__reptag_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__main_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_column_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_column_index_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_quote_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_dblquote_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_quote_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_column_index = 1,
  field_column_name = 2,
  field_constant_name = 3,
  field_literal_value = 4,
  field_parameter_name = 5,
  field_variable_name = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_column_index] = "column_index",
  [field_column_name] = "column_name",
  [field_constant_name] = "constant_name",
  [field_literal_value] = "literal_value",
  [field_parameter_name] = "parameter_name",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_column_index, 1},
  [1] =
    {field_parameter_name, 1},
  [2] =
    {field_constant_name, 1},
  [3] =
    {field_variable_name, 1},
  [4] =
    {field_column_name, 1},
  [5] =
    {field_literal_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 39,
        '\'', 38,
        '/', 10,
        '=', 19,
        'R', 25,
        'W', 26,
        '[', 6,
        '_', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'P') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'T') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '&') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__begin_tag);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__end_tag);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__parameter_tag_prefix);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__constant_tag_prefix);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__variable_tag_prefix);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__column_tag_prefix);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__webreport);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__reptag);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__reptag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(28);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__dblquote);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym__begin_tag] = ACTIONS(1),
    [sym__end_tag] = ACTIONS(1),
    [sym__parameter_tag_prefix] = ACTIONS(1),
    [sym__constant_tag_prefix] = ACTIONS(1),
    [sym__variable_tag_prefix] = ACTIONS(1),
    [sym__column_tag_prefix] = ACTIONS(1),
    [sym__webreport] = ACTIONS(1),
    [sym__reptag] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [sym__dblquote] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__definition] = STATE(4),
    [sym__reptag_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__begin_tag] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym__,
    ACTIONS(9), 1,
      sym__parameter_tag_prefix,
    ACTIONS(11), 1,
      sym__constant_tag_prefix,
    ACTIONS(13), 1,
      sym__variable_tag_prefix,
    ACTIONS(15), 1,
      sym__column_tag_prefix,
    STATE(14), 8,
      sym__main_tag,
      sym_parameter_tag,
      sym_constant_tag,
      sym_variable_tag,
      sym_column_tag,
      sym_column_index_tag,
      sym_literal_quote_tag,
      sym_literal_dblquote_tag,
  [26] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym__begin_tag,
    STATE(3), 3,
      sym__definition,
      sym__reptag_definition,
      aux_sym_source_file_repeat1,
  [38] = 3,
    ACTIONS(5), 1,
      sym__begin_tag,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym__reptag_definition,
      aux_sym_source_file_repeat1,
  [50] = 3,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym_literal_quote_tag_repeat1,
    ACTIONS(27), 2,
      sym__quote,
      sym__dblquote,
  [61] = 3,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym__quote,
    STATE(10), 1,
      aux_sym_literal_quote_tag_repeat1,
  [71] = 3,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__dblquote,
    STATE(9), 1,
      aux_sym_literal_quote_tag_repeat1,
  [81] = 3,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      sym__quote,
    ACTIONS(41), 1,
      sym__dblquote,
  [91] = 3,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym__dblquote,
    STATE(5), 1,
      aux_sym_literal_quote_tag_repeat1,
  [101] = 3,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym__quote,
    STATE(5), 1,
      aux_sym_literal_quote_tag_repeat1,
  [111] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__begin_tag,
  [116] = 1,
    ACTIONS(51), 1,
      sym_identifier,
  [120] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(55), 1,
      sym__whitespace,
  [128] = 1,
    ACTIONS(57), 1,
      sym__whitespace,
  [132] = 1,
    ACTIONS(59), 1,
      sym__whitespace,
  [136] = 1,
    ACTIONS(61), 1,
      sym__whitespace,
  [140] = 1,
    ACTIONS(63), 1,
      sym__whitespace,
  [144] = 1,
    ACTIONS(65), 1,
      sym__whitespace,
  [148] = 1,
    ACTIONS(67), 1,
      sym__end_tag,
  [152] = 1,
    ACTIONS(69), 1,
      sym__whitespace,
  [156] = 1,
    ACTIONS(71), 1,
      sym_identifier,
  [160] = 1,
    ACTIONS(73), 1,
      sym__whitespace,
  [164] = 1,
    ACTIONS(75), 1,
      sym_identifier,
  [168] = 1,
    ACTIONS(77), 1,
      sym_identifier,
  [172] = 1,
    ACTIONS(79), 1,
      sym__whitespace,
  [176] = 1,
    ACTIONS(81), 1,
      sym__reptag,
  [180] = 1,
    ACTIONS(83), 1,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 101,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 140,
  [SMALL_STATE(19)] = 144,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 152,
  [SMALL_STATE(22)] = 156,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 164,
  [SMALL_STATE(25)] = 168,
  [SMALL_STATE(26)] = 172,
  [SMALL_STATE(27)] = 176,
  [SMALL_STATE(28)] = 180,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_quote_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_quote_tag_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reptag_definition, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_index_tag, 2, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_tag, 2, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_tag, 2, 0, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_tag, 2, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_tag, 2, 0, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_quote_tag, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_dblquote_tag, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_quote_tag, 4, 0, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_dblquote_tag, 4, 0, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_webreport(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
