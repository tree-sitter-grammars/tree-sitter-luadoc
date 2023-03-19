#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_ATclass = 1,
  anon_sym_COLON = 2,
  anon_sym_ATtype = 3,
  anon_sym_ATparam = 4,
  anon_sym_ATalias = 5,
  anon_sym_ATreturn = 6,
  anon_sym_ATfield = 7,
  anon_sym_ATgeneric = 8,
  anon_sym_COMMA = 9,
  anon_sym_ATvararg = 10,
  anon_sym_ATlanguage = 11,
  anon_sym_ATsee = 12,
  anon_sym_public = 13,
  anon_sym_protected = 14,
  anon_sym_private = 15,
  anon_sym_AT = 16,
  anon_sym_extends = 17,
  sym_comment = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_table = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_PIPE = 24,
  anon_sym_fun = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_POUND = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_literal_type_token1 = 30,
  anon_sym_any = 31,
  anon_sym_boolean = 32,
  anon_sym_function = 33,
  anon_sym_CFunction = 34,
  anon_sym_nil = 35,
  anon_sym_number = 36,
  anon_sym_string = 37,
  anon_sym_userdata = 38,
  anon_sym_void = 39,
  sym_identifier = 40,
  sym_documentation = 41,
  sym_class_annotation = 42,
  sym_type_annotation = 43,
  sym_param_annotation = 44,
  sym_alias_annotation = 45,
  sym_return_annotation = 46,
  sym_field_annotation = 47,
  sym_generic_annotation = 48,
  sym_vararg_annotation = 49,
  sym_language_injection = 50,
  sym_see_reference = 51,
  sym_qualifier = 52,
  sym_class_at_comment = 53,
  sym_at_comment = 54,
  sym_type = 55,
  sym_array_type = 56,
  sym_table_type = 57,
  sym_union_type = 58,
  sym_function_type = 59,
  sym_parameter = 60,
  sym_member_type = 61,
  sym_literal_type = 62,
  sym_builtin_type = 63,
  aux_sym_function_type_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATclass] = "@class",
  [anon_sym_COLON] = ":",
  [anon_sym_ATtype] = "@type",
  [anon_sym_ATparam] = "@param",
  [anon_sym_ATalias] = "@alias",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATfield] = "@field",
  [anon_sym_ATgeneric] = "@generic",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATvararg] = "@vararg",
  [anon_sym_ATlanguage] = "@language",
  [anon_sym_ATsee] = "@see",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_AT] = "@",
  [anon_sym_extends] = "extends",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_table] = "table",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_literal_type_token1] = "literal_type_token1",
  [anon_sym_any] = "any",
  [anon_sym_boolean] = "boolean",
  [anon_sym_function] = "function",
  [anon_sym_CFunction] = "CFunction",
  [anon_sym_nil] = "nil",
  [anon_sym_number] = "number",
  [anon_sym_string] = "string",
  [anon_sym_userdata] = "userdata",
  [anon_sym_void] = "void",
  [sym_identifier] = "identifier",
  [sym_documentation] = "documentation",
  [sym_class_annotation] = "class_annotation",
  [sym_type_annotation] = "type_annotation",
  [sym_param_annotation] = "param_annotation",
  [sym_alias_annotation] = "alias_annotation",
  [sym_return_annotation] = "return_annotation",
  [sym_field_annotation] = "field_annotation",
  [sym_generic_annotation] = "generic_annotation",
  [sym_vararg_annotation] = "vararg_annotation",
  [sym_language_injection] = "language_injection",
  [sym_see_reference] = "see_reference",
  [sym_qualifier] = "qualifier",
  [sym_class_at_comment] = "class_at_comment",
  [sym_at_comment] = "at_comment",
  [sym_type] = "type",
  [sym_array_type] = "array_type",
  [sym_table_type] = "table_type",
  [sym_union_type] = "union_type",
  [sym_function_type] = "function_type",
  [sym_parameter] = "parameter",
  [sym_member_type] = "member_type",
  [sym_literal_type] = "literal_type",
  [sym_builtin_type] = "builtin_type",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATclass] = anon_sym_ATclass,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATtype] = anon_sym_ATtype,
  [anon_sym_ATparam] = anon_sym_ATparam,
  [anon_sym_ATalias] = anon_sym_ATalias,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATfield] = anon_sym_ATfield,
  [anon_sym_ATgeneric] = anon_sym_ATgeneric,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATvararg] = anon_sym_ATvararg,
  [anon_sym_ATlanguage] = anon_sym_ATlanguage,
  [anon_sym_ATsee] = anon_sym_ATsee,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_extends] = anon_sym_extends,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_literal_type_token1] = aux_sym_literal_type_token1,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_CFunction] = anon_sym_CFunction,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_userdata] = anon_sym_userdata,
  [anon_sym_void] = anon_sym_void,
  [sym_identifier] = sym_identifier,
  [sym_documentation] = sym_documentation,
  [sym_class_annotation] = sym_class_annotation,
  [sym_type_annotation] = sym_type_annotation,
  [sym_param_annotation] = sym_param_annotation,
  [sym_alias_annotation] = sym_alias_annotation,
  [sym_return_annotation] = sym_return_annotation,
  [sym_field_annotation] = sym_field_annotation,
  [sym_generic_annotation] = sym_generic_annotation,
  [sym_vararg_annotation] = sym_vararg_annotation,
  [sym_language_injection] = sym_language_injection,
  [sym_see_reference] = sym_see_reference,
  [sym_qualifier] = sym_qualifier,
  [sym_class_at_comment] = sym_class_at_comment,
  [sym_at_comment] = sym_at_comment,
  [sym_type] = sym_type,
  [sym_array_type] = sym_array_type,
  [sym_table_type] = sym_table_type,
  [sym_union_type] = sym_union_type,
  [sym_function_type] = sym_function_type,
  [sym_parameter] = sym_parameter,
  [sym_member_type] = sym_member_type,
  [sym_literal_type] = sym_literal_type,
  [sym_builtin_type] = sym_builtin_type,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATreturn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATfield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATgeneric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATvararg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlanguage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CFunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_userdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_param_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_return_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_field_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_vararg_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_language_injection] = {
    .visible = true,
    .named = true,
  },
  [sym_see_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_at_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_at_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_table_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_member_type] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 2},
    {field_value, 4},
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 2,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 7,
  [16] = 16,
  [17] = 12,
  [18] = 7,
  [19] = 3,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 2,
  [24] = 4,
  [25] = 25,
  [26] = 12,
  [27] = 4,
  [28] = 8,
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
  [42] = 35,
  [43] = 43,
  [44] = 43,
  [45] = 36,
  [46] = 46,
  [47] = 47,
  [48] = 37,
  [49] = 38,
  [50] = 39,
  [51] = 40,
  [52] = 41,
  [53] = 46,
  [54] = 47,
  [55] = 55,
  [56] = 41,
  [57] = 35,
  [58] = 39,
  [59] = 59,
  [60] = 38,
  [61] = 61,
  [62] = 62,
  [63] = 40,
  [64] = 43,
  [65] = 37,
  [66] = 47,
  [67] = 67,
  [68] = 36,
  [69] = 46,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 70,
  [74] = 70,
  [75] = 71,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 78,
  [88] = 82,
  [89] = 81,
  [90] = 82,
  [91] = 81,
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
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 99,
  [133] = 127,
  [134] = 119,
  [135] = 111,
  [136] = 136,
  [137] = 103,
  [138] = 130,
  [139] = 99,
  [140] = 127,
  [141] = 119,
  [142] = 111,
  [143] = 143,
  [144] = 103,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 145,
  [150] = 145,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 151,
  [156] = 156,
  [157] = 151,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 152,
  [162] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(207);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'v') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'g') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 123:
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(126)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 127:
      if (eof) ADVANCE(137);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '(') ADVANCE(183);
      if (lookahead == ')') ADVANCE(184);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '<') ADVANCE(178);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      END_STATE();
    case 128:
      if (eof) ADVANCE(137);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(128)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 129:
      if (eof) ADVANCE(137);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(129)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 130:
      if (eof) ADVANCE(137);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(130)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 131:
      if (eof) ADVANCE(137);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(131)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 132:
      if (eof) ADVANCE(137);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(132)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 133:
      if (eof) ADVANCE(137);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(133)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 134:
      if (eof) ADVANCE(137);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(134)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 135:
      if (eof) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(135)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(136)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATclass);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATtype);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATalias);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATfield);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATgeneric);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATvararg);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ATlanguage);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == '|') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '@') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(126)
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_CFunction);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_CFunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_userdata);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_userdata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 128},
  [30] = {.lex_state = 128},
  [31] = {.lex_state = 128},
  [32] = {.lex_state = 128},
  [33] = {.lex_state = 128},
  [34] = {.lex_state = 128},
  [35] = {.lex_state = 128},
  [36] = {.lex_state = 128},
  [37] = {.lex_state = 128},
  [38] = {.lex_state = 128},
  [39] = {.lex_state = 128},
  [40] = {.lex_state = 128},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 128},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 128},
  [53] = {.lex_state = 128},
  [54] = {.lex_state = 128},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 129},
  [57] = {.lex_state = 129},
  [58] = {.lex_state = 129},
  [59] = {.lex_state = 129},
  [60] = {.lex_state = 129},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 129},
  [63] = {.lex_state = 129},
  [64] = {.lex_state = 129},
  [65] = {.lex_state = 129},
  [66] = {.lex_state = 129},
  [67] = {.lex_state = 132},
  [68] = {.lex_state = 129},
  [69] = {.lex_state = 129},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 130},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 134},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 133},
  [80] = {.lex_state = 131},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 133},
  [86] = {.lex_state = 135},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 136},
  [93] = {.lex_state = 136},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 136},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 136},
  [98] = {.lex_state = 136},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 187},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 187},
  [150] = {.lex_state = 187},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_CFunction] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_userdata] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
  },
  [1] = {
    [sym_documentation] = STATE(154),
    [sym_class_annotation] = STATE(153),
    [sym_type_annotation] = STATE(153),
    [sym_param_annotation] = STATE(153),
    [sym_alias_annotation] = STATE(153),
    [sym_return_annotation] = STATE(153),
    [sym_field_annotation] = STATE(153),
    [sym_generic_annotation] = STATE(153),
    [sym_vararg_annotation] = STATE(153),
    [sym_language_injection] = STATE(153),
    [sym_see_reference] = STATE(153),
    [anon_sym_ATclass] = ACTIONS(3),
    [anon_sym_ATtype] = ACTIONS(5),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(9),
    [anon_sym_ATreturn] = ACTIONS(11),
    [anon_sym_ATfield] = ACTIONS(13),
    [anon_sym_ATgeneric] = ACTIONS(15),
    [anon_sym_ATvararg] = ACTIONS(17),
    [anon_sym_ATlanguage] = ACTIONS(19),
    [anon_sym_ATsee] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(54), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [36] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(38), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [72] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(76), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [108] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(60), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [144] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(29), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [180] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(44), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [216] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(36), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [252] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(62), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [288] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(66), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [324] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(59), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [360] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(73), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [396] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(68), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [432] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(32), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [468] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(43), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [504] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(55), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [540] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(74), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [576] = 7,
    ACTIONS(43), 1,
      anon_sym_table,
    ACTIONS(45), 1,
      anon_sym_fun,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(64), 1,
      sym_type,
    STATE(57), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(49), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [612] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(49), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [648] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(31), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [684] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(30), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [720] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(33), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [756] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(47), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [792] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(75), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [828] = 7,
    ACTIONS(23), 1,
      anon_sym_table,
    ACTIONS(25), 1,
      anon_sym_fun,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type,
    STATE(35), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(29), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [864] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(70), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [900] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(71), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [936] = 7,
    ACTIONS(33), 1,
      anon_sym_table,
    ACTIONS(35), 1,
      anon_sym_fun,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(45), 1,
      sym_type,
    STATE(42), 7,
      sym_array_type,
      sym_table_type,
      sym_union_type,
      sym_function_type,
      sym_member_type,
      sym_literal_type,
      sym_builtin_type,
    ACTIONS(39), 9,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_function,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
  [972] = 7,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_at_comment,
  [994] = 7,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_comment,
    STATE(117), 1,
      sym_at_comment,
  [1016] = 7,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_comment,
    STATE(109), 1,
      sym_at_comment,
  [1038] = 7,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_comment,
    STATE(128), 1,
      sym_at_comment,
  [1060] = 7,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_comment,
    STATE(116), 1,
      sym_at_comment,
  [1082] = 7,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_comment,
    STATE(115), 1,
      sym_at_comment,
  [1104] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1115] = 5,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 2,
      anon_sym_AT,
      sym_comment,
  [1132] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1143] = 5,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      anon_sym_AT,
      sym_comment,
  [1160] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1171] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1182] = 1,
    ACTIONS(109), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1191] = 1,
    ACTIONS(85), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1200] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(111), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1215] = 5,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 2,
      anon_sym_AT,
      sym_comment,
  [1232] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1247] = 1,
    ACTIONS(121), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1256] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(123), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1271] = 1,
    ACTIONS(93), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1280] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RPAREN,
  [1295] = 1,
    ACTIONS(101), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1304] = 1,
    ACTIONS(105), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
  [1313] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1324] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 5,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1335] = 5,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 2,
      anon_sym_AT,
      sym_comment,
  [1352] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1366] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1376] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1386] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1396] = 5,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
  [1412] = 5,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
  [1428] = 3,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(147), 1,
      sym_qualifier,
    ACTIONS(143), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [1440] = 5,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym_comment,
  [1456] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1466] = 5,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
  [1482] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1492] = 5,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
  [1508] = 5,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(157), 1,
      sym_comment,
    STATE(136), 1,
      sym_class_at_comment,
  [1524] = 5,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_POUND,
  [1540] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [1550] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(159), 1,
      anon_sym_GT,
  [1563] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      anon_sym_COMMA,
  [1576] = 4,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      sym_comment,
  [1589] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_GT,
  [1602] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_GT,
  [1615] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_COMMA,
  [1628] = 4,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_PIPE,
    ACTIONS(117), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_COMMA,
  [1641] = 4,
    ACTIONS(155), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym_comment,
    STATE(114), 1,
      sym_class_at_comment,
  [1654] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_type_repeat1,
  [1664] = 3,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      sym_comment,
  [1674] = 3,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_COMMA,
  [1684] = 3,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(90), 1,
      sym_parameter,
  [1694] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_function_type_repeat1,
  [1704] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_type_repeat1,
  [1714] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_type_repeat1,
  [1724] = 3,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      sym_comment,
  [1734] = 3,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      anon_sym_extends,
    ACTIONS(218), 1,
      sym_comment,
  [1744] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_function_type_repeat1,
  [1754] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_function_type_repeat1,
  [1764] = 3,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_parameter,
  [1774] = 3,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_function_type_repeat1,
  [1784] = 3,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_parameter,
  [1794] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym_comment,
  [1801] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      sym_comment,
  [1808] = 1,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1813] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym_comment,
  [1820] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(94), 1,
      sym_parameter,
  [1827] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 1,
      sym_comment,
  [1834] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym_comment,
  [1841] = 1,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
  [1845] = 1,
    ACTIONS(250), 1,
      sym_identifier,
  [1849] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1853] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [1857] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [1861] = 1,
    ACTIONS(258), 1,
      sym_identifier,
  [1865] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1869] = 1,
    ACTIONS(262), 1,
      sym_identifier,
  [1873] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1877] = 1,
    ACTIONS(266), 1,
      sym_identifier,
  [1881] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1885] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1889] = 1,
    ACTIONS(272), 1,
      anon_sym_COLON,
  [1893] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1897] = 1,
    ACTIONS(276), 1,
      sym_identifier,
  [1901] = 1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1905] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [1909] = 1,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [1913] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1917] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1921] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1925] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [1929] = 1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [1933] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [1937] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
  [1941] = 1,
    ACTIONS(296), 1,
      sym_identifier,
  [1945] = 1,
    ACTIONS(298), 1,
      sym_identifier,
  [1949] = 1,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
  [1953] = 1,
    ACTIONS(302), 1,
      sym_identifier,
  [1957] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
  [1961] = 1,
    ACTIONS(306), 1,
      sym_identifier,
  [1965] = 1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
  [1969] = 1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
  [1973] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
  [1977] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [1981] = 1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1985] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1989] = 1,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
  [1993] = 1,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [1997] = 1,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
  [2001] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
  [2005] = 1,
    ACTIONS(328), 1,
      sym_identifier,
  [2009] = 1,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [2013] = 1,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [2017] = 1,
    ACTIONS(334), 1,
      sym_identifier,
  [2021] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON,
  [2025] = 1,
    ACTIONS(338), 1,
      aux_sym_literal_type_token1,
  [2029] = 1,
    ACTIONS(340), 1,
      sym_identifier,
  [2033] = 1,
    ACTIONS(342), 1,
      sym_identifier,
  [2037] = 1,
    ACTIONS(344), 1,
      sym_identifier,
  [2041] = 1,
    ACTIONS(346), 1,
      aux_sym_literal_type_token1,
  [2045] = 1,
    ACTIONS(348), 1,
      aux_sym_literal_type_token1,
  [2049] = 1,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
  [2053] = 1,
    ACTIONS(352), 1,
      anon_sym_LT,
  [2057] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [2061] = 1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [2065] = 1,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
  [2069] = 1,
    ACTIONS(360), 1,
      sym_identifier,
  [2073] = 1,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [2077] = 1,
    ACTIONS(364), 1,
      sym_identifier,
  [2081] = 1,
    ACTIONS(366), 1,
      sym_identifier,
  [2085] = 1,
    ACTIONS(368), 1,
      sym_identifier,
  [2089] = 1,
    ACTIONS(370), 1,
      anon_sym_LT,
  [2093] = 1,
    ACTIONS(372), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 504,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 648,
  [SMALL_STATE(21)] = 684,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 756,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 828,
  [SMALL_STATE(26)] = 864,
  [SMALL_STATE(27)] = 900,
  [SMALL_STATE(28)] = 936,
  [SMALL_STATE(29)] = 972,
  [SMALL_STATE(30)] = 994,
  [SMALL_STATE(31)] = 1016,
  [SMALL_STATE(32)] = 1038,
  [SMALL_STATE(33)] = 1060,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1104,
  [SMALL_STATE(36)] = 1115,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1143,
  [SMALL_STATE(39)] = 1160,
  [SMALL_STATE(40)] = 1171,
  [SMALL_STATE(41)] = 1182,
  [SMALL_STATE(42)] = 1191,
  [SMALL_STATE(43)] = 1200,
  [SMALL_STATE(44)] = 1215,
  [SMALL_STATE(45)] = 1232,
  [SMALL_STATE(46)] = 1247,
  [SMALL_STATE(47)] = 1256,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1280,
  [SMALL_STATE(50)] = 1295,
  [SMALL_STATE(51)] = 1304,
  [SMALL_STATE(52)] = 1313,
  [SMALL_STATE(53)] = 1324,
  [SMALL_STATE(54)] = 1335,
  [SMALL_STATE(55)] = 1352,
  [SMALL_STATE(56)] = 1366,
  [SMALL_STATE(57)] = 1376,
  [SMALL_STATE(58)] = 1386,
  [SMALL_STATE(59)] = 1396,
  [SMALL_STATE(60)] = 1412,
  [SMALL_STATE(61)] = 1428,
  [SMALL_STATE(62)] = 1440,
  [SMALL_STATE(63)] = 1456,
  [SMALL_STATE(64)] = 1466,
  [SMALL_STATE(65)] = 1482,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1508,
  [SMALL_STATE(68)] = 1524,
  [SMALL_STATE(69)] = 1540,
  [SMALL_STATE(70)] = 1550,
  [SMALL_STATE(71)] = 1563,
  [SMALL_STATE(72)] = 1576,
  [SMALL_STATE(73)] = 1589,
  [SMALL_STATE(74)] = 1602,
  [SMALL_STATE(75)] = 1615,
  [SMALL_STATE(76)] = 1628,
  [SMALL_STATE(77)] = 1641,
  [SMALL_STATE(78)] = 1654,
  [SMALL_STATE(79)] = 1664,
  [SMALL_STATE(80)] = 1674,
  [SMALL_STATE(81)] = 1684,
  [SMALL_STATE(82)] = 1694,
  [SMALL_STATE(83)] = 1704,
  [SMALL_STATE(84)] = 1714,
  [SMALL_STATE(85)] = 1724,
  [SMALL_STATE(86)] = 1734,
  [SMALL_STATE(87)] = 1744,
  [SMALL_STATE(88)] = 1754,
  [SMALL_STATE(89)] = 1764,
  [SMALL_STATE(90)] = 1774,
  [SMALL_STATE(91)] = 1784,
  [SMALL_STATE(92)] = 1794,
  [SMALL_STATE(93)] = 1801,
  [SMALL_STATE(94)] = 1808,
  [SMALL_STATE(95)] = 1813,
  [SMALL_STATE(96)] = 1820,
  [SMALL_STATE(97)] = 1827,
  [SMALL_STATE(98)] = 1834,
  [SMALL_STATE(99)] = 1841,
  [SMALL_STATE(100)] = 1845,
  [SMALL_STATE(101)] = 1849,
  [SMALL_STATE(102)] = 1853,
  [SMALL_STATE(103)] = 1857,
  [SMALL_STATE(104)] = 1861,
  [SMALL_STATE(105)] = 1865,
  [SMALL_STATE(106)] = 1869,
  [SMALL_STATE(107)] = 1873,
  [SMALL_STATE(108)] = 1877,
  [SMALL_STATE(109)] = 1881,
  [SMALL_STATE(110)] = 1885,
  [SMALL_STATE(111)] = 1889,
  [SMALL_STATE(112)] = 1893,
  [SMALL_STATE(113)] = 1897,
  [SMALL_STATE(114)] = 1901,
  [SMALL_STATE(115)] = 1905,
  [SMALL_STATE(116)] = 1909,
  [SMALL_STATE(117)] = 1913,
  [SMALL_STATE(118)] = 1917,
  [SMALL_STATE(119)] = 1921,
  [SMALL_STATE(120)] = 1925,
  [SMALL_STATE(121)] = 1929,
  [SMALL_STATE(122)] = 1933,
  [SMALL_STATE(123)] = 1937,
  [SMALL_STATE(124)] = 1941,
  [SMALL_STATE(125)] = 1945,
  [SMALL_STATE(126)] = 1949,
  [SMALL_STATE(127)] = 1953,
  [SMALL_STATE(128)] = 1957,
  [SMALL_STATE(129)] = 1961,
  [SMALL_STATE(130)] = 1965,
  [SMALL_STATE(131)] = 1969,
  [SMALL_STATE(132)] = 1973,
  [SMALL_STATE(133)] = 1977,
  [SMALL_STATE(134)] = 1981,
  [SMALL_STATE(135)] = 1985,
  [SMALL_STATE(136)] = 1989,
  [SMALL_STATE(137)] = 1993,
  [SMALL_STATE(138)] = 1997,
  [SMALL_STATE(139)] = 2001,
  [SMALL_STATE(140)] = 2005,
  [SMALL_STATE(141)] = 2009,
  [SMALL_STATE(142)] = 2013,
  [SMALL_STATE(143)] = 2017,
  [SMALL_STATE(144)] = 2021,
  [SMALL_STATE(145)] = 2025,
  [SMALL_STATE(146)] = 2029,
  [SMALL_STATE(147)] = 2033,
  [SMALL_STATE(148)] = 2037,
  [SMALL_STATE(149)] = 2041,
  [SMALL_STATE(150)] = 2045,
  [SMALL_STATE(151)] = 2049,
  [SMALL_STATE(152)] = 2053,
  [SMALL_STATE(153)] = 2057,
  [SMALL_STATE(154)] = 2061,
  [SMALL_STATE(155)] = 2065,
  [SMALL_STATE(156)] = 2069,
  [SMALL_STATE(157)] = 2073,
  [SMALL_STATE(158)] = 2077,
  [SMALL_STATE(159)] = 2081,
  [SMALL_STATE(160)] = 2085,
  [SMALL_STATE(161)] = 2089,
  [SMALL_STATE(162)] = 2093,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_type, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_type, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_type, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 6, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 6, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(96),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 6),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 8),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 9),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 1),
  [356] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_luadoc(void) {
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
