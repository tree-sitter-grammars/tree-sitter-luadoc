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
#define STATE_COUNT 510
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_ATclass = 1,
  anon_sym_COLON = 2,
  anon_sym_ATtype = 3,
  anon_sym_COMMA = 4,
  anon_sym_ATparam = 5,
  anon_sym_DOT_DOT_DOT = 6,
  anon_sym_QMARK = 7,
  anon_sym_ATalias = 8,
  anon_sym_ATreturn = 9,
  anon_sym_ATfield = 10,
  anon_sym_ATpublic = 11,
  anon_sym_ATprotected = 12,
  anon_sym_ATprivate = 13,
  anon_sym_ATgeneric = 14,
  anon_sym_ATvararg = 15,
  anon_sym_ATdiagnostic = 16,
  anon_sym_ATdeprecated = 17,
  anon_sym_ATcast = 18,
  anon_sym_ATasync = 19,
  anon_sym_AToverload = 20,
  anon_sym_ATenum = 21,
  anon_sym_ATlanguage = 22,
  anon_sym_ATsee = 23,
  anon_sym_public = 24,
  anon_sym_protected = 25,
  anon_sym_private = 26,
  anon_sym_AT = 27,
  anon_sym_extends = 28,
  sym_comment = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_table = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACK2 = 36,
  anon_sym_RBRACE = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_fun = 41,
  anon_sym_function = 42,
  anon_sym_self = 43,
  anon_sym_POUND = 44,
  anon_sym_DOT = 45,
  anon_sym_DQUOTE = 46,
  aux_sym_literal_type_token1 = 47,
  anon_sym_any = 48,
  anon_sym_boolean = 49,
  anon_sym_CFunction = 50,
  anon_sym_nil = 51,
  anon_sym_number = 52,
  anon_sym_string = 53,
  anon_sym_userdata = 54,
  anon_sym_void = 55,
  sym_number = 56,
  sym_identifier = 57,
  sym_diagnostic_identifier = 58,
  sym_documentation = 59,
  sym_class_annotation = 60,
  sym_type_annotation = 61,
  sym_param_annotation = 62,
  sym_alias_annotation = 63,
  sym_return_annotation = 64,
  sym_field_annotation = 65,
  sym_qualifier_annotation = 66,
  sym_generic_annotation = 67,
  sym_vararg_annotation = 68,
  sym_diagnostic_annotation = 69,
  sym_deprecated_annotation = 70,
  sym_cast_annotation = 71,
  sym_async_annotation = 72,
  sym_overload_annotation = 73,
  sym_enum_annotation = 74,
  sym_language_injection = 75,
  sym_see_reference = 76,
  sym_qualifier = 77,
  sym_class_at_comment = 78,
  sym_at_comment = 79,
  sym_type = 80,
  sym_array_type = 81,
  sym_table_type = 82,
  sym_table_literal_type = 83,
  sym_union_type = 84,
  sym_parenthesized_type = 85,
  sym_function_type = 86,
  sym_parameter = 87,
  sym_member_type = 88,
  sym_optional_type = 89,
  sym_literal_type = 90,
  sym_builtin_type = 91,
  sym_positional_field = 92,
  aux_sym_type_annotation_repeat1 = 93,
  aux_sym_table_literal_type_repeat1 = 94,
  aux_sym_function_type_repeat1 = 95,
  aux_sym_function_type_repeat2 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATclass] = "@class",
  [anon_sym_COLON] = ":",
  [anon_sym_ATtype] = "@type",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATparam] = "@param",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_QMARK] = "\?",
  [anon_sym_ATalias] = "@alias",
  [anon_sym_ATreturn] = "@return",
  [anon_sym_ATfield] = "@field",
  [anon_sym_ATpublic] = "@public",
  [anon_sym_ATprotected] = "@protected",
  [anon_sym_ATprivate] = "@private",
  [anon_sym_ATgeneric] = "@generic",
  [anon_sym_ATvararg] = "@vararg",
  [anon_sym_ATdiagnostic] = "@diagnostic",
  [anon_sym_ATdeprecated] = "@deprecated",
  [anon_sym_ATcast] = "@cast",
  [anon_sym_ATasync] = "@async",
  [anon_sym_AToverload] = "@overload",
  [anon_sym_ATenum] = "@enum",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fun] = "fun",
  [anon_sym_function] = "function",
  [anon_sym_self] = "self",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_literal_type_token1] = "literal_type_token1",
  [anon_sym_any] = "any",
  [anon_sym_boolean] = "boolean",
  [anon_sym_CFunction] = "CFunction",
  [anon_sym_nil] = "nil",
  [anon_sym_number] = "number",
  [anon_sym_string] = "string",
  [anon_sym_userdata] = "userdata",
  [anon_sym_void] = "void",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_diagnostic_identifier] = "diagnostic_identifier",
  [sym_documentation] = "documentation",
  [sym_class_annotation] = "class_annotation",
  [sym_type_annotation] = "type_annotation",
  [sym_param_annotation] = "param_annotation",
  [sym_alias_annotation] = "alias_annotation",
  [sym_return_annotation] = "return_annotation",
  [sym_field_annotation] = "field_annotation",
  [sym_qualifier_annotation] = "qualifier_annotation",
  [sym_generic_annotation] = "generic_annotation",
  [sym_vararg_annotation] = "vararg_annotation",
  [sym_diagnostic_annotation] = "diagnostic_annotation",
  [sym_deprecated_annotation] = "deprecated_annotation",
  [sym_cast_annotation] = "cast_annotation",
  [sym_async_annotation] = "async_annotation",
  [sym_overload_annotation] = "overload_annotation",
  [sym_enum_annotation] = "enum_annotation",
  [sym_language_injection] = "language_injection",
  [sym_see_reference] = "see_reference",
  [sym_qualifier] = "qualifier",
  [sym_class_at_comment] = "class_at_comment",
  [sym_at_comment] = "at_comment",
  [sym_type] = "type",
  [sym_array_type] = "array_type",
  [sym_table_type] = "table_type",
  [sym_table_literal_type] = "table_literal_type",
  [sym_union_type] = "union_type",
  [sym_parenthesized_type] = "parenthesized_type",
  [sym_function_type] = "function_type",
  [sym_parameter] = "parameter",
  [sym_member_type] = "member_type",
  [sym_optional_type] = "optional_type",
  [sym_literal_type] = "literal_type",
  [sym_builtin_type] = "builtin_type",
  [sym_positional_field] = "positional_field",
  [aux_sym_type_annotation_repeat1] = "type_annotation_repeat1",
  [aux_sym_table_literal_type_repeat1] = "table_literal_type_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
  [aux_sym_function_type_repeat2] = "function_type_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATclass] = anon_sym_ATclass,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ATtype] = anon_sym_ATtype,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATparam] = anon_sym_ATparam,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_ATalias] = anon_sym_ATalias,
  [anon_sym_ATreturn] = anon_sym_ATreturn,
  [anon_sym_ATfield] = anon_sym_ATfield,
  [anon_sym_ATpublic] = anon_sym_ATpublic,
  [anon_sym_ATprotected] = anon_sym_ATprotected,
  [anon_sym_ATprivate] = anon_sym_ATprivate,
  [anon_sym_ATgeneric] = anon_sym_ATgeneric,
  [anon_sym_ATvararg] = anon_sym_ATvararg,
  [anon_sym_ATdiagnostic] = anon_sym_ATdiagnostic,
  [anon_sym_ATdeprecated] = anon_sym_ATdeprecated,
  [anon_sym_ATcast] = anon_sym_ATcast,
  [anon_sym_ATasync] = anon_sym_ATasync,
  [anon_sym_AToverload] = anon_sym_AToverload,
  [anon_sym_ATenum] = anon_sym_ATenum,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_literal_type_token1] = aux_sym_literal_type_token1,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_CFunction] = anon_sym_CFunction,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_userdata] = anon_sym_userdata,
  [anon_sym_void] = anon_sym_void,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_diagnostic_identifier] = sym_diagnostic_identifier,
  [sym_documentation] = sym_documentation,
  [sym_class_annotation] = sym_class_annotation,
  [sym_type_annotation] = sym_type_annotation,
  [sym_param_annotation] = sym_param_annotation,
  [sym_alias_annotation] = sym_alias_annotation,
  [sym_return_annotation] = sym_return_annotation,
  [sym_field_annotation] = sym_field_annotation,
  [sym_qualifier_annotation] = sym_qualifier_annotation,
  [sym_generic_annotation] = sym_generic_annotation,
  [sym_vararg_annotation] = sym_vararg_annotation,
  [sym_diagnostic_annotation] = sym_diagnostic_annotation,
  [sym_deprecated_annotation] = sym_deprecated_annotation,
  [sym_cast_annotation] = sym_cast_annotation,
  [sym_async_annotation] = sym_async_annotation,
  [sym_overload_annotation] = sym_overload_annotation,
  [sym_enum_annotation] = sym_enum_annotation,
  [sym_language_injection] = sym_language_injection,
  [sym_see_reference] = sym_see_reference,
  [sym_qualifier] = sym_qualifier,
  [sym_class_at_comment] = sym_class_at_comment,
  [sym_at_comment] = sym_at_comment,
  [sym_type] = sym_type,
  [sym_array_type] = sym_array_type,
  [sym_table_type] = sym_table_type,
  [sym_table_literal_type] = sym_table_literal_type,
  [sym_union_type] = sym_union_type,
  [sym_parenthesized_type] = sym_parenthesized_type,
  [sym_function_type] = sym_function_type,
  [sym_parameter] = sym_parameter,
  [sym_member_type] = sym_member_type,
  [sym_optional_type] = sym_optional_type,
  [sym_literal_type] = sym_literal_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_positional_field] = sym_positional_field,
  [aux_sym_type_annotation_repeat1] = aux_sym_type_annotation_repeat1,
  [aux_sym_table_literal_type_repeat1] = aux_sym_table_literal_type_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
  [aux_sym_function_type_repeat2] = aux_sym_function_type_repeat2,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_ATpublic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATprotected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATprivate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATgeneric] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATvararg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdiagnostic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdeprecated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATasync] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AToverload] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenum] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_diagnostic_identifier] = {
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
  [sym_qualifier_annotation] = {
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
  [sym_diagnostic_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_deprecated_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_async_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_overload_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_annotation] = {
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
  [sym_table_literal_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_type] = {
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
  [sym_optional_type] = {
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
  [sym_positional_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_type_annotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_literal_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_field = 1,
  field_key = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_field] = "field",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 4},
  [9] = {.index = 17, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 2},
  [1] =
    {field_field, 1},
  [2] =
    {field_key, 2},
    {field_value, 4},
  [4] =
    {field_field, 1},
    {field_field, 4, .inherited = true},
  [6] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [8] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [11] =
    {field_field, 1},
    {field_field, 5, .inherited = true},
  [13] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
    {field_field, 6, .inherited = true},
  [17] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
    {field_field, 7, .inherited = true},
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
  [4] = 3,
  [5] = 3,
  [6] = 3,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 9,
  [13] = 13,
  [14] = 9,
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
  [27] = 19,
  [28] = 28,
  [29] = 20,
  [30] = 22,
  [31] = 21,
  [32] = 22,
  [33] = 33,
  [34] = 34,
  [35] = 19,
  [36] = 36,
  [37] = 37,
  [38] = 23,
  [39] = 25,
  [40] = 26,
  [41] = 19,
  [42] = 20,
  [43] = 21,
  [44] = 22,
  [45] = 45,
  [46] = 46,
  [47] = 18,
  [48] = 23,
  [49] = 25,
  [50] = 26,
  [51] = 51,
  [52] = 19,
  [53] = 20,
  [54] = 21,
  [55] = 55,
  [56] = 21,
  [57] = 22,
  [58] = 45,
  [59] = 59,
  [60] = 46,
  [61] = 61,
  [62] = 62,
  [63] = 33,
  [64] = 33,
  [65] = 59,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 26,
  [75] = 75,
  [76] = 26,
  [77] = 77,
  [78] = 18,
  [79] = 33,
  [80] = 80,
  [81] = 25,
  [82] = 46,
  [83] = 33,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 25,
  [88] = 88,
  [89] = 45,
  [90] = 90,
  [91] = 20,
  [92] = 92,
  [93] = 45,
  [94] = 46,
  [95] = 23,
  [96] = 18,
  [97] = 97,
  [98] = 23,
  [99] = 59,
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
  [124] = 69,
  [125] = 92,
  [126] = 121,
  [127] = 97,
  [128] = 70,
  [129] = 55,
  [130] = 100,
  [131] = 66,
  [132] = 86,
  [133] = 34,
  [134] = 37,
  [135] = 73,
  [136] = 102,
  [137] = 110,
  [138] = 116,
  [139] = 120,
  [140] = 119,
  [141] = 141,
  [142] = 118,
  [143] = 70,
  [144] = 69,
  [145] = 66,
  [146] = 146,
  [147] = 117,
  [148] = 55,
  [149] = 37,
  [150] = 92,
  [151] = 34,
  [152] = 100,
  [153] = 86,
  [154] = 103,
  [155] = 121,
  [156] = 121,
  [157] = 73,
  [158] = 158,
  [159] = 86,
  [160] = 100,
  [161] = 92,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 115,
  [167] = 73,
  [168] = 111,
  [169] = 104,
  [170] = 105,
  [171] = 69,
  [172] = 108,
  [173] = 173,
  [174] = 112,
  [175] = 106,
  [176] = 114,
  [177] = 107,
  [178] = 97,
  [179] = 109,
  [180] = 101,
  [181] = 34,
  [182] = 113,
  [183] = 37,
  [184] = 184,
  [185] = 108,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 186,
  [190] = 187,
  [191] = 184,
  [192] = 110,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 107,
  [197] = 184,
  [198] = 102,
  [199] = 193,
  [200] = 194,
  [201] = 194,
  [202] = 186,
  [203] = 193,
  [204] = 187,
  [205] = 184,
  [206] = 187,
  [207] = 187,
  [208] = 115,
  [209] = 120,
  [210] = 119,
  [211] = 118,
  [212] = 184,
  [213] = 117,
  [214] = 186,
  [215] = 101,
  [216] = 193,
  [217] = 114,
  [218] = 112,
  [219] = 194,
  [220] = 104,
  [221] = 111,
  [222] = 113,
  [223] = 116,
  [224] = 120,
  [225] = 194,
  [226] = 103,
  [227] = 186,
  [228] = 119,
  [229] = 109,
  [230] = 105,
  [231] = 106,
  [232] = 107,
  [233] = 118,
  [234] = 117,
  [235] = 101,
  [236] = 113,
  [237] = 102,
  [238] = 114,
  [239] = 108,
  [240] = 110,
  [241] = 109,
  [242] = 104,
  [243] = 115,
  [244] = 73,
  [245] = 121,
  [246] = 187,
  [247] = 111,
  [248] = 92,
  [249] = 116,
  [250] = 103,
  [251] = 100,
  [252] = 86,
  [253] = 105,
  [254] = 106,
  [255] = 114,
  [256] = 256,
  [257] = 111,
  [258] = 108,
  [259] = 116,
  [260] = 260,
  [261] = 103,
  [262] = 101,
  [263] = 117,
  [264] = 105,
  [265] = 106,
  [266] = 107,
  [267] = 118,
  [268] = 119,
  [269] = 113,
  [270] = 102,
  [271] = 120,
  [272] = 272,
  [273] = 110,
  [274] = 109,
  [275] = 275,
  [276] = 115,
  [277] = 277,
  [278] = 104,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 260,
  [283] = 283,
  [284] = 284,
  [285] = 260,
  [286] = 286,
  [287] = 287,
  [288] = 260,
  [289] = 260,
  [290] = 290,
  [291] = 291,
  [292] = 290,
  [293] = 293,
  [294] = 291,
  [295] = 291,
  [296] = 293,
  [297] = 290,
  [298] = 291,
  [299] = 293,
  [300] = 291,
  [301] = 293,
  [302] = 293,
  [303] = 290,
  [304] = 304,
  [305] = 290,
  [306] = 306,
  [307] = 97,
  [308] = 308,
  [309] = 309,
  [310] = 70,
  [311] = 66,
  [312] = 312,
  [313] = 55,
  [314] = 97,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 86,
  [320] = 320,
  [321] = 321,
  [322] = 316,
  [323] = 323,
  [324] = 100,
  [325] = 317,
  [326] = 92,
  [327] = 318,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 316,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 316,
  [336] = 336,
  [337] = 337,
  [338] = 328,
  [339] = 317,
  [340] = 318,
  [341] = 336,
  [342] = 320,
  [343] = 321,
  [344] = 321,
  [345] = 320,
  [346] = 336,
  [347] = 330,
  [348] = 318,
  [349] = 317,
  [350] = 350,
  [351] = 336,
  [352] = 332,
  [353] = 332,
  [354] = 332,
  [355] = 330,
  [356] = 356,
  [357] = 328,
  [358] = 328,
  [359] = 320,
  [360] = 321,
  [361] = 330,
  [362] = 330,
  [363] = 363,
  [364] = 317,
  [365] = 316,
  [366] = 332,
  [367] = 367,
  [368] = 318,
  [369] = 328,
  [370] = 320,
  [371] = 336,
  [372] = 317,
  [373] = 321,
  [374] = 318,
  [375] = 320,
  [376] = 321,
  [377] = 377,
  [378] = 378,
  [379] = 377,
  [380] = 380,
  [381] = 381,
  [382] = 377,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 377,
  [387] = 387,
  [388] = 384,
  [389] = 384,
  [390] = 390,
  [391] = 391,
  [392] = 383,
  [393] = 393,
  [394] = 394,
  [395] = 391,
  [396] = 383,
  [397] = 377,
  [398] = 383,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 383,
  [403] = 403,
  [404] = 391,
  [405] = 405,
  [406] = 384,
  [407] = 407,
  [408] = 408,
  [409] = 377,
  [410] = 391,
  [411] = 384,
  [412] = 383,
  [413] = 391,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 416,
  [429] = 416,
  [430] = 426,
  [431] = 425,
  [432] = 426,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 416,
  [440] = 426,
  [441] = 425,
  [442] = 425,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 443,
  [456] = 444,
  [457] = 457,
  [458] = 416,
  [459] = 426,
  [460] = 425,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 443,
  [465] = 444,
  [466] = 444,
  [467] = 443,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 443,
  [474] = 444,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 443,
  [482] = 482,
  [483] = 446,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 446,
  [488] = 488,
  [489] = 485,
  [490] = 490,
  [491] = 446,
  [492] = 485,
  [493] = 485,
  [494] = 494,
  [495] = 446,
  [496] = 496,
  [497] = 485,
  [498] = 445,
  [499] = 499,
  [500] = 445,
  [501] = 501,
  [502] = 445,
  [503] = 503,
  [504] = 445,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(220);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'v') ADVANCE(369);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'v') ADVANCE(369);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(378);
      if (lookahead == 'v') ADVANCE(369);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(226);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 29:
      if (lookahead == 'F') ADVANCE(184);
      END_STATE();
    case 30:
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(318);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(236);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(78)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 149:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 187:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 188:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 190:
      if (lookahead == 'x') ADVANCE(169);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 192:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(194)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 195:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(195)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    case 196:
      if (eof) ADVANCE(220);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '>') ADVANCE(287);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 197:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(197)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 198:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(198)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 199:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(199)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 200:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(200)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 201:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(201)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 202:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(202)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 203:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(203)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 204:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(204)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 205:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(205)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 206:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(206)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 207:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(207)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 208:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(208)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 209:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(209)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 210:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(210)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 211:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(211)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 212:
      if (eof) ADVANCE(220);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(212)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 213:
      if (eof) ADVANCE(220);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(213)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 214:
      if (eof) ADVANCE(220);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(214)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 215:
      if (eof) ADVANCE(220);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(215)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 216:
      if (eof) ADVANCE(220);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(216)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 217:
      if (eof) ADVANCE(220);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(217)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 218:
      if (eof) ADVANCE(220);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(218)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 219:
      if (eof) ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(219)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ATclass);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ATtype);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_ATalias);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ATfield);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ATpublic);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_ATprotected);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_ATprivate);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ATgeneric);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_ATvararg);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_ATdiagnostic);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ATcast);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ATasync);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AToverload);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ATenum);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ATlanguage);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '<') ADVANCE(286);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '|') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '@') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(28)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(78)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(194)
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_CFunction);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_CFunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_userdata);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_userdata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_diagnostic_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(391);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
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
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 205},
  [124] = {.lex_state = 205},
  [125] = {.lex_state = 201},
  [126] = {.lex_state = 197},
  [127] = {.lex_state = 205},
  [128] = {.lex_state = 205},
  [129] = {.lex_state = 205},
  [130] = {.lex_state = 201},
  [131] = {.lex_state = 205},
  [132] = {.lex_state = 201},
  [133] = {.lex_state = 205},
  [134] = {.lex_state = 205},
  [135] = {.lex_state = 203},
  [136] = {.lex_state = 205},
  [137] = {.lex_state = 205},
  [138] = {.lex_state = 205},
  [139] = {.lex_state = 205},
  [140] = {.lex_state = 205},
  [141] = {.lex_state = 211},
  [142] = {.lex_state = 205},
  [143] = {.lex_state = 206},
  [144] = {.lex_state = 206},
  [145] = {.lex_state = 206},
  [146] = {.lex_state = 211},
  [147] = {.lex_state = 205},
  [148] = {.lex_state = 206},
  [149] = {.lex_state = 206},
  [150] = {.lex_state = 207},
  [151] = {.lex_state = 206},
  [152] = {.lex_state = 207},
  [153] = {.lex_state = 207},
  [154] = {.lex_state = 205},
  [155] = {.lex_state = 198},
  [156] = {.lex_state = 199},
  [157] = {.lex_state = 204},
  [158] = {.lex_state = 211},
  [159] = {.lex_state = 202},
  [160] = {.lex_state = 202},
  [161] = {.lex_state = 202},
  [162] = {.lex_state = 211},
  [163] = {.lex_state = 211},
  [164] = {.lex_state = 211},
  [165] = {.lex_state = 211},
  [166] = {.lex_state = 205},
  [167] = {.lex_state = 209},
  [168] = {.lex_state = 205},
  [169] = {.lex_state = 205},
  [170] = {.lex_state = 205},
  [171] = {.lex_state = 206},
  [172] = {.lex_state = 205},
  [173] = {.lex_state = 211},
  [174] = {.lex_state = 205},
  [175] = {.lex_state = 205},
  [176] = {.lex_state = 205},
  [177] = {.lex_state = 205},
  [178] = {.lex_state = 206},
  [179] = {.lex_state = 205},
  [180] = {.lex_state = 205},
  [181] = {.lex_state = 206},
  [182] = {.lex_state = 205},
  [183] = {.lex_state = 206},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 211},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 206},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 206},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 206},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 206},
  [209] = {.lex_state = 211},
  [210] = {.lex_state = 211},
  [211] = {.lex_state = 211},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 211},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 211},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 211},
  [218] = {.lex_state = 206},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 211},
  [221] = {.lex_state = 211},
  [222] = {.lex_state = 206},
  [223] = {.lex_state = 211},
  [224] = {.lex_state = 206},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 211},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 206},
  [229] = {.lex_state = 206},
  [230] = {.lex_state = 211},
  [231] = {.lex_state = 211},
  [232] = {.lex_state = 211},
  [233] = {.lex_state = 206},
  [234] = {.lex_state = 206},
  [235] = {.lex_state = 206},
  [236] = {.lex_state = 211},
  [237] = {.lex_state = 211},
  [238] = {.lex_state = 206},
  [239] = {.lex_state = 206},
  [240] = {.lex_state = 211},
  [241] = {.lex_state = 211},
  [242] = {.lex_state = 206},
  [243] = {.lex_state = 211},
  [244] = {.lex_state = 210},
  [245] = {.lex_state = 200},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 206},
  [248] = {.lex_state = 208},
  [249] = {.lex_state = 206},
  [250] = {.lex_state = 206},
  [251] = {.lex_state = 208},
  [252] = {.lex_state = 208},
  [253] = {.lex_state = 206},
  [254] = {.lex_state = 206},
  [255] = {.lex_state = 212},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 212},
  [258] = {.lex_state = 212},
  [259] = {.lex_state = 212},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 212},
  [262] = {.lex_state = 212},
  [263] = {.lex_state = 212},
  [264] = {.lex_state = 212},
  [265] = {.lex_state = 212},
  [266] = {.lex_state = 212},
  [267] = {.lex_state = 212},
  [268] = {.lex_state = 212},
  [269] = {.lex_state = 212},
  [270] = {.lex_state = 212},
  [271] = {.lex_state = 212},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 212},
  [274] = {.lex_state = 212},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 212},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 212},
  [279] = {.lex_state = 30},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 212},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 212},
  [287] = {.lex_state = 212},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 214},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 214},
  [308] = {.lex_state = 216},
  [309] = {.lex_state = 213},
  [310] = {.lex_state = 215},
  [311] = {.lex_state = 215},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 215},
  [314] = {.lex_state = 215},
  [315] = {.lex_state = 218},
  [316] = {.lex_state = 25},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 217},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 25},
  [323] = {.lex_state = 217},
  [324] = {.lex_state = 217},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 217},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 25},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 25},
  [334] = {.lex_state = 217},
  [335] = {.lex_state = 25},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 215},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 25},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 217},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 219},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 219},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 219},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 219},
  [394] = {.lex_state = 219},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 219},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 25},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 25},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 219},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 25},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 219},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 25},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 25},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 195},
  [424] = {.lex_state = 25},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 2},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 25},
  [429] = {.lex_state = 25},
  [430] = {.lex_state = 2},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 2},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 25},
  [437] = {.lex_state = 25},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 25},
  [440] = {.lex_state = 2},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 304},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 25},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 304},
  [457] = {.lex_state = 219},
  [458] = {.lex_state = 25},
  [459] = {.lex_state = 2},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 304},
  [466] = {.lex_state = 304},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 25},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 25},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 304},
  [475] = {.lex_state = 25},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 195},
  [480] = {.lex_state = 25},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 25},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 25},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 1},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 1},
  [501] = {.lex_state = 25},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 1},
  [505] = {.lex_state = 1},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 25},
  [509] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_CFunction] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_userdata] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_documentation] = STATE(471),
    [sym_class_annotation] = STATE(470),
    [sym_type_annotation] = STATE(470),
    [sym_param_annotation] = STATE(470),
    [sym_alias_annotation] = STATE(470),
    [sym_return_annotation] = STATE(470),
    [sym_field_annotation] = STATE(470),
    [sym_qualifier_annotation] = STATE(470),
    [sym_generic_annotation] = STATE(470),
    [sym_vararg_annotation] = STATE(470),
    [sym_diagnostic_annotation] = STATE(470),
    [sym_deprecated_annotation] = STATE(470),
    [sym_cast_annotation] = STATE(470),
    [sym_async_annotation] = STATE(470),
    [sym_overload_annotation] = STATE(470),
    [sym_enum_annotation] = STATE(470),
    [sym_language_injection] = STATE(470),
    [sym_see_reference] = STATE(470),
    [anon_sym_ATclass] = ACTIONS(3),
    [anon_sym_ATtype] = ACTIONS(5),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATalias] = ACTIONS(9),
    [anon_sym_ATreturn] = ACTIONS(11),
    [anon_sym_ATfield] = ACTIONS(13),
    [anon_sym_ATpublic] = ACTIONS(15),
    [anon_sym_ATprotected] = ACTIONS(15),
    [anon_sym_ATprivate] = ACTIONS(15),
    [anon_sym_ATgeneric] = ACTIONS(17),
    [anon_sym_ATvararg] = ACTIONS(19),
    [anon_sym_ATdiagnostic] = ACTIONS(21),
    [anon_sym_ATdeprecated] = ACTIONS(23),
    [anon_sym_ATcast] = ACTIONS(25),
    [anon_sym_ATasync] = ACTIONS(27),
    [anon_sym_AToverload] = ACTIONS(29),
    [anon_sym_ATenum] = ACTIONS(31),
    [anon_sym_ATlanguage] = ACTIONS(33),
    [anon_sym_ATsee] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_table,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_fun,
    ACTIONS(51), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(287), 1,
      sym_type,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(57), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(268), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [60] = 14,
    ACTIONS(61), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_self,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type,
    STATE(345), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [119] = 14,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(87), 1,
      anon_sym_self,
    STATE(190), 1,
      sym_type,
    STATE(375), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [178] = 14,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_self,
    STATE(207), 1,
      sym_type,
    STATE(342), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [237] = 14,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_self,
    STATE(204), 1,
      sym_type,
    STATE(320), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [296] = 14,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_self,
    STATE(246), 1,
      sym_type,
    STATE(370), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [355] = 14,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_self,
    STATE(187), 1,
      sym_type,
    STATE(359), 1,
      sym_parameter,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [414] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym_number,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(297), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [464] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_number,
    STATE(290), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [514] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_number,
    STATE(305), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [564] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym_number,
    STATE(303), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [614] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_number,
    STATE(306), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [664] = 11,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_number,
    STATE(292), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [714] = 11,
    ACTIONS(127), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [764] = 11,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_QMARK,
    STATE(158), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [814] = 11,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_QMARK,
    STATE(164), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [864] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(151), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [911] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(295), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [958] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(212), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1005] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(260), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1052] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(302), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1099] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1146] = 10,
    ACTIONS(41), 1,
      anon_sym_table,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_fun,
    ACTIONS(51), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(286), 1,
      sym_type,
    ACTIONS(57), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(268), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1193] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(201), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1240] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(199), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1287] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(298), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1334] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(283), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1381] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(197), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1428] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(299), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1475] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(282), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1522] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(293), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1569] = 10,
    ACTIONS(41), 1,
      anon_sym_table,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_fun,
    ACTIONS(51), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(278), 1,
      sym_type,
    ACTIONS(57), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(268), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1616] = 8,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(169), 7,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(167), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [1659] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(300), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1706] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(163), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1753] = 8,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(173), 7,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(171), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [1796] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(214), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1843] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1890] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(193), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1937] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(294), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [1984] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(191), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2031] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(289), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2078] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(296), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2125] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(171), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2172] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(183), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2219] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(181), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2266] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(186), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2313] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(200), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2360] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(203), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2407] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(173), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2454] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(291), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2501] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2548] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(288), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2595] = 4,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(171), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(173), 12,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2630] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(285), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2677] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(301), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2724] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(144), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2771] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(174), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2818] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(149), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2865] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(123), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2912] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(284), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [2959] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(220), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3006] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(169), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3053] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(218), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3100] = 4,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(191), 12,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(193), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [3135] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(165), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3182] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(256), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3229] = 8,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(191), 7,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(193), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [3272] = 4,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(195), 12,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(197), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [3307] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(2), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3354] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3401] = 3,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(201), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(199), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [3434] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(195), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3481] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(275), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3528] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(216), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3575] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(277), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3622] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(133), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3669] = 10,
    ACTIONS(149), 1,
      anon_sym_table,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_fun,
    ACTIONS(157), 1,
      anon_sym_function,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(242), 1,
      sym_type,
    ACTIONS(161), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(228), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3716] = 10,
    ACTIONS(41), 1,
      anon_sym_table,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_fun,
    ACTIONS(51), 1,
      anon_sym_function,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(281), 1,
      sym_type,
    ACTIONS(57), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(268), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3763] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(219), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3810] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(134), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3857] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(104), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3904] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(280), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3951] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(272), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [3998] = 3,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(209), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(207), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4031] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(225), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4078] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(146), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4125] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(69), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4172] = 10,
    ACTIONS(129), 1,
      anon_sym_table,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(141), 1,
      sym_type,
    ACTIONS(141), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(210), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4219] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(184), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4266] = 3,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(167), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(169), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4299] = 10,
    ACTIONS(175), 1,
      anon_sym_table,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_fun,
    ACTIONS(183), 1,
      anon_sym_function,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(124), 1,
      sym_type,
    ACTIONS(187), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(140), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4346] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(37), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4393] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(189), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4440] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4487] = 4,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(216), 12,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(218), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [4522] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(227), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4569] = 10,
    ACTIONS(63), 1,
      anon_sym_table,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_identifier,
    STATE(112), 1,
      sym_type,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(119), 10,
      sym_array_type,
      sym_table_type,
      sym_table_literal_type,
      sym_union_type,
      sym_parenthesized_type,
      sym_function_type,
      sym_member_type,
      sym_optional_type,
      sym_literal_type,
      sym_builtin_type,
  [4616] = 3,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(224), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(222), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4649] = 2,
    ACTIONS(228), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(226), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4679] = 2,
    ACTIONS(232), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(230), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4709] = 2,
    ACTIONS(236), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(234), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4739] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(238), 8,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(240), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [4777] = 2,
    ACTIONS(244), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(242), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4807] = 2,
    ACTIONS(248), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(246), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4837] = 2,
    ACTIONS(252), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(250), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4867] = 2,
    ACTIONS(256), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(254), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4897] = 2,
    ACTIONS(260), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(258), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4927] = 2,
    ACTIONS(264), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(262), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4957] = 2,
    ACTIONS(268), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(266), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [4987] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(216), 8,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
    ACTIONS(218), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [5025] = 2,
    ACTIONS(272), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(270), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5055] = 2,
    ACTIONS(276), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(274), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5085] = 2,
    ACTIONS(280), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(278), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5115] = 2,
    ACTIONS(284), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(282), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5145] = 2,
    ACTIONS(288), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(286), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5175] = 2,
    ACTIONS(292), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(290), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5205] = 2,
    ACTIONS(296), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(294), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5235] = 2,
    ACTIONS(201), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
    ACTIONS(199), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [5265] = 3,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 12,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_DQUOTE,
    ACTIONS(201), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [5297] = 2,
    ACTIONS(300), 4,
      anon_sym_QMARK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
    ACTIONS(302), 12,
      anon_sym_table,
      anon_sym_fun,
      anon_sym_function,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
      sym_identifier,
  [5318] = 10,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    STATE(304), 1,
      aux_sym_type_annotation_repeat1,
    STATE(434), 1,
      sym_at_comment,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5350] = 8,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    STATE(128), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(193), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5377] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(167), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5394] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5411] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(218), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5430] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(197), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5449] = 4,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(171), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5468] = 3,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(224), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5485] = 4,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(193), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5504] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(209), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5521] = 8,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    STATE(129), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(167), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5548] = 8,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(171), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5575] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 1,
      anon_sym_LT,
    ACTIONS(201), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5592] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5606] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5620] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5634] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5648] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5662] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(337), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(422), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5688] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5702] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(197), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5720] = 8,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5746] = 4,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(193), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5764] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    ACTIONS(357), 1,
      sym_comment,
    STATE(496), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5790] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5804] = 4,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(171), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5822] = 8,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(145), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5848] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(167), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5864] = 8,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(148), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [5890] = 3,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(224), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5906] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(209), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5922] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5936] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5952] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5968] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 1,
      anon_sym_LT,
    ACTIONS(201), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [5984] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(367), 1,
      sym_comment,
    STATE(450), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6010] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(209), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6026] = 3,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(224), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6042] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(167), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6058] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      sym_comment,
    STATE(484), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6084] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(381), 1,
      sym_comment,
    STATE(451), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6110] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
    ACTIONS(385), 1,
      sym_comment,
    STATE(452), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6136] = 8,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym_comment,
    STATE(415), 1,
      sym_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6162] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6176] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(391), 1,
      anon_sym_LT,
    ACTIONS(201), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6192] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6206] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [6228] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6242] = 8,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(310), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6268] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6282] = 8,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      anon_sym_AT,
    ACTIONS(397), 1,
      sym_comment,
    STATE(468), 1,
      sym_class_at_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6308] = 6,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    ACTIONS(318), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [6330] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6344] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6358] = 2,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6372] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(218), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6390] = 2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6404] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6418] = 8,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(313), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6444] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6458] = 8,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    STATE(311), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6484] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(341), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6507] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6520] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6543] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(327), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6566] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(414), 1,
      anon_sym_QMARK,
    ACTIONS(294), 6,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_POUND,
      anon_sym_DOT,
  [6581] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6604] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(374), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6627] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(371), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6650] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6663] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6686] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6709] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(352), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6732] = 2,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6745] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6768] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [6781] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(332), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6804] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6827] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6850] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(328), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6873] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6896] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6919] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6942] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(348), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6965] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [6988] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7001] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7014] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7027] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7040] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(346), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7063] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7076] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(358), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7099] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7112] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7135] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7148] = 6,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7169] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7192] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_QMARK,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(240), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7213] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7226] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7239] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7252] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7265] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(361), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7288] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7301] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7324] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7337] = 2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7350] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7363] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7376] = 2,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7389] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7402] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7415] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7428] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7441] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7454] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7467] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7480] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7493] = 2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7506] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      anon_sym_QMARK,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_PIPE,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7527] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 7,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7540] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(201), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7555] = 3,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7570] = 7,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7593] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7606] = 3,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(167), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7621] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7634] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7647] = 3,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(224), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7662] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(209), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7677] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7690] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7703] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7715] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7733] = 2,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7745] = 2,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7757] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7769] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [7789] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7801] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7813] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7825] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7837] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7849] = 2,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7861] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7873] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7885] = 2,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7897] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7909] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7921] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7939] = 2,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7951] = 2,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7963] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7981] = 2,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 6,
      anon_sym_QMARK,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DOT,
  [7993] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8011] = 6,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_QMARK,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_PIPE,
    ACTIONS(484), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8031] = 5,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(17), 1,
      sym_positional_field,
    STATE(333), 1,
      sym_qualifier,
    ACTIONS(486), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [8049] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8067] = 6,
    ACTIONS(478), 1,
      anon_sym_QMARK,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_PIPE,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8087] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8107] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(502), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8125] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8143] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8163] = 6,
    ACTIONS(478), 1,
      anon_sym_QMARK,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_PIPE,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
    ACTIONS(512), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8183] = 6,
    ACTIONS(478), 1,
      anon_sym_QMARK,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 1,
      anon_sym_PIPE,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8203] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8223] = 6,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8243] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(526), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8260] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(528), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8277] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(530), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8294] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8311] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(534), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8328] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(536), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8345] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8362] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(540), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8379] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(542), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8396] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8413] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(546), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8430] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8447] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8464] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(552), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8481] = 6,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_AT,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 1,
      sym_comment,
    STATE(307), 1,
      aux_sym_type_annotation_repeat1,
    STATE(449), 1,
      sym_at_comment,
  [8500] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(558), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8517] = 5,
    ACTIONS(37), 1,
      anon_sym_QMARK,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_POUND,
      anon_sym_DOT,
  [8534] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(218), 2,
      anon_sym_AT,
      sym_comment,
  [8548] = 5,
    ACTIONS(395), 1,
      anon_sym_AT,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      sym_comment,
    STATE(447), 1,
      sym_class_at_comment,
  [8564] = 4,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      sym_comment,
  [8577] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_type_annotation_repeat1,
  [8590] = 4,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_type_annotation_repeat1,
  [8603] = 3,
    ACTIONS(576), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(385), 1,
      sym_parameter,
    ACTIONS(578), 2,
      anon_sym_self,
      sym_identifier,
  [8614] = 4,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_type_annotation_repeat1,
  [8627] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(314), 1,
      aux_sym_type_annotation_repeat1,
  [8640] = 3,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      anon_sym_extends,
    ACTIONS(584), 1,
      sym_comment,
  [8650] = 3,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 1,
      sym_identifier,
  [8660] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [8670] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [8680] = 3,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [8690] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_function_type_repeat1,
  [8700] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_QMARK,
  [8710] = 3,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    ACTIONS(604), 1,
      sym_identifier,
  [8720] = 3,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_COLON,
    ACTIONS(610), 1,
      sym_comment,
  [8730] = 3,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_COLON,
  [8740] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [8750] = 3,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(616), 1,
      anon_sym_COLON,
  [8760] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [8770] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8780] = 3,
    ACTIONS(620), 1,
      anon_sym_fun,
    ACTIONS(622), 1,
      anon_sym_function,
    STATE(399), 1,
      sym_function_type,
  [8790] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8800] = 3,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      sym_identifier,
  [8810] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8820] = 3,
    ACTIONS(488), 1,
      anon_sym_LBRACK,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(15), 1,
      sym_positional_field,
  [8830] = 3,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(640), 1,
      sym_comment,
  [8840] = 3,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    ACTIONS(646), 1,
      sym_identifier,
  [8850] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8860] = 3,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_COMMA,
  [8870] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8880] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [8890] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [8900] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8910] = 3,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(339), 1,
      aux_sym_function_type_repeat1,
  [8920] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(658), 1,
      anon_sym_QMARK,
  [8930] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_QMARK,
  [8940] = 3,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_function_type_repeat1,
  [8950] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8960] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [8970] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [8980] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [8990] = 3,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [9000] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9010] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9020] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9030] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9040] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9050] = 3,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9060] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9070] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9080] = 3,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(325), 1,
      aux_sym_function_type_repeat1,
  [9090] = 3,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(690), 1,
      anon_sym_QMARK,
  [9100] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9110] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9120] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [9130] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [9140] = 3,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      sym_identifier,
  [9150] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9160] = 3,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    ACTIONS(713), 1,
      anon_sym_COLON,
    ACTIONS(715), 1,
      sym_comment,
  [9170] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [9180] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9190] = 3,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_function_type_repeat1,
  [9200] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_table_literal_type_repeat1,
  [9210] = 3,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(363), 1,
      aux_sym_function_type_repeat1,
  [9220] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(723), 1,
      anon_sym_QMARK,
  [9230] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(350), 1,
      aux_sym_function_type_repeat2,
  [9240] = 3,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      aux_sym_function_type_repeat1,
  [9250] = 3,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_QMARK,
  [9260] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [9267] = 2,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
    ACTIONS(729), 1,
      sym_comment,
  [9274] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [9281] = 2,
    ACTIONS(731), 1,
      anon_sym_COLON,
    ACTIONS(733), 1,
      anon_sym_QMARK,
  [9288] = 2,
    ACTIONS(711), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 1,
      sym_comment,
  [9295] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [9302] = 2,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9309] = 2,
    ACTIONS(739), 1,
      anon_sym_COLON,
    ACTIONS(741), 1,
      anon_sym_QMARK,
  [9316] = 1,
    ACTIONS(699), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9321] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
  [9328] = 2,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      sym_comment,
  [9335] = 2,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(749), 1,
      anon_sym_QMARK,
  [9342] = 2,
    ACTIONS(751), 1,
      anon_sym_COLON,
    ACTIONS(753), 1,
      anon_sym_QMARK,
  [9349] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(414), 1,
      anon_sym_QMARK,
  [9356] = 2,
    ACTIONS(755), 1,
      anon_sym_COLON,
    ACTIONS(757), 1,
      anon_sym_QMARK,
  [9363] = 2,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9370] = 2,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
    ACTIONS(761), 1,
      sym_comment,
  [9377] = 2,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 1,
      sym_comment,
  [9384] = 2,
    ACTIONS(767), 1,
      anon_sym_COLON,
    ACTIONS(769), 1,
      anon_sym_QMARK,
  [9391] = 2,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9398] = 2,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [9405] = 2,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9412] = 2,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 1,
      sym_comment,
  [9419] = 2,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    ACTIONS(777), 1,
      anon_sym_COLON,
  [9426] = 2,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    ACTIONS(781), 1,
      sym_identifier,
  [9433] = 2,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9440] = 1,
    ACTIONS(783), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [9445] = 2,
    ACTIONS(785), 1,
      anon_sym_COLON,
    ACTIONS(787), 1,
      anon_sym_QMARK,
  [9452] = 2,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 1,
      sym_comment,
  [9459] = 2,
    ACTIONS(793), 1,
      anon_sym_COLON,
    ACTIONS(795), 1,
      anon_sym_QMARK,
  [9466] = 2,
    ACTIONS(797), 1,
      anon_sym_COLON,
    ACTIONS(799), 1,
      anon_sym_QMARK,
  [9473] = 1,
    ACTIONS(801), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [9478] = 2,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [9485] = 2,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(805), 1,
      anon_sym_QMARK,
  [9492] = 2,
    ACTIONS(807), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_QMARK,
  [9499] = 2,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9506] = 2,
    ACTIONS(811), 1,
      anon_sym_COLON,
    ACTIONS(813), 1,
      anon_sym_QMARK,
  [9513] = 2,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
    ACTIONS(817), 1,
      sym_comment,
  [9520] = 1,
    ACTIONS(819), 1,
      ts_builtin_sym_end,
  [9524] = 1,
    ACTIONS(821), 1,
      sym_identifier,
  [9528] = 1,
    ACTIONS(823), 1,
      ts_builtin_sym_end,
  [9532] = 1,
    ACTIONS(825), 1,
      sym_identifier,
  [9536] = 1,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
  [9540] = 1,
    ACTIONS(829), 1,
      anon_sym_RBRACK2,
  [9544] = 1,
    ACTIONS(831), 1,
      ts_builtin_sym_end,
  [9548] = 1,
    ACTIONS(833), 1,
      ts_builtin_sym_end,
  [9552] = 1,
    ACTIONS(835), 1,
      sym_diagnostic_identifier,
  [9556] = 1,
    ACTIONS(837), 1,
      sym_identifier,
  [9560] = 1,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
  [9564] = 1,
    ACTIONS(841), 1,
      anon_sym_RBRACK,
  [9568] = 1,
    ACTIONS(843), 1,
      anon_sym_COLON,
  [9572] = 1,
    ACTIONS(845), 1,
      sym_identifier,
  [9576] = 1,
    ACTIONS(847), 1,
      sym_identifier,
  [9580] = 1,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
  [9584] = 1,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
  [9588] = 1,
    ACTIONS(853), 1,
      anon_sym_RBRACK,
  [9592] = 1,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
  [9596] = 1,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
  [9600] = 1,
    ACTIONS(857), 1,
      ts_builtin_sym_end,
  [9604] = 1,
    ACTIONS(859), 1,
      sym_identifier,
  [9608] = 1,
    ACTIONS(861), 1,
      sym_identifier,
  [9612] = 1,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
  [9616] = 1,
    ACTIONS(865), 1,
      sym_identifier,
  [9620] = 1,
    ACTIONS(867), 1,
      anon_sym_RBRACK,
  [9624] = 1,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
  [9628] = 1,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
  [9632] = 1,
    ACTIONS(873), 1,
      anon_sym_LPAREN,
  [9636] = 1,
    ACTIONS(875), 1,
      aux_sym_literal_type_token1,
  [9640] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACK2,
  [9644] = 1,
    ACTIONS(877), 1,
      anon_sym_COLON,
  [9648] = 1,
    ACTIONS(879), 1,
      ts_builtin_sym_end,
  [9652] = 1,
    ACTIONS(881), 1,
      sym_identifier,
  [9656] = 1,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
  [9660] = 1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [9664] = 1,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
  [9668] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [9672] = 1,
    ACTIONS(887), 1,
      ts_builtin_sym_end,
  [9676] = 1,
    ACTIONS(889), 1,
      ts_builtin_sym_end,
  [9680] = 1,
    ACTIONS(891), 1,
      anon_sym_LPAREN,
  [9684] = 1,
    ACTIONS(893), 1,
      aux_sym_literal_type_token1,
  [9688] = 1,
    ACTIONS(895), 1,
      sym_comment,
  [9692] = 1,
    ACTIONS(897), 1,
      sym_identifier,
  [9696] = 1,
    ACTIONS(899), 1,
      anon_sym_RBRACK,
  [9700] = 1,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
  [9704] = 1,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
  [9708] = 1,
    ACTIONS(905), 1,
      sym_number,
  [9712] = 1,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
  [9716] = 1,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
  [9720] = 1,
    ACTIONS(909), 1,
      aux_sym_literal_type_token1,
  [9724] = 1,
    ACTIONS(911), 1,
      aux_sym_literal_type_token1,
  [9728] = 1,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
  [9732] = 1,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
  [9736] = 1,
    ACTIONS(917), 1,
      sym_identifier,
  [9740] = 1,
    ACTIONS(919), 1,
      ts_builtin_sym_end,
  [9744] = 1,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
  [9748] = 1,
    ACTIONS(923), 1,
      sym_identifier,
  [9752] = 1,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
  [9756] = 1,
    ACTIONS(927), 1,
      aux_sym_literal_type_token1,
  [9760] = 1,
    ACTIONS(929), 1,
      sym_identifier,
  [9764] = 1,
    ACTIONS(931), 1,
      ts_builtin_sym_end,
  [9768] = 1,
    ACTIONS(933), 1,
      ts_builtin_sym_end,
  [9772] = 1,
    ACTIONS(737), 1,
      anon_sym_COLON,
  [9776] = 1,
    ACTIONS(935), 1,
      sym_diagnostic_identifier,
  [9780] = 1,
    ACTIONS(937), 1,
      sym_identifier,
  [9784] = 1,
    ACTIONS(939), 1,
      anon_sym_LPAREN,
  [9788] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
  [9792] = 1,
    ACTIONS(943), 1,
      anon_sym_COLON,
  [9796] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [9800] = 1,
    ACTIONS(945), 1,
      anon_sym_COLON,
  [9804] = 1,
    ACTIONS(947), 1,
      sym_identifier,
  [9808] = 1,
    ACTIONS(949), 1,
      anon_sym_COLON,
  [9812] = 1,
    ACTIONS(951), 1,
      ts_builtin_sym_end,
  [9816] = 1,
    ACTIONS(953), 1,
      anon_sym_COLON,
  [9820] = 1,
    ACTIONS(955), 1,
      sym_identifier,
  [9824] = 1,
    ACTIONS(957), 1,
      anon_sym_COLON,
  [9828] = 1,
    ACTIONS(959), 1,
      anon_sym_COLON,
  [9832] = 1,
    ACTIONS(961), 1,
      anon_sym_COLON,
  [9836] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [9840] = 1,
    ACTIONS(963), 1,
      anon_sym_COLON,
  [9844] = 1,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
  [9848] = 1,
    ACTIONS(967), 1,
      anon_sym_COLON,
  [9852] = 1,
    ACTIONS(530), 1,
      anon_sym_RBRACK2,
  [9856] = 1,
    ACTIONS(969), 1,
      ts_builtin_sym_end,
  [9860] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACK2,
  [9864] = 1,
    ACTIONS(971), 1,
      sym_identifier,
  [9868] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACK2,
  [9872] = 1,
    ACTIONS(973), 1,
      ts_builtin_sym_end,
  [9876] = 1,
    ACTIONS(526), 1,
      anon_sym_RBRACK2,
  [9880] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACK2,
  [9884] = 1,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
  [9888] = 1,
    ACTIONS(977), 1,
      anon_sym_COLON,
  [9892] = 1,
    ACTIONS(979), 1,
      sym_identifier,
  [9896] = 1,
    ACTIONS(981), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 119,
  [SMALL_STATE(5)] = 178,
  [SMALL_STATE(6)] = 237,
  [SMALL_STATE(7)] = 296,
  [SMALL_STATE(8)] = 355,
  [SMALL_STATE(9)] = 414,
  [SMALL_STATE(10)] = 464,
  [SMALL_STATE(11)] = 514,
  [SMALL_STATE(12)] = 564,
  [SMALL_STATE(13)] = 614,
  [SMALL_STATE(14)] = 664,
  [SMALL_STATE(15)] = 714,
  [SMALL_STATE(16)] = 764,
  [SMALL_STATE(17)] = 814,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 911,
  [SMALL_STATE(20)] = 958,
  [SMALL_STATE(21)] = 1005,
  [SMALL_STATE(22)] = 1052,
  [SMALL_STATE(23)] = 1099,
  [SMALL_STATE(24)] = 1146,
  [SMALL_STATE(25)] = 1193,
  [SMALL_STATE(26)] = 1240,
  [SMALL_STATE(27)] = 1287,
  [SMALL_STATE(28)] = 1334,
  [SMALL_STATE(29)] = 1381,
  [SMALL_STATE(30)] = 1428,
  [SMALL_STATE(31)] = 1475,
  [SMALL_STATE(32)] = 1522,
  [SMALL_STATE(33)] = 1569,
  [SMALL_STATE(34)] = 1616,
  [SMALL_STATE(35)] = 1659,
  [SMALL_STATE(36)] = 1706,
  [SMALL_STATE(37)] = 1753,
  [SMALL_STATE(38)] = 1796,
  [SMALL_STATE(39)] = 1843,
  [SMALL_STATE(40)] = 1890,
  [SMALL_STATE(41)] = 1937,
  [SMALL_STATE(42)] = 1984,
  [SMALL_STATE(43)] = 2031,
  [SMALL_STATE(44)] = 2078,
  [SMALL_STATE(45)] = 2125,
  [SMALL_STATE(46)] = 2172,
  [SMALL_STATE(47)] = 2219,
  [SMALL_STATE(48)] = 2266,
  [SMALL_STATE(49)] = 2313,
  [SMALL_STATE(50)] = 2360,
  [SMALL_STATE(51)] = 2407,
  [SMALL_STATE(52)] = 2454,
  [SMALL_STATE(53)] = 2501,
  [SMALL_STATE(54)] = 2548,
  [SMALL_STATE(55)] = 2595,
  [SMALL_STATE(56)] = 2630,
  [SMALL_STATE(57)] = 2677,
  [SMALL_STATE(58)] = 2724,
  [SMALL_STATE(59)] = 2771,
  [SMALL_STATE(60)] = 2818,
  [SMALL_STATE(61)] = 2865,
  [SMALL_STATE(62)] = 2912,
  [SMALL_STATE(63)] = 2959,
  [SMALL_STATE(64)] = 3006,
  [SMALL_STATE(65)] = 3053,
  [SMALL_STATE(66)] = 3100,
  [SMALL_STATE(67)] = 3135,
  [SMALL_STATE(68)] = 3182,
  [SMALL_STATE(69)] = 3229,
  [SMALL_STATE(70)] = 3272,
  [SMALL_STATE(71)] = 3307,
  [SMALL_STATE(72)] = 3354,
  [SMALL_STATE(73)] = 3401,
  [SMALL_STATE(74)] = 3434,
  [SMALL_STATE(75)] = 3481,
  [SMALL_STATE(76)] = 3528,
  [SMALL_STATE(77)] = 3575,
  [SMALL_STATE(78)] = 3622,
  [SMALL_STATE(79)] = 3669,
  [SMALL_STATE(80)] = 3716,
  [SMALL_STATE(81)] = 3763,
  [SMALL_STATE(82)] = 3810,
  [SMALL_STATE(83)] = 3857,
  [SMALL_STATE(84)] = 3904,
  [SMALL_STATE(85)] = 3951,
  [SMALL_STATE(86)] = 3998,
  [SMALL_STATE(87)] = 4031,
  [SMALL_STATE(88)] = 4078,
  [SMALL_STATE(89)] = 4125,
  [SMALL_STATE(90)] = 4172,
  [SMALL_STATE(91)] = 4219,
  [SMALL_STATE(92)] = 4266,
  [SMALL_STATE(93)] = 4299,
  [SMALL_STATE(94)] = 4346,
  [SMALL_STATE(95)] = 4393,
  [SMALL_STATE(96)] = 4440,
  [SMALL_STATE(97)] = 4487,
  [SMALL_STATE(98)] = 4522,
  [SMALL_STATE(99)] = 4569,
  [SMALL_STATE(100)] = 4616,
  [SMALL_STATE(101)] = 4649,
  [SMALL_STATE(102)] = 4679,
  [SMALL_STATE(103)] = 4709,
  [SMALL_STATE(104)] = 4739,
  [SMALL_STATE(105)] = 4777,
  [SMALL_STATE(106)] = 4807,
  [SMALL_STATE(107)] = 4837,
  [SMALL_STATE(108)] = 4867,
  [SMALL_STATE(109)] = 4897,
  [SMALL_STATE(110)] = 4927,
  [SMALL_STATE(111)] = 4957,
  [SMALL_STATE(112)] = 4987,
  [SMALL_STATE(113)] = 5025,
  [SMALL_STATE(114)] = 5055,
  [SMALL_STATE(115)] = 5085,
  [SMALL_STATE(116)] = 5115,
  [SMALL_STATE(117)] = 5145,
  [SMALL_STATE(118)] = 5175,
  [SMALL_STATE(119)] = 5205,
  [SMALL_STATE(120)] = 5235,
  [SMALL_STATE(121)] = 5265,
  [SMALL_STATE(122)] = 5297,
  [SMALL_STATE(123)] = 5318,
  [SMALL_STATE(124)] = 5350,
  [SMALL_STATE(125)] = 5377,
  [SMALL_STATE(126)] = 5394,
  [SMALL_STATE(127)] = 5411,
  [SMALL_STATE(128)] = 5430,
  [SMALL_STATE(129)] = 5449,
  [SMALL_STATE(130)] = 5468,
  [SMALL_STATE(131)] = 5485,
  [SMALL_STATE(132)] = 5504,
  [SMALL_STATE(133)] = 5521,
  [SMALL_STATE(134)] = 5548,
  [SMALL_STATE(135)] = 5575,
  [SMALL_STATE(136)] = 5592,
  [SMALL_STATE(137)] = 5606,
  [SMALL_STATE(138)] = 5620,
  [SMALL_STATE(139)] = 5634,
  [SMALL_STATE(140)] = 5648,
  [SMALL_STATE(141)] = 5662,
  [SMALL_STATE(142)] = 5688,
  [SMALL_STATE(143)] = 5702,
  [SMALL_STATE(144)] = 5720,
  [SMALL_STATE(145)] = 5746,
  [SMALL_STATE(146)] = 5764,
  [SMALL_STATE(147)] = 5790,
  [SMALL_STATE(148)] = 5804,
  [SMALL_STATE(149)] = 5822,
  [SMALL_STATE(150)] = 5848,
  [SMALL_STATE(151)] = 5864,
  [SMALL_STATE(152)] = 5890,
  [SMALL_STATE(153)] = 5906,
  [SMALL_STATE(154)] = 5922,
  [SMALL_STATE(155)] = 5936,
  [SMALL_STATE(156)] = 5952,
  [SMALL_STATE(157)] = 5968,
  [SMALL_STATE(158)] = 5984,
  [SMALL_STATE(159)] = 6010,
  [SMALL_STATE(160)] = 6026,
  [SMALL_STATE(161)] = 6042,
  [SMALL_STATE(162)] = 6058,
  [SMALL_STATE(163)] = 6084,
  [SMALL_STATE(164)] = 6110,
  [SMALL_STATE(165)] = 6136,
  [SMALL_STATE(166)] = 6162,
  [SMALL_STATE(167)] = 6176,
  [SMALL_STATE(168)] = 6192,
  [SMALL_STATE(169)] = 6206,
  [SMALL_STATE(170)] = 6228,
  [SMALL_STATE(171)] = 6242,
  [SMALL_STATE(172)] = 6268,
  [SMALL_STATE(173)] = 6282,
  [SMALL_STATE(174)] = 6308,
  [SMALL_STATE(175)] = 6330,
  [SMALL_STATE(176)] = 6344,
  [SMALL_STATE(177)] = 6358,
  [SMALL_STATE(178)] = 6372,
  [SMALL_STATE(179)] = 6390,
  [SMALL_STATE(180)] = 6404,
  [SMALL_STATE(181)] = 6418,
  [SMALL_STATE(182)] = 6444,
  [SMALL_STATE(183)] = 6458,
  [SMALL_STATE(184)] = 6484,
  [SMALL_STATE(185)] = 6507,
  [SMALL_STATE(186)] = 6520,
  [SMALL_STATE(187)] = 6543,
  [SMALL_STATE(188)] = 6566,
  [SMALL_STATE(189)] = 6581,
  [SMALL_STATE(190)] = 6604,
  [SMALL_STATE(191)] = 6627,
  [SMALL_STATE(192)] = 6650,
  [SMALL_STATE(193)] = 6663,
  [SMALL_STATE(194)] = 6686,
  [SMALL_STATE(195)] = 6709,
  [SMALL_STATE(196)] = 6732,
  [SMALL_STATE(197)] = 6745,
  [SMALL_STATE(198)] = 6768,
  [SMALL_STATE(199)] = 6781,
  [SMALL_STATE(200)] = 6804,
  [SMALL_STATE(201)] = 6827,
  [SMALL_STATE(202)] = 6850,
  [SMALL_STATE(203)] = 6873,
  [SMALL_STATE(204)] = 6896,
  [SMALL_STATE(205)] = 6919,
  [SMALL_STATE(206)] = 6942,
  [SMALL_STATE(207)] = 6965,
  [SMALL_STATE(208)] = 6988,
  [SMALL_STATE(209)] = 7001,
  [SMALL_STATE(210)] = 7014,
  [SMALL_STATE(211)] = 7027,
  [SMALL_STATE(212)] = 7040,
  [SMALL_STATE(213)] = 7063,
  [SMALL_STATE(214)] = 7076,
  [SMALL_STATE(215)] = 7099,
  [SMALL_STATE(216)] = 7112,
  [SMALL_STATE(217)] = 7135,
  [SMALL_STATE(218)] = 7148,
  [SMALL_STATE(219)] = 7169,
  [SMALL_STATE(220)] = 7192,
  [SMALL_STATE(221)] = 7213,
  [SMALL_STATE(222)] = 7226,
  [SMALL_STATE(223)] = 7239,
  [SMALL_STATE(224)] = 7252,
  [SMALL_STATE(225)] = 7265,
  [SMALL_STATE(226)] = 7288,
  [SMALL_STATE(227)] = 7301,
  [SMALL_STATE(228)] = 7324,
  [SMALL_STATE(229)] = 7337,
  [SMALL_STATE(230)] = 7350,
  [SMALL_STATE(231)] = 7363,
  [SMALL_STATE(232)] = 7376,
  [SMALL_STATE(233)] = 7389,
  [SMALL_STATE(234)] = 7402,
  [SMALL_STATE(235)] = 7415,
  [SMALL_STATE(236)] = 7428,
  [SMALL_STATE(237)] = 7441,
  [SMALL_STATE(238)] = 7454,
  [SMALL_STATE(239)] = 7467,
  [SMALL_STATE(240)] = 7480,
  [SMALL_STATE(241)] = 7493,
  [SMALL_STATE(242)] = 7506,
  [SMALL_STATE(243)] = 7527,
  [SMALL_STATE(244)] = 7540,
  [SMALL_STATE(245)] = 7555,
  [SMALL_STATE(246)] = 7570,
  [SMALL_STATE(247)] = 7593,
  [SMALL_STATE(248)] = 7606,
  [SMALL_STATE(249)] = 7621,
  [SMALL_STATE(250)] = 7634,
  [SMALL_STATE(251)] = 7647,
  [SMALL_STATE(252)] = 7662,
  [SMALL_STATE(253)] = 7677,
  [SMALL_STATE(254)] = 7690,
  [SMALL_STATE(255)] = 7703,
  [SMALL_STATE(256)] = 7715,
  [SMALL_STATE(257)] = 7733,
  [SMALL_STATE(258)] = 7745,
  [SMALL_STATE(259)] = 7757,
  [SMALL_STATE(260)] = 7769,
  [SMALL_STATE(261)] = 7789,
  [SMALL_STATE(262)] = 7801,
  [SMALL_STATE(263)] = 7813,
  [SMALL_STATE(264)] = 7825,
  [SMALL_STATE(265)] = 7837,
  [SMALL_STATE(266)] = 7849,
  [SMALL_STATE(267)] = 7861,
  [SMALL_STATE(268)] = 7873,
  [SMALL_STATE(269)] = 7885,
  [SMALL_STATE(270)] = 7897,
  [SMALL_STATE(271)] = 7909,
  [SMALL_STATE(272)] = 7921,
  [SMALL_STATE(273)] = 7939,
  [SMALL_STATE(274)] = 7951,
  [SMALL_STATE(275)] = 7963,
  [SMALL_STATE(276)] = 7981,
  [SMALL_STATE(277)] = 7993,
  [SMALL_STATE(278)] = 8011,
  [SMALL_STATE(279)] = 8031,
  [SMALL_STATE(280)] = 8049,
  [SMALL_STATE(281)] = 8067,
  [SMALL_STATE(282)] = 8087,
  [SMALL_STATE(283)] = 8107,
  [SMALL_STATE(284)] = 8125,
  [SMALL_STATE(285)] = 8143,
  [SMALL_STATE(286)] = 8163,
  [SMALL_STATE(287)] = 8183,
  [SMALL_STATE(288)] = 8203,
  [SMALL_STATE(289)] = 8223,
  [SMALL_STATE(290)] = 8243,
  [SMALL_STATE(291)] = 8260,
  [SMALL_STATE(292)] = 8277,
  [SMALL_STATE(293)] = 8294,
  [SMALL_STATE(294)] = 8311,
  [SMALL_STATE(295)] = 8328,
  [SMALL_STATE(296)] = 8345,
  [SMALL_STATE(297)] = 8362,
  [SMALL_STATE(298)] = 8379,
  [SMALL_STATE(299)] = 8396,
  [SMALL_STATE(300)] = 8413,
  [SMALL_STATE(301)] = 8430,
  [SMALL_STATE(302)] = 8447,
  [SMALL_STATE(303)] = 8464,
  [SMALL_STATE(304)] = 8481,
  [SMALL_STATE(305)] = 8500,
  [SMALL_STATE(306)] = 8517,
  [SMALL_STATE(307)] = 8534,
  [SMALL_STATE(308)] = 8548,
  [SMALL_STATE(309)] = 8564,
  [SMALL_STATE(310)] = 8577,
  [SMALL_STATE(311)] = 8590,
  [SMALL_STATE(312)] = 8603,
  [SMALL_STATE(313)] = 8614,
  [SMALL_STATE(314)] = 8627,
  [SMALL_STATE(315)] = 8640,
  [SMALL_STATE(316)] = 8650,
  [SMALL_STATE(317)] = 8660,
  [SMALL_STATE(318)] = 8670,
  [SMALL_STATE(319)] = 8680,
  [SMALL_STATE(320)] = 8690,
  [SMALL_STATE(321)] = 8700,
  [SMALL_STATE(322)] = 8710,
  [SMALL_STATE(323)] = 8720,
  [SMALL_STATE(324)] = 8730,
  [SMALL_STATE(325)] = 8740,
  [SMALL_STATE(326)] = 8750,
  [SMALL_STATE(327)] = 8760,
  [SMALL_STATE(328)] = 8770,
  [SMALL_STATE(329)] = 8780,
  [SMALL_STATE(330)] = 8790,
  [SMALL_STATE(331)] = 8800,
  [SMALL_STATE(332)] = 8810,
  [SMALL_STATE(333)] = 8820,
  [SMALL_STATE(334)] = 8830,
  [SMALL_STATE(335)] = 8840,
  [SMALL_STATE(336)] = 8850,
  [SMALL_STATE(337)] = 8860,
  [SMALL_STATE(338)] = 8870,
  [SMALL_STATE(339)] = 8880,
  [SMALL_STATE(340)] = 8890,
  [SMALL_STATE(341)] = 8900,
  [SMALL_STATE(342)] = 8910,
  [SMALL_STATE(343)] = 8920,
  [SMALL_STATE(344)] = 8930,
  [SMALL_STATE(345)] = 8940,
  [SMALL_STATE(346)] = 8950,
  [SMALL_STATE(347)] = 8960,
  [SMALL_STATE(348)] = 8970,
  [SMALL_STATE(349)] = 8980,
  [SMALL_STATE(350)] = 8990,
  [SMALL_STATE(351)] = 9000,
  [SMALL_STATE(352)] = 9010,
  [SMALL_STATE(353)] = 9020,
  [SMALL_STATE(354)] = 9030,
  [SMALL_STATE(355)] = 9040,
  [SMALL_STATE(356)] = 9050,
  [SMALL_STATE(357)] = 9060,
  [SMALL_STATE(358)] = 9070,
  [SMALL_STATE(359)] = 9080,
  [SMALL_STATE(360)] = 9090,
  [SMALL_STATE(361)] = 9100,
  [SMALL_STATE(362)] = 9110,
  [SMALL_STATE(363)] = 9120,
  [SMALL_STATE(364)] = 9130,
  [SMALL_STATE(365)] = 9140,
  [SMALL_STATE(366)] = 9150,
  [SMALL_STATE(367)] = 9160,
  [SMALL_STATE(368)] = 9170,
  [SMALL_STATE(369)] = 9180,
  [SMALL_STATE(370)] = 9190,
  [SMALL_STATE(371)] = 9200,
  [SMALL_STATE(372)] = 9210,
  [SMALL_STATE(373)] = 9220,
  [SMALL_STATE(374)] = 9230,
  [SMALL_STATE(375)] = 9240,
  [SMALL_STATE(376)] = 9250,
  [SMALL_STATE(377)] = 9260,
  [SMALL_STATE(378)] = 9267,
  [SMALL_STATE(379)] = 9274,
  [SMALL_STATE(380)] = 9281,
  [SMALL_STATE(381)] = 9288,
  [SMALL_STATE(382)] = 9295,
  [SMALL_STATE(383)] = 9302,
  [SMALL_STATE(384)] = 9309,
  [SMALL_STATE(385)] = 9316,
  [SMALL_STATE(386)] = 9321,
  [SMALL_STATE(387)] = 9328,
  [SMALL_STATE(388)] = 9335,
  [SMALL_STATE(389)] = 9342,
  [SMALL_STATE(390)] = 9349,
  [SMALL_STATE(391)] = 9356,
  [SMALL_STATE(392)] = 9363,
  [SMALL_STATE(393)] = 9370,
  [SMALL_STATE(394)] = 9377,
  [SMALL_STATE(395)] = 9384,
  [SMALL_STATE(396)] = 9391,
  [SMALL_STATE(397)] = 9398,
  [SMALL_STATE(398)] = 9405,
  [SMALL_STATE(399)] = 9412,
  [SMALL_STATE(400)] = 9419,
  [SMALL_STATE(401)] = 9426,
  [SMALL_STATE(402)] = 9433,
  [SMALL_STATE(403)] = 9440,
  [SMALL_STATE(404)] = 9445,
  [SMALL_STATE(405)] = 9452,
  [SMALL_STATE(406)] = 9459,
  [SMALL_STATE(407)] = 9466,
  [SMALL_STATE(408)] = 9473,
  [SMALL_STATE(409)] = 9478,
  [SMALL_STATE(410)] = 9485,
  [SMALL_STATE(411)] = 9492,
  [SMALL_STATE(412)] = 9499,
  [SMALL_STATE(413)] = 9506,
  [SMALL_STATE(414)] = 9513,
  [SMALL_STATE(415)] = 9520,
  [SMALL_STATE(416)] = 9524,
  [SMALL_STATE(417)] = 9528,
  [SMALL_STATE(418)] = 9532,
  [SMALL_STATE(419)] = 9536,
  [SMALL_STATE(420)] = 9540,
  [SMALL_STATE(421)] = 9544,
  [SMALL_STATE(422)] = 9548,
  [SMALL_STATE(423)] = 9552,
  [SMALL_STATE(424)] = 9556,
  [SMALL_STATE(425)] = 9560,
  [SMALL_STATE(426)] = 9564,
  [SMALL_STATE(427)] = 9568,
  [SMALL_STATE(428)] = 9572,
  [SMALL_STATE(429)] = 9576,
  [SMALL_STATE(430)] = 9580,
  [SMALL_STATE(431)] = 9584,
  [SMALL_STATE(432)] = 9588,
  [SMALL_STATE(433)] = 9592,
  [SMALL_STATE(434)] = 9596,
  [SMALL_STATE(435)] = 9600,
  [SMALL_STATE(436)] = 9604,
  [SMALL_STATE(437)] = 9608,
  [SMALL_STATE(438)] = 9612,
  [SMALL_STATE(439)] = 9616,
  [SMALL_STATE(440)] = 9620,
  [SMALL_STATE(441)] = 9624,
  [SMALL_STATE(442)] = 9628,
  [SMALL_STATE(443)] = 9632,
  [SMALL_STATE(444)] = 9636,
  [SMALL_STATE(445)] = 9640,
  [SMALL_STATE(446)] = 9644,
  [SMALL_STATE(447)] = 9648,
  [SMALL_STATE(448)] = 9652,
  [SMALL_STATE(449)] = 9656,
  [SMALL_STATE(450)] = 9660,
  [SMALL_STATE(451)] = 9664,
  [SMALL_STATE(452)] = 9668,
  [SMALL_STATE(453)] = 9672,
  [SMALL_STATE(454)] = 9676,
  [SMALL_STATE(455)] = 9680,
  [SMALL_STATE(456)] = 9684,
  [SMALL_STATE(457)] = 9688,
  [SMALL_STATE(458)] = 9692,
  [SMALL_STATE(459)] = 9696,
  [SMALL_STATE(460)] = 9700,
  [SMALL_STATE(461)] = 9704,
  [SMALL_STATE(462)] = 9708,
  [SMALL_STATE(463)] = 9712,
  [SMALL_STATE(464)] = 9716,
  [SMALL_STATE(465)] = 9720,
  [SMALL_STATE(466)] = 9724,
  [SMALL_STATE(467)] = 9728,
  [SMALL_STATE(468)] = 9732,
  [SMALL_STATE(469)] = 9736,
  [SMALL_STATE(470)] = 9740,
  [SMALL_STATE(471)] = 9744,
  [SMALL_STATE(472)] = 9748,
  [SMALL_STATE(473)] = 9752,
  [SMALL_STATE(474)] = 9756,
  [SMALL_STATE(475)] = 9760,
  [SMALL_STATE(476)] = 9764,
  [SMALL_STATE(477)] = 9768,
  [SMALL_STATE(478)] = 9772,
  [SMALL_STATE(479)] = 9776,
  [SMALL_STATE(480)] = 9780,
  [SMALL_STATE(481)] = 9784,
  [SMALL_STATE(482)] = 9788,
  [SMALL_STATE(483)] = 9792,
  [SMALL_STATE(484)] = 9796,
  [SMALL_STATE(485)] = 9800,
  [SMALL_STATE(486)] = 9804,
  [SMALL_STATE(487)] = 9808,
  [SMALL_STATE(488)] = 9812,
  [SMALL_STATE(489)] = 9816,
  [SMALL_STATE(490)] = 9820,
  [SMALL_STATE(491)] = 9824,
  [SMALL_STATE(492)] = 9828,
  [SMALL_STATE(493)] = 9832,
  [SMALL_STATE(494)] = 9836,
  [SMALL_STATE(495)] = 9840,
  [SMALL_STATE(496)] = 9844,
  [SMALL_STATE(497)] = 9848,
  [SMALL_STATE(498)] = 9852,
  [SMALL_STATE(499)] = 9856,
  [SMALL_STATE(500)] = 9860,
  [SMALL_STATE(501)] = 9864,
  [SMALL_STATE(502)] = 9868,
  [SMALL_STATE(503)] = 9872,
  [SMALL_STATE(504)] = 9876,
  [SMALL_STATE(505)] = 9880,
  [SMALL_STATE(506)] = 9884,
  [SMALL_STATE(507)] = 9888,
  [SMALL_STATE(508)] = 9892,
  [SMALL_STATE(509)] = 9896,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(99),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 7),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 5, .production_id = 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 5, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 6, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 6, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 8),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 8),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_type, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_type, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_type, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 9, .production_id = 9),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 9, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 4, .production_id = 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 4, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positional_field, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positional_field, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(59),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(65),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 7, .production_id = 6),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 6, .production_id = 6),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 5, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 4, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat2, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 2),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 4),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat2, 2), SHIFT_REPEAT(62),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 5), SHIFT_REPEAT(401),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 5),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [696] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(312),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 6),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 8),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 5),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 4),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 4),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 5),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 1),
  [921] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 3),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 5),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 6),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 5),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 7),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_annotation, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 9),
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
