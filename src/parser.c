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
#define STATE_COUNT 545
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_ATmeta = 17,
  anon_sym_ATmodule = 18,
  anon_sym_ATsource = 19,
  anon_sym_DOT = 20,
  anon_sym_ATversion = 21,
  anon_sym_5_DOT1 = 22,
  anon_sym_5_DOT2 = 23,
  anon_sym_5_DOT3 = 24,
  anon_sym_5_DOT4 = 25,
  anon_sym_JIT = 26,
  anon_sym_ATpackage = 27,
  anon_sym_AToperator = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_ATnodiscard = 31,
  anon_sym_ATdeprecated = 32,
  anon_sym_ATcast = 33,
  anon_sym_ATasync = 34,
  anon_sym_AToverload = 35,
  anon_sym_ATenum = 36,
  anon_sym_ATlanguage = 37,
  anon_sym_ATsee = 38,
  anon_sym_public = 39,
  anon_sym_protected = 40,
  anon_sym_private = 41,
  anon_sym_AT = 42,
  anon_sym_extends = 43,
  sym_comment = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  anon_sym_table = 47,
  anon_sym_LT = 48,
  anon_sym_GT = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACK2 = 51,
  anon_sym_RBRACE = 52,
  anon_sym_PIPE = 53,
  anon_sym_fun = 54,
  anon_sym_function = 55,
  anon_sym_self = 56,
  anon_sym_POUND = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_literal_type_token1 = 59,
  anon_sym_any = 60,
  anon_sym_boolean = 61,
  anon_sym_CFunction = 62,
  anon_sym_nil = 63,
  anon_sym_number = 64,
  anon_sym_string = 65,
  anon_sym_userdata = 66,
  anon_sym_void = 67,
  sym_string = 68,
  sym_number = 69,
  sym_identifier = 70,
  sym_diagnostic_identifier = 71,
  sym_documentation = 72,
  sym_class_annotation = 73,
  sym_type_annotation = 74,
  sym_param_annotation = 75,
  sym_alias_annotation = 76,
  sym_return_annotation = 77,
  sym_field_annotation = 78,
  sym_qualifier_annotation = 79,
  sym_generic_annotation = 80,
  sym_vararg_annotation = 81,
  sym_diagnostic_annotation = 82,
  sym_meta_annotation = 83,
  sym_module_annotation = 84,
  sym_source_annotation = 85,
  sym_version_annotation = 86,
  sym_package_annotation = 87,
  sym_operator_annotation = 88,
  sym_nodiscard_annotation = 89,
  sym_deprecated_annotation = 90,
  sym_cast_annotation = 91,
  sym_async_annotation = 92,
  sym_overload_annotation = 93,
  sym_enum_annotation = 94,
  sym_language_injection = 95,
  sym_see_reference = 96,
  sym_qualifier = 97,
  sym_class_at_comment = 98,
  sym_at_comment = 99,
  sym_type = 100,
  sym_array_type = 101,
  sym_table_type = 102,
  sym_table_literal_type = 103,
  sym_union_type = 104,
  sym_parenthesized_type = 105,
  sym_function_type = 106,
  sym_parameter = 107,
  sym_member_type = 108,
  sym_optional_type = 109,
  sym_literal_type = 110,
  sym_builtin_type = 111,
  sym_positional_field = 112,
  aux_sym_type_annotation_repeat1 = 113,
  aux_sym_diagnostic_annotation_repeat1 = 114,
  aux_sym_table_literal_type_repeat1 = 115,
  aux_sym_function_type_repeat1 = 116,
  aux_sym_function_type_repeat2 = 117,
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
  [anon_sym_ATmeta] = "@meta",
  [anon_sym_ATmodule] = "@module",
  [anon_sym_ATsource] = "@source",
  [anon_sym_DOT] = ".",
  [anon_sym_ATversion] = "@version",
  [anon_sym_5_DOT1] = "5.1",
  [anon_sym_5_DOT2] = "5.2",
  [anon_sym_5_DOT3] = "5.3",
  [anon_sym_5_DOT4] = "5.4",
  [anon_sym_JIT] = "JIT",
  [anon_sym_ATpackage] = "@package",
  [anon_sym_AToperator] = "@operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATnodiscard] = "@nodiscard",
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
  [anon_sym_fun] = "fun",
  [anon_sym_function] = "function",
  [anon_sym_self] = "self",
  [anon_sym_POUND] = "#",
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
  [sym_string] = "string",
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
  [sym_meta_annotation] = "meta_annotation",
  [sym_module_annotation] = "module_annotation",
  [sym_source_annotation] = "source_annotation",
  [sym_version_annotation] = "version_annotation",
  [sym_package_annotation] = "package_annotation",
  [sym_operator_annotation] = "operator_annotation",
  [sym_nodiscard_annotation] = "nodiscard_annotation",
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
  [aux_sym_diagnostic_annotation_repeat1] = "diagnostic_annotation_repeat1",
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
  [anon_sym_ATmeta] = anon_sym_ATmeta,
  [anon_sym_ATmodule] = anon_sym_ATmodule,
  [anon_sym_ATsource] = anon_sym_ATsource,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATversion] = anon_sym_ATversion,
  [anon_sym_5_DOT1] = anon_sym_5_DOT1,
  [anon_sym_5_DOT2] = anon_sym_5_DOT2,
  [anon_sym_5_DOT3] = anon_sym_5_DOT3,
  [anon_sym_5_DOT4] = anon_sym_5_DOT4,
  [anon_sym_JIT] = anon_sym_JIT,
  [anon_sym_ATpackage] = anon_sym_ATpackage,
  [anon_sym_AToperator] = anon_sym_AToperator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_ATnodiscard] = anon_sym_ATnodiscard,
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
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [sym_string] = sym_string,
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
  [sym_meta_annotation] = sym_meta_annotation,
  [sym_module_annotation] = sym_module_annotation,
  [sym_source_annotation] = sym_source_annotation,
  [sym_version_annotation] = sym_version_annotation,
  [sym_package_annotation] = sym_package_annotation,
  [sym_operator_annotation] = sym_operator_annotation,
  [sym_nodiscard_annotation] = sym_nodiscard_annotation,
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
  [aux_sym_diagnostic_annotation_repeat1] = aux_sym_diagnostic_annotation_repeat1,
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
  [anon_sym_ATmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5_DOT1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5_DOT3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5_DOT4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATpackage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AToperator] = {
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
  [anon_sym_ATnodiscard] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym_meta_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_module_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_version_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_package_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_operator_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_nodiscard_annotation] = {
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
  [aux_sym_diagnostic_annotation_repeat1] = {
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
  field_extension = 1,
  field_field = 2,
  field_filename = 3,
  field_key = 4,
  field_start_column = 5,
  field_start_line = 6,
  field_value = 7,
  field_version = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_extension] = "extension",
  [field_field] = "field",
  [field_filename] = "filename",
  [field_key] = "key",
  [field_start_column] = "start_column",
  [field_start_line] = "start_line",
  [field_value] = "value",
  [field_version] = "version",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 4},
  [12] = {.index = 23, .length = 4},
  [13] = {.index = 27, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_version, 1},
  [1] =
    {field_extension, 3},
    {field_filename, 1},
  [3] =
    {field_key, 2},
  [4] =
    {field_field, 1},
  [5] =
    {field_extension, 3},
    {field_filename, 1},
    {field_start_line, 5},
  [8] =
    {field_key, 2},
    {field_value, 4},
  [10] =
    {field_field, 1},
    {field_field, 4, .inherited = true},
  [12] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [14] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [17] =
    {field_field, 1},
    {field_field, 5, .inherited = true},
  [19] =
    {field_extension, 3},
    {field_filename, 1},
    {field_start_column, 7},
    {field_start_line, 5},
  [23] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
    {field_field, 6, .inherited = true},
  [27] =
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
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 13,
  [14] = 10,
  [15] = 15,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 20,
  [30] = 21,
  [31] = 31,
  [32] = 19,
  [33] = 33,
  [34] = 22,
  [35] = 24,
  [36] = 18,
  [37] = 19,
  [38] = 38,
  [39] = 31,
  [40] = 40,
  [41] = 41,
  [42] = 26,
  [43] = 27,
  [44] = 20,
  [45] = 45,
  [46] = 46,
  [47] = 21,
  [48] = 22,
  [49] = 24,
  [50] = 19,
  [51] = 51,
  [52] = 51,
  [53] = 31,
  [54] = 26,
  [55] = 27,
  [56] = 20,
  [57] = 57,
  [58] = 21,
  [59] = 22,
  [60] = 24,
  [61] = 27,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 24,
  [68] = 26,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 65,
  [74] = 51,
  [75] = 18,
  [76] = 31,
  [77] = 71,
  [78] = 71,
  [79] = 65,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 21,
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
  [94] = 51,
  [95] = 22,
  [96] = 20,
  [97] = 97,
  [98] = 26,
  [99] = 99,
  [100] = 71,
  [101] = 101,
  [102] = 18,
  [103] = 27,
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
  [127] = 64,
  [128] = 69,
  [129] = 89,
  [130] = 62,
  [131] = 88,
  [132] = 87,
  [133] = 114,
  [134] = 41,
  [135] = 92,
  [136] = 46,
  [137] = 45,
  [138] = 66,
  [139] = 139,
  [140] = 105,
  [141] = 104,
  [142] = 113,
  [143] = 143,
  [144] = 111,
  [145] = 117,
  [146] = 87,
  [147] = 109,
  [148] = 45,
  [149] = 46,
  [150] = 122,
  [151] = 151,
  [152] = 62,
  [153] = 69,
  [154] = 66,
  [155] = 64,
  [156] = 66,
  [157] = 89,
  [158] = 88,
  [159] = 92,
  [160] = 89,
  [161] = 161,
  [162] = 69,
  [163] = 88,
  [164] = 92,
  [165] = 165,
  [166] = 114,
  [167] = 41,
  [168] = 168,
  [169] = 169,
  [170] = 118,
  [171] = 112,
  [172] = 108,
  [173] = 173,
  [174] = 110,
  [175] = 107,
  [176] = 106,
  [177] = 114,
  [178] = 41,
  [179] = 116,
  [180] = 123,
  [181] = 46,
  [182] = 120,
  [183] = 124,
  [184] = 119,
  [185] = 115,
  [186] = 121,
  [187] = 110,
  [188] = 120,
  [189] = 189,
  [190] = 116,
  [191] = 123,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 120,
  [196] = 122,
  [197] = 108,
  [198] = 109,
  [199] = 111,
  [200] = 113,
  [201] = 104,
  [202] = 194,
  [203] = 89,
  [204] = 193,
  [205] = 205,
  [206] = 194,
  [207] = 207,
  [208] = 88,
  [209] = 194,
  [210] = 189,
  [211] = 205,
  [212] = 189,
  [213] = 92,
  [214] = 114,
  [215] = 41,
  [216] = 118,
  [217] = 112,
  [218] = 193,
  [219] = 192,
  [220] = 205,
  [221] = 205,
  [222] = 193,
  [223] = 106,
  [224] = 119,
  [225] = 192,
  [226] = 194,
  [227] = 189,
  [228] = 192,
  [229] = 118,
  [230] = 192,
  [231] = 115,
  [232] = 205,
  [233] = 193,
  [234] = 124,
  [235] = 121,
  [236] = 117,
  [237] = 112,
  [238] = 110,
  [239] = 107,
  [240] = 107,
  [241] = 189,
  [242] = 121,
  [243] = 124,
  [244] = 104,
  [245] = 113,
  [246] = 111,
  [247] = 115,
  [248] = 109,
  [249] = 106,
  [250] = 108,
  [251] = 119,
  [252] = 122,
  [253] = 105,
  [254] = 117,
  [255] = 123,
  [256] = 116,
  [257] = 194,
  [258] = 258,
  [259] = 119,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 118,
  [266] = 266,
  [267] = 267,
  [268] = 112,
  [269] = 110,
  [270] = 264,
  [271] = 271,
  [272] = 272,
  [273] = 122,
  [274] = 264,
  [275] = 106,
  [276] = 276,
  [277] = 124,
  [278] = 278,
  [279] = 115,
  [280] = 264,
  [281] = 104,
  [282] = 113,
  [283] = 111,
  [284] = 109,
  [285] = 285,
  [286] = 108,
  [287] = 287,
  [288] = 123,
  [289] = 116,
  [290] = 117,
  [291] = 264,
  [292] = 107,
  [293] = 120,
  [294] = 121,
  [295] = 295,
  [296] = 295,
  [297] = 297,
  [298] = 297,
  [299] = 295,
  [300] = 297,
  [301] = 301,
  [302] = 301,
  [303] = 295,
  [304] = 297,
  [305] = 305,
  [306] = 297,
  [307] = 307,
  [308] = 308,
  [309] = 301,
  [310] = 301,
  [311] = 295,
  [312] = 301,
  [313] = 313,
  [314] = 314,
  [315] = 87,
  [316] = 316,
  [317] = 87,
  [318] = 318,
  [319] = 64,
  [320] = 62,
  [321] = 45,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 323,
  [333] = 333,
  [334] = 327,
  [335] = 333,
  [336] = 336,
  [337] = 336,
  [338] = 338,
  [339] = 339,
  [340] = 329,
  [341] = 330,
  [342] = 342,
  [343] = 331,
  [344] = 323,
  [345] = 345,
  [346] = 326,
  [347] = 347,
  [348] = 327,
  [349] = 92,
  [350] = 333,
  [351] = 336,
  [352] = 352,
  [353] = 339,
  [354] = 339,
  [355] = 329,
  [356] = 88,
  [357] = 330,
  [358] = 89,
  [359] = 331,
  [360] = 323,
  [361] = 326,
  [362] = 362,
  [363] = 327,
  [364] = 333,
  [365] = 336,
  [366] = 331,
  [367] = 336,
  [368] = 333,
  [369] = 330,
  [370] = 326,
  [371] = 329,
  [372] = 330,
  [373] = 327,
  [374] = 331,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 323,
  [379] = 329,
  [380] = 331,
  [381] = 323,
  [382] = 339,
  [383] = 330,
  [384] = 329,
  [385] = 326,
  [386] = 339,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 391,
  [394] = 392,
  [395] = 391,
  [396] = 396,
  [397] = 397,
  [398] = 391,
  [399] = 397,
  [400] = 392,
  [401] = 391,
  [402] = 392,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 396,
  [413] = 396,
  [414] = 414,
  [415] = 397,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 397,
  [421] = 396,
  [422] = 392,
  [423] = 397,
  [424] = 424,
  [425] = 425,
  [426] = 396,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 396,
  [431] = 431,
  [432] = 432,
  [433] = 397,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
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
  [455] = 438,
  [456] = 439,
  [457] = 440,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 440,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 439,
  [466] = 466,
  [467] = 438,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 478,
  [491] = 479,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 440,
  [496] = 496,
  [497] = 497,
  [498] = 439,
  [499] = 478,
  [500] = 479,
  [501] = 479,
  [502] = 478,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 478,
  [509] = 479,
  [510] = 438,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 478,
  [517] = 517,
  [518] = 493,
  [519] = 519,
  [520] = 448,
  [521] = 521,
  [522] = 493,
  [523] = 523,
  [524] = 448,
  [525] = 525,
  [526] = 493,
  [527] = 440,
  [528] = 448,
  [529] = 439,
  [530] = 493,
  [531] = 438,
  [532] = 448,
  [533] = 487,
  [534] = 534,
  [535] = 487,
  [536] = 536,
  [537] = 487,
  [538] = 538,
  [539] = 487,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(260);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '5') ADVANCE(375);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(345);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 's') ADVANCE(433);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'C') ADVANCE(377);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == 'f') ADVANCE(440);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 's') ADVANCE(396);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(266);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 29:
      if (lookahead == '1') ADVANCE(283);
      if (lookahead == '2') ADVANCE(284);
      if (lookahead == '3') ADVANCE(285);
      if (lookahead == '4') ADVANCE(286);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(25);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 33:
      if (lookahead == 'F') ADVANCE(223);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(287);
      END_STATE();
    case 36:
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(370);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(352);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(265);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 228:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(58);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 232:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 233:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(234)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
      END_STATE();
    case 236:
      if (eof) ADVANCE(260);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '5') ADVANCE(375);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '>') ADVANCE(343);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'J') ADVANCE(34);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(345);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'f') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(168);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 237:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(237)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 238:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(238)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 239:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(239)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 240:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(240)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 241:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(241)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 242:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(242)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 243:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(243)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 244:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(244)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 245:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(245)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 246:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(246)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 247:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(247)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 248:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(248)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 249:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(249)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 250:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(250)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 251:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(251)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 252:
      if (eof) ADVANCE(260);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(252)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 253:
      if (eof) ADVANCE(260);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(253)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 254:
      if (eof) ADVANCE(260);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(254)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 255:
      if (eof) ADVANCE(260);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(255)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 256:
      if (eof) ADVANCE(260);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(256)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 257:
      if (eof) ADVANCE(260);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(257)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 258:
      if (eof) ADVANCE(260);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(258)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 259:
      if (eof) ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(259)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_ATclass);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ATtype);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ATalias);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ATfield);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_ATpublic);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_ATprotected);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_ATprivate);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_ATgeneric);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_ATvararg);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ATdiagnostic);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_ATmeta);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_ATmodule);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_5_DOT1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_5_DOT2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_5_DOT3);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_5_DOT4);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_JIT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_AToperator);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_ATnodiscard);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_ATcast);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_ATasync);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_AToverload);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_ATenum);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_ATlanguage);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(316);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '<') ADVANCE(342);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == '|') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(325);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '@') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(97)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 's') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(234)
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_CFunction);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_CFunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_userdata);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_userdata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead == 'u') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_diagnostic_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(445);
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
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 245},
  [127] = {.lex_state = 245},
  [128] = {.lex_state = 245},
  [129] = {.lex_state = 241},
  [130] = {.lex_state = 245},
  [131] = {.lex_state = 241},
  [132] = {.lex_state = 245},
  [133] = {.lex_state = 237},
  [134] = {.lex_state = 243},
  [135] = {.lex_state = 241},
  [136] = {.lex_state = 245},
  [137] = {.lex_state = 245},
  [138] = {.lex_state = 245},
  [139] = {.lex_state = 251},
  [140] = {.lex_state = 245},
  [141] = {.lex_state = 245},
  [142] = {.lex_state = 245},
  [143] = {.lex_state = 251},
  [144] = {.lex_state = 245},
  [145] = {.lex_state = 245},
  [146] = {.lex_state = 246},
  [147] = {.lex_state = 245},
  [148] = {.lex_state = 246},
  [149] = {.lex_state = 246},
  [150] = {.lex_state = 245},
  [151] = {.lex_state = 251},
  [152] = {.lex_state = 246},
  [153] = {.lex_state = 246},
  [154] = {.lex_state = 246},
  [155] = {.lex_state = 246},
  [156] = {.lex_state = 246},
  [157] = {.lex_state = 242},
  [158] = {.lex_state = 242},
  [159] = {.lex_state = 242},
  [160] = {.lex_state = 247},
  [161] = {.lex_state = 251},
  [162] = {.lex_state = 246},
  [163] = {.lex_state = 247},
  [164] = {.lex_state = 247},
  [165] = {.lex_state = 251},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 249},
  [168] = {.lex_state = 251},
  [169] = {.lex_state = 251},
  [170] = {.lex_state = 245},
  [171] = {.lex_state = 245},
  [172] = {.lex_state = 245},
  [173] = {.lex_state = 251},
  [174] = {.lex_state = 245},
  [175] = {.lex_state = 245},
  [176] = {.lex_state = 245},
  [177] = {.lex_state = 238},
  [178] = {.lex_state = 244},
  [179] = {.lex_state = 245},
  [180] = {.lex_state = 245},
  [181] = {.lex_state = 246},
  [182] = {.lex_state = 245},
  [183] = {.lex_state = 245},
  [184] = {.lex_state = 245},
  [185] = {.lex_state = 245},
  [186] = {.lex_state = 245},
  [187] = {.lex_state = 251},
  [188] = {.lex_state = 251},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 246},
  [191] = {.lex_state = 246},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 246},
  [196] = {.lex_state = 246},
  [197] = {.lex_state = 246},
  [198] = {.lex_state = 246},
  [199] = {.lex_state = 246},
  [200] = {.lex_state = 246},
  [201] = {.lex_state = 246},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 248},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 248},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 248},
  [214] = {.lex_state = 240},
  [215] = {.lex_state = 250},
  [216] = {.lex_state = 251},
  [217] = {.lex_state = 251},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 251},
  [224] = {.lex_state = 251},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 246},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 251},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 251},
  [235] = {.lex_state = 251},
  [236] = {.lex_state = 246},
  [237] = {.lex_state = 246},
  [238] = {.lex_state = 246},
  [239] = {.lex_state = 251},
  [240] = {.lex_state = 246},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 246},
  [243] = {.lex_state = 246},
  [244] = {.lex_state = 251},
  [245] = {.lex_state = 251},
  [246] = {.lex_state = 251},
  [247] = {.lex_state = 246},
  [248] = {.lex_state = 251},
  [249] = {.lex_state = 246},
  [250] = {.lex_state = 251},
  [251] = {.lex_state = 246},
  [252] = {.lex_state = 251},
  [253] = {.lex_state = 246},
  [254] = {.lex_state = 251},
  [255] = {.lex_state = 251},
  [256] = {.lex_state = 251},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 252},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 252},
  [266] = {.lex_state = 252},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 252},
  [269] = {.lex_state = 252},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 252},
  [272] = {.lex_state = 252},
  [273] = {.lex_state = 252},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 252},
  [276] = {.lex_state = 252},
  [277] = {.lex_state = 252},
  [278] = {.lex_state = 36},
  [279] = {.lex_state = 252},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 252},
  [282] = {.lex_state = 252},
  [283] = {.lex_state = 252},
  [284] = {.lex_state = 252},
  [285] = {.lex_state = 252},
  [286] = {.lex_state = 252},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 252},
  [289] = {.lex_state = 252},
  [290] = {.lex_state = 252},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 252},
  [293] = {.lex_state = 252},
  [294] = {.lex_state = 252},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 254},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 256},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 254},
  [316] = {.lex_state = 253},
  [317] = {.lex_state = 255},
  [318] = {.lex_state = 28},
  [319] = {.lex_state = 255},
  [320] = {.lex_state = 255},
  [321] = {.lex_state = 255},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 257},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 27},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 27},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 257},
  [346] = {.lex_state = 27},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 257},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 257},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 257},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 27},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 27},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 257},
  [376] = {.lex_state = 255},
  [377] = {.lex_state = 258},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 27},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 259},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 27},
  [390] = {.lex_state = 259},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 259},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 259},
  [406] = {.lex_state = 259},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 259},
  [409] = {.lex_state = 27},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 259},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 259},
  [417] = {.lex_state = 259},
  [418] = {.lex_state = 259},
  [419] = {.lex_state = 259},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 259},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 259},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 27},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 27},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 27},
  [440] = {.lex_state = 2},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 1},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 27},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 235},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 27},
  [454] = {.lex_state = 27},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 27},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 1},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 27},
  [465] = {.lex_state = 27},
  [466] = {.lex_state = 27},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 27},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 27},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 356},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 27},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 259},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 235},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 356},
  [492] = {.lex_state = 1},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 2},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 1},
  [498] = {.lex_state = 27},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 356},
  [501] = {.lex_state = 356},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 27},
  [507] = {.lex_state = 27},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 356},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 27},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 27},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 2},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 27},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 1},
  [534] = {.lex_state = 27},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 1},
  [540] = {.lex_state = 235},
  [541] = {.lex_state = 27},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 27},
  [544] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_5_DOT1] = ACTIONS(1),
    [anon_sym_5_DOT2] = ACTIONS(1),
    [anon_sym_5_DOT3] = ACTIONS(1),
    [anon_sym_5_DOT4] = ACTIONS(1),
    [anon_sym_JIT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_CFunction] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_userdata] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_documentation] = STATE(505),
    [sym_class_annotation] = STATE(504),
    [sym_type_annotation] = STATE(504),
    [sym_param_annotation] = STATE(504),
    [sym_alias_annotation] = STATE(504),
    [sym_return_annotation] = STATE(504),
    [sym_field_annotation] = STATE(504),
    [sym_qualifier_annotation] = STATE(504),
    [sym_generic_annotation] = STATE(504),
    [sym_vararg_annotation] = STATE(504),
    [sym_diagnostic_annotation] = STATE(504),
    [sym_meta_annotation] = STATE(504),
    [sym_module_annotation] = STATE(504),
    [sym_source_annotation] = STATE(504),
    [sym_version_annotation] = STATE(504),
    [sym_package_annotation] = STATE(504),
    [sym_operator_annotation] = STATE(504),
    [sym_nodiscard_annotation] = STATE(504),
    [sym_deprecated_annotation] = STATE(504),
    [sym_cast_annotation] = STATE(504),
    [sym_async_annotation] = STATE(504),
    [sym_overload_annotation] = STATE(504),
    [sym_enum_annotation] = STATE(504),
    [sym_language_injection] = STATE(504),
    [sym_see_reference] = STATE(504),
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
    [anon_sym_ATmeta] = ACTIONS(23),
    [anon_sym_ATmodule] = ACTIONS(25),
    [anon_sym_ATsource] = ACTIONS(27),
    [anon_sym_ATversion] = ACTIONS(29),
    [anon_sym_ATpackage] = ACTIONS(31),
    [anon_sym_AToperator] = ACTIONS(33),
    [anon_sym_ATnodiscard] = ACTIONS(35),
    [anon_sym_ATdeprecated] = ACTIONS(37),
    [anon_sym_ATcast] = ACTIONS(39),
    [anon_sym_ATasync] = ACTIONS(41),
    [anon_sym_AToverload] = ACTIONS(43),
    [anon_sym_ATenum] = ACTIONS(45),
    [anon_sym_ATlanguage] = ACTIONS(47),
    [anon_sym_ATsee] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(271), 1,
      sym_type,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
    ACTIONS(75), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(89), 1,
      anon_sym_self,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(209), 1,
      sym_type,
    STATE(374), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      anon_sym_self,
    STATE(226), 1,
      sym_type,
    STATE(359), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_self,
    STATE(257), 1,
      sym_type,
    STATE(343), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_self,
    STATE(206), 1,
      sym_type,
    STATE(366), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_self,
    STATE(194), 1,
      sym_type,
    STATE(331), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_self,
    STATE(202), 1,
      sym_type,
    STATE(380), 1,
      sym_parameter,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(127), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(169), 1,
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
    STATE(245), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(297), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      sym_number,
    STATE(298), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_number,
    STATE(304), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_number,
    STATE(307), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_number,
    STATE(306), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_QMARK,
    STATE(151), 1,
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
    STATE(245), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(159), 1,
      sym_number,
    STATE(300), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_QMARK,
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
    STATE(245), 10,
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
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(154), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(295), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(225), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(301), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(241), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(2), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(264), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(233), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(232), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(272), 1,
      sym_type,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(230), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(310), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(69), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(303), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(139), 1,
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
    STATE(245), 10,
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
  [1616] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(227), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [1663] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(270), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [1710] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(66), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [1757] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(296), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [1804] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(262), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [1851] = 10,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(128), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
  [1898] = 10,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(168), 1,
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
    STATE(245), 10,
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
  [1945] = 3,
    ACTIONS(199), 1,
      anon_sym_LT,
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
    ACTIONS(195), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [1978] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(222), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2025] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(221), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2072] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(219), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2119] = 4,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(203), 12,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(205), 12,
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
  [2154] = 8,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(207), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
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
  [2197] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(302), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2244] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(212), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2291] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(291), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2338] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(299), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2385] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(181), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
  [2432] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(46), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2479] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(153), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
  [2526] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(193), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2573] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(220), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2620] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2667] = 10,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(126), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
  [2714] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(309), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2761] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(189), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2808] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(274), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2855] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(211), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [2902] = 4,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(207), 12,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
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
  [2937] = 10,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
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
    STATE(245), 10,
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
  [2984] = 4,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(211), 12,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
    ACTIONS(213), 12,
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
  [3019] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(105), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [3066] = 8,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(211), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(213), 12,
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
  [3109] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(280), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [3156] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(204), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [3203] = 8,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(215), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(217), 12,
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
  [3246] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(258), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [3293] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(116), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [3340] = 10,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(289), 1,
      sym_type,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
  [3387] = 10,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(140), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
  [3434] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(149), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(156), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(162), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(256), 1,
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
    STATE(245), 10,
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
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(179), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(253), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(161), 1,
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
    STATE(245), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(260), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(261), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(312), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(151), 1,
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
    STATE(245), 10,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(266), 1,
      sym_type,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
  [3998] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(263), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4045] = 4,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(222), 12,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
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
  [4080] = 3,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(230), 12,
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
    ACTIONS(228), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4113] = 3,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(217), 12,
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
    ACTIONS(215), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4146] = 10,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(285), 1,
      sym_type,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
  [4193] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(305), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4240] = 3,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(238), 12,
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
    ACTIONS(236), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4273] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(267), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4320] = 10,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(136), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
  [4367] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(210), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4414] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(192), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4461] = 10,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_table,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_fun,
    ACTIONS(137), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(143), 1,
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
    STATE(245), 10,
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
  [4508] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(218), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4555] = 10,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_table,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_fun,
    ACTIONS(67), 1,
      anon_sym_function,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(276), 1,
      sym_type,
    ACTIONS(71), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(282), 10,
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
  [4602] = 10,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_table,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_fun,
    ACTIONS(171), 1,
      anon_sym_function,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(190), 1,
      sym_type,
    ACTIONS(175), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(200), 10,
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
  [4649] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(287), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4696] = 10,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      anon_sym_table,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_fun,
    ACTIONS(187), 1,
      anon_sym_function,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(138), 1,
      sym_type,
    ACTIONS(191), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(142), 10,
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
  [4743] = 10,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_table,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_fun,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type,
    ACTIONS(93), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(113), 10,
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
  [4790] = 2,
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
    ACTIONS(195), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4820] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(222), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
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
  [4858] = 2,
    ACTIONS(242), 12,
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
    ACTIONS(240), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4888] = 2,
    ACTIONS(246), 12,
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
    ACTIONS(244), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4918] = 2,
    ACTIONS(250), 12,
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
    ACTIONS(248), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4948] = 2,
    ACTIONS(254), 12,
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
    ACTIONS(252), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [4978] = 2,
    ACTIONS(258), 12,
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
    ACTIONS(256), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5008] = 2,
    ACTIONS(262), 12,
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
    ACTIONS(260), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5038] = 2,
    ACTIONS(266), 12,
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
    ACTIONS(264), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5068] = 2,
    ACTIONS(270), 12,
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
    ACTIONS(268), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5098] = 3,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 12,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
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
  [5130] = 2,
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
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5160] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(278), 8,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
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
  [5198] = 2,
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
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5228] = 2,
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
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5258] = 2,
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
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5288] = 2,
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
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5318] = 2,
    ACTIONS(300), 12,
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
    ACTIONS(298), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5348] = 2,
    ACTIONS(304), 12,
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
    ACTIONS(302), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5378] = 2,
    ACTIONS(308), 12,
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
    ACTIONS(306), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5408] = 2,
    ACTIONS(312), 12,
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
    ACTIONS(310), 13,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACK2,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
  [5438] = 2,
    ACTIONS(314), 4,
      anon_sym_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(316), 12,
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
  [5459] = 10,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(308), 1,
      aux_sym_type_annotation_repeat1,
    STATE(462), 1,
      sym_at_comment,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5491] = 4,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(213), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5510] = 8,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(127), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(217), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5537] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(217), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5554] = 4,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(209), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5573] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(230), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5590] = 4,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(224), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5609] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5626] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(343), 1,
      anon_sym_LT,
    ACTIONS(197), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5643] = 3,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(238), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5660] = 8,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(137), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(209), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5687] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(205), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5706] = 8,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(130), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(213), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5733] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(353), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    STATE(459), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5759] = 6,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(224), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [5781] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5795] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5809] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      sym_comment,
    STATE(460), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5835] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5849] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5863] = 4,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(224), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5881] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5895] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(205), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5913] = 8,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(148), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5939] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5953] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym_comment,
    STATE(469), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [5979] = 4,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(209), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [5997] = 8,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(319), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6023] = 8,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(320), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6049] = 4,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(213), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6067] = 8,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6093] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(217), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6109] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(230), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6125] = 3,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(238), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6141] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(217), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6157] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym_comment,
    STATE(544), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6183] = 8,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(155), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6209] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      anon_sym_COLON,
    ACTIONS(230), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6225] = 3,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(238), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6241] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 1,
      sym_comment,
    STATE(513), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6267] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6283] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 1,
      anon_sym_LT,
    ACTIONS(197), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6299] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      sym_comment,
    STATE(515), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6325] = 8,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
    ACTIONS(404), 1,
      sym_comment,
    STATE(435), 1,
      sym_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6351] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6365] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6379] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6393] = 8,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
    ACTIONS(408), 1,
      anon_sym_AT,
    ACTIONS(410), 1,
      sym_comment,
    STATE(519), 1,
      sym_class_at_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6419] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6433] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6447] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6461] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6477] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 1,
      anon_sym_LT,
    ACTIONS(197), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6493] = 6,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(322), 1,
      anon_sym_QMARK,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    ACTIONS(324), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(280), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [6515] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6529] = 8,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(321), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6555] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6569] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6583] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6597] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6611] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 8,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6625] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6638] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6651] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(386), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6674] = 6,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6695] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6708] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6731] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(373), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6754] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6777] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6790] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6803] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6816] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6829] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6842] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6855] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6868] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6891] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(217), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6906] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(334), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6929] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6952] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [6975] = 3,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      anon_sym_QMARK,
    ACTIONS(268), 6,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [6990] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(230), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7005] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7028] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(353), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7051] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(335), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7074] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7097] = 3,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 1,
      anon_sym_COLON,
    ACTIONS(238), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7112] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7127] = 3,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(197), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7142] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7155] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7168] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(327), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7191] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7214] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7237] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7260] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(363), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7283] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7296] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7309] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7332] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(357), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7355] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(354), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7378] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(367), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7401] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7414] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(351), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7437] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7450] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7473] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(348), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7496] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7509] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7522] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7535] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7548] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7561] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7574] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7587] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(339), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7610] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7623] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7636] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7649] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7662] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7675] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7688] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7701] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7714] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7727] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7740] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7753] = 6,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(368), 1,
      anon_sym_QMARK,
    ACTIONS(372), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7774] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7787] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 7,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7800] = 6,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    ACTIONS(357), 1,
      anon_sym_PIPE,
    ACTIONS(280), 2,
      anon_sym_AT,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7821] = 7,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(341), 1,
      aux_sym_function_type_repeat2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7844] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7862] = 2,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7874] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7892] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(484), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7910] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(486), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7928] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7946] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7966] = 2,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [7978] = 6,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(500), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [7998] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(506), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8016] = 2,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8028] = 2,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8040] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8060] = 6,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
    ACTIONS(514), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8080] = 6,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
    ACTIONS(518), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8100] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8112] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8132] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(242), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8144] = 6,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
    ACTIONS(526), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8164] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8176] = 5,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(9), 1,
      sym_positional_field,
    STATE(328), 1,
      sym_qualifier,
    ACTIONS(528), 3,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
  [8194] = 2,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8206] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8226] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8238] = 2,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8250] = 2,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8262] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8274] = 6,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8294] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8306] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8324] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8336] = 6,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_QMARK,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    ACTIONS(498), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8356] = 2,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8368] = 6,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8388] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8400] = 2,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8412] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [8424] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8441] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8458] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(552), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8475] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(554), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8492] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8509] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(558), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8526] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8543] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(562), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8560] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8577] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8594] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8611] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8628] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(572), 1,
      anon_sym_RBRACK2,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8645] = 6,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym_type_annotation_repeat1,
    STATE(511), 1,
      sym_at_comment,
  [8664] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(578), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8681] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(580), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8698] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8715] = 5,
    ACTIONS(51), 1,
      anon_sym_QMARK,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(584), 1,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [8732] = 5,
    ACTIONS(408), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      sym_comment,
    STATE(472), 1,
      sym_class_at_comment,
  [8748] = 1,
    ACTIONS(592), 5,
      anon_sym_5_DOT1,
      anon_sym_5_DOT2,
      anon_sym_5_DOT3,
      anon_sym_5_DOT4,
      anon_sym_JIT,
  [8756] = 4,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(224), 2,
      anon_sym_AT,
      sym_comment,
  [8770] = 4,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 1,
      anon_sym_COLON,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      sym_comment,
  [8783] = 4,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_type_annotation_repeat1,
  [8796] = 3,
    ACTIONS(602), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(424), 1,
      sym_parameter,
    ACTIONS(604), 2,
      anon_sym_self,
      sym_identifier,
  [8807] = 4,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_type_annotation_repeat1,
  [8820] = 4,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_type_annotation_repeat1,
  [8833] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_type_annotation_repeat1,
  [8846] = 3,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [8856] = 3,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_QMARK,
  [8866] = 3,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(616), 1,
      sym_comment,
  [8876] = 3,
    ACTIONS(618), 1,
      anon_sym_fun,
    ACTIONS(620), 1,
      anon_sym_function,
    STATE(416), 1,
      sym_function_type,
  [8886] = 3,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      sym_identifier,
  [8896] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [8906] = 3,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      sym_identifier,
    STATE(15), 1,
      sym_positional_field,
  [8916] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [8926] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [8936] = 3,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(329), 1,
      aux_sym_function_type_repeat1,
  [8946] = 3,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_QMARK,
  [8956] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [8966] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [8976] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [8986] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [8996] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9006] = 3,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9016] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9026] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9036] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9046] = 3,
    ACTIONS(657), 1,
      ts_builtin_sym_end,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [9056] = 3,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_function_type_repeat1,
  [9066] = 3,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(662), 1,
      anon_sym_QMARK,
  [9076] = 3,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(668), 1,
      sym_comment,
  [9086] = 3,
    ACTIONS(670), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 1,
      sym_identifier,
  [9096] = 3,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9106] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9116] = 3,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COLON,
  [9126] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9136] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9146] = 3,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9156] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9166] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9176] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9186] = 3,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_COLON,
  [9196] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9206] = 3,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [9216] = 3,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_function_type_repeat1,
  [9226] = 3,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_QMARK,
  [9236] = 3,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    ACTIONS(706), 1,
      anon_sym_RBRACE,
    ACTIONS(708), 1,
      sym_identifier,
  [9246] = 3,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
    STATE(342), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [9256] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9266] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9276] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9286] = 3,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_function_type_repeat1,
  [9296] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9306] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9316] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9326] = 3,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 1,
      sym_identifier,
  [9336] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9346] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9356] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9366] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_function_type_repeat1,
  [9376] = 3,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    ACTIONS(736), 1,
      anon_sym_COLON,
    ACTIONS(738), 1,
      sym_comment,
  [9386] = 3,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_COMMA,
  [9396] = 3,
    ACTIONS(742), 1,
      ts_builtin_sym_end,
    ACTIONS(744), 1,
      anon_sym_extends,
    ACTIONS(746), 1,
      sym_comment,
  [9406] = 3,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(748), 1,
      anon_sym_QMARK,
  [9416] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9426] = 3,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_function_type_repeat1,
  [9436] = 3,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(750), 1,
      anon_sym_QMARK,
  [9446] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9456] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(352), 1,
      aux_sym_function_type_repeat2,
  [9466] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_function_type_repeat1,
  [9476] = 3,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(760), 1,
      sym_identifier,
  [9486] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      aux_sym_table_literal_type_repeat1,
  [9496] = 2,
    ACTIONS(764), 1,
      ts_builtin_sym_end,
    ACTIONS(766), 1,
      sym_comment,
  [9503] = 2,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      anon_sym_QMARK,
  [9510] = 1,
    ACTIONS(768), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [9515] = 2,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
    ACTIONS(772), 1,
      sym_comment,
  [9522] = 2,
    ACTIONS(774), 1,
      anon_sym_COLON,
    ACTIONS(776), 1,
      anon_sym_QMARK,
  [9529] = 2,
    ACTIONS(778), 1,
      anon_sym_COLON,
    ACTIONS(780), 1,
      anon_sym_QMARK,
  [9536] = 2,
    ACTIONS(782), 1,
      anon_sym_COLON,
    ACTIONS(784), 1,
      anon_sym_QMARK,
  [9543] = 2,
    ACTIONS(786), 1,
      anon_sym_COLON,
    ACTIONS(788), 1,
      anon_sym_QMARK,
  [9550] = 2,
    ACTIONS(790), 1,
      anon_sym_COLON,
    ACTIONS(792), 1,
      anon_sym_QMARK,
  [9557] = 2,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [9564] = 2,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9571] = 2,
    ACTIONS(796), 1,
      anon_sym_COLON,
    ACTIONS(798), 1,
      anon_sym_QMARK,
  [9578] = 2,
    ACTIONS(754), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9585] = 2,
    ACTIONS(800), 1,
      anon_sym_COLON,
    ACTIONS(802), 1,
      anon_sym_QMARK,
  [9592] = 2,
    ACTIONS(804), 1,
      anon_sym_COLON,
    ACTIONS(806), 1,
      anon_sym_QMARK,
  [9599] = 2,
    ACTIONS(808), 1,
      anon_sym_COLON,
    ACTIONS(810), 1,
      anon_sym_QMARK,
  [9606] = 2,
    ACTIONS(812), 1,
      ts_builtin_sym_end,
    ACTIONS(814), 1,
      sym_comment,
  [9613] = 2,
    ACTIONS(816), 1,
      ts_builtin_sym_end,
    ACTIONS(818), 1,
      anon_sym_COLON,
  [9620] = 2,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
    ACTIONS(822), 1,
      sym_comment,
  [9627] = 2,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
    ACTIONS(826), 1,
      sym_comment,
  [9634] = 2,
    ACTIONS(828), 1,
      anon_sym_COLON,
    ACTIONS(830), 1,
      anon_sym_QMARK,
  [9641] = 2,
    ACTIONS(832), 1,
      ts_builtin_sym_end,
    ACTIONS(834), 1,
      sym_comment,
  [9648] = 1,
    ACTIONS(836), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [9653] = 2,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 1,
      anon_sym_COLON,
  [9660] = 2,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(844), 1,
      sym_comment,
  [9667] = 2,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [9674] = 2,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [9681] = 2,
    ACTIONS(846), 1,
      anon_sym_COLON,
    ACTIONS(848), 1,
      anon_sym_LPAREN,
  [9688] = 2,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9695] = 2,
    ACTIONS(850), 1,
      ts_builtin_sym_end,
    ACTIONS(852), 1,
      sym_comment,
  [9702] = 2,
    ACTIONS(854), 1,
      ts_builtin_sym_end,
    ACTIONS(856), 1,
      sym_comment,
  [9709] = 2,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    ACTIONS(860), 1,
      sym_comment,
  [9716] = 2,
    ACTIONS(862), 1,
      ts_builtin_sym_end,
    ACTIONS(864), 1,
      sym_comment,
  [9723] = 2,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9730] = 2,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [9737] = 2,
    ACTIONS(866), 1,
      anon_sym_COLON,
    ACTIONS(868), 1,
      anon_sym_QMARK,
  [9744] = 2,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9751] = 1,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9756] = 2,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
    ACTIONS(872), 1,
      sym_comment,
  [9763] = 2,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [9770] = 1,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [9775] = 2,
    ACTIONS(874), 1,
      ts_builtin_sym_end,
    ACTIONS(876), 1,
      anon_sym_COLON,
  [9782] = 2,
    ACTIONS(664), 1,
      ts_builtin_sym_end,
    ACTIONS(878), 1,
      sym_comment,
  [9789] = 2,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [9796] = 2,
    ACTIONS(880), 1,
      anon_sym_LBRACK,
    ACTIONS(882), 1,
      sym_identifier,
  [9803] = 2,
    ACTIONS(884), 1,
      anon_sym_COLON,
    ACTIONS(886), 1,
      anon_sym_QMARK,
  [9810] = 2,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [9817] = 1,
    ACTIONS(888), 1,
      sym_identifier,
  [9821] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [9825] = 1,
    ACTIONS(890), 1,
      ts_builtin_sym_end,
  [9829] = 1,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
  [9833] = 1,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
  [9837] = 1,
    ACTIONS(896), 1,
      sym_identifier,
  [9841] = 1,
    ACTIONS(898), 1,
      anon_sym_RBRACK,
  [9845] = 1,
    ACTIONS(900), 1,
      ts_builtin_sym_end,
  [9849] = 1,
    ACTIONS(902), 1,
      sym_number,
  [9853] = 1,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
  [9857] = 1,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [9861] = 1,
    ACTIONS(908), 1,
      sym_identifier,
  [9865] = 1,
    ACTIONS(910), 1,
      anon_sym_COLON,
  [9869] = 1,
    ACTIONS(912), 1,
      ts_builtin_sym_end,
  [9873] = 1,
    ACTIONS(914), 1,
      anon_sym_COLON,
  [9877] = 1,
    ACTIONS(916), 1,
      sym_diagnostic_identifier,
  [9881] = 1,
    ACTIONS(918), 1,
      ts_builtin_sym_end,
  [9885] = 1,
    ACTIONS(436), 1,
      anon_sym_COLON,
  [9889] = 1,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
  [9893] = 1,
    ACTIONS(922), 1,
      sym_identifier,
  [9897] = 1,
    ACTIONS(924), 1,
      sym_identifier,
  [9901] = 1,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
  [9905] = 1,
    ACTIONS(928), 1,
      sym_identifier,
  [9909] = 1,
    ACTIONS(930), 1,
      anon_sym_RBRACK,
  [9913] = 1,
    ACTIONS(932), 1,
      anon_sym_RBRACK2,
  [9917] = 1,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
  [9921] = 1,
    ACTIONS(936), 1,
      ts_builtin_sym_end,
  [9925] = 1,
    ACTIONS(938), 1,
      anon_sym_RBRACK,
  [9929] = 1,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
  [9933] = 1,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
  [9937] = 1,
    ACTIONS(942), 1,
      sym_identifier,
  [9941] = 1,
    ACTIONS(944), 1,
      sym_identifier,
  [9945] = 1,
    ACTIONS(946), 1,
      sym_identifier,
  [9949] = 1,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
  [9953] = 1,
    ACTIONS(950), 1,
      ts_builtin_sym_end,
  [9957] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [9961] = 1,
    ACTIONS(952), 1,
      sym_identifier,
  [9965] = 1,
    ACTIONS(954), 1,
      sym_number,
  [9969] = 1,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
  [9973] = 1,
    ACTIONS(572), 1,
      anon_sym_RBRACK2,
  [9977] = 1,
    ACTIONS(958), 1,
      ts_builtin_sym_end,
  [9981] = 1,
    ACTIONS(960), 1,
      anon_sym_COLON,
  [9985] = 1,
    ACTIONS(962), 1,
      ts_builtin_sym_end,
  [9989] = 1,
    ACTIONS(964), 1,
      sym_identifier,
  [9993] = 1,
    ACTIONS(966), 1,
      anon_sym_LPAREN,
  [9997] = 1,
    ACTIONS(968), 1,
      aux_sym_literal_type_token1,
  [10001] = 1,
    ACTIONS(970), 1,
      anon_sym_COLON,
  [10005] = 1,
    ACTIONS(972), 1,
      ts_builtin_sym_end,
  [10009] = 1,
    ACTIONS(974), 1,
      sym_identifier,
  [10013] = 1,
    ACTIONS(976), 1,
      ts_builtin_sym_end,
  [10017] = 1,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
  [10021] = 1,
    ACTIONS(980), 1,
      sym_comment,
  [10025] = 1,
    ACTIONS(982), 1,
      ts_builtin_sym_end,
  [10029] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACK2,
  [10033] = 1,
    ACTIONS(984), 1,
      ts_builtin_sym_end,
  [10037] = 1,
    ACTIONS(986), 1,
      sym_diagnostic_identifier,
  [10041] = 1,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
  [10045] = 1,
    ACTIONS(990), 1,
      aux_sym_literal_type_token1,
  [10049] = 1,
    ACTIONS(992), 1,
      anon_sym_DOT,
  [10053] = 1,
    ACTIONS(994), 1,
      anon_sym_COLON,
  [10057] = 1,
    ACTIONS(996), 1,
      ts_builtin_sym_end,
  [10061] = 1,
    ACTIONS(998), 1,
      anon_sym_RBRACK,
  [10065] = 1,
    ACTIONS(1000), 1,
      ts_builtin_sym_end,
  [10069] = 1,
    ACTIONS(1002), 1,
      sym_number,
  [10073] = 1,
    ACTIONS(1004), 1,
      sym_identifier,
  [10077] = 1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
  [10081] = 1,
    ACTIONS(1006), 1,
      aux_sym_literal_type_token1,
  [10085] = 1,
    ACTIONS(1008), 1,
      aux_sym_literal_type_token1,
  [10089] = 1,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
  [10093] = 1,
    ACTIONS(1012), 1,
      ts_builtin_sym_end,
  [10097] = 1,
    ACTIONS(1014), 1,
      ts_builtin_sym_end,
  [10101] = 1,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
  [10105] = 1,
    ACTIONS(1018), 1,
      sym_identifier,
  [10109] = 1,
    ACTIONS(1020), 1,
      sym_identifier,
  [10113] = 1,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
  [10117] = 1,
    ACTIONS(1024), 1,
      aux_sym_literal_type_token1,
  [10121] = 1,
    ACTIONS(1026), 1,
      anon_sym_DQUOTE,
  [10125] = 1,
    ACTIONS(1028), 1,
      ts_builtin_sym_end,
  [10129] = 1,
    ACTIONS(1030), 1,
      ts_builtin_sym_end,
  [10133] = 1,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
  [10137] = 1,
    ACTIONS(1032), 1,
      sym_identifier,
  [10141] = 1,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
  [10145] = 1,
    ACTIONS(1036), 1,
      anon_sym_LPAREN,
  [10149] = 1,
    ACTIONS(1038), 1,
      ts_builtin_sym_end,
  [10153] = 1,
    ACTIONS(1040), 1,
      anon_sym_COLON,
  [10157] = 1,
    ACTIONS(1042), 1,
      ts_builtin_sym_end,
  [10161] = 1,
    ACTIONS(1044), 1,
      anon_sym_COLON,
  [10165] = 1,
    ACTIONS(1046), 1,
      sym_identifier,
  [10169] = 1,
    ACTIONS(1048), 1,
      anon_sym_COLON,
  [10173] = 1,
    ACTIONS(1050), 1,
      ts_builtin_sym_end,
  [10177] = 1,
    ACTIONS(1052), 1,
      anon_sym_COLON,
  [10181] = 1,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [10185] = 1,
    ACTIONS(1054), 1,
      anon_sym_COLON,
  [10189] = 1,
    ACTIONS(1056), 1,
      anon_sym_RBRACK,
  [10193] = 1,
    ACTIONS(1058), 1,
      anon_sym_COLON,
  [10197] = 1,
    ACTIONS(1060), 1,
      sym_identifier,
  [10201] = 1,
    ACTIONS(1062), 1,
      anon_sym_COLON,
  [10205] = 1,
    ACTIONS(1064), 1,
      anon_sym_DQUOTE,
  [10209] = 1,
    ACTIONS(1066), 1,
      anon_sym_COLON,
  [10213] = 1,
    ACTIONS(570), 1,
      anon_sym_RBRACK2,
  [10217] = 1,
    ACTIONS(1068), 1,
      sym_identifier,
  [10221] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACK2,
  [10225] = 1,
    ACTIONS(1070), 1,
      sym_string,
  [10229] = 1,
    ACTIONS(554), 1,
      anon_sym_RBRACK2,
  [10233] = 1,
    ACTIONS(1072), 1,
      ts_builtin_sym_end,
  [10237] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACK2,
  [10241] = 1,
    ACTIONS(1074), 1,
      sym_diagnostic_identifier,
  [10245] = 1,
    ACTIONS(1076), 1,
      sym_identifier,
  [10249] = 1,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
  [10253] = 1,
    ACTIONS(1080), 1,
      sym_identifier,
  [10257] = 1,
    ACTIONS(1082), 1,
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
  [SMALL_STATE(35)] = 1663,
  [SMALL_STATE(36)] = 1710,
  [SMALL_STATE(37)] = 1757,
  [SMALL_STATE(38)] = 1804,
  [SMALL_STATE(39)] = 1851,
  [SMALL_STATE(40)] = 1898,
  [SMALL_STATE(41)] = 1945,
  [SMALL_STATE(42)] = 1978,
  [SMALL_STATE(43)] = 2025,
  [SMALL_STATE(44)] = 2072,
  [SMALL_STATE(45)] = 2119,
  [SMALL_STATE(46)] = 2154,
  [SMALL_STATE(47)] = 2197,
  [SMALL_STATE(48)] = 2244,
  [SMALL_STATE(49)] = 2291,
  [SMALL_STATE(50)] = 2338,
  [SMALL_STATE(51)] = 2385,
  [SMALL_STATE(52)] = 2432,
  [SMALL_STATE(53)] = 2479,
  [SMALL_STATE(54)] = 2526,
  [SMALL_STATE(55)] = 2573,
  [SMALL_STATE(56)] = 2620,
  [SMALL_STATE(57)] = 2667,
  [SMALL_STATE(58)] = 2714,
  [SMALL_STATE(59)] = 2761,
  [SMALL_STATE(60)] = 2808,
  [SMALL_STATE(61)] = 2855,
  [SMALL_STATE(62)] = 2902,
  [SMALL_STATE(63)] = 2937,
  [SMALL_STATE(64)] = 2984,
  [SMALL_STATE(65)] = 3019,
  [SMALL_STATE(66)] = 3066,
  [SMALL_STATE(67)] = 3109,
  [SMALL_STATE(68)] = 3156,
  [SMALL_STATE(69)] = 3203,
  [SMALL_STATE(70)] = 3246,
  [SMALL_STATE(71)] = 3293,
  [SMALL_STATE(72)] = 3340,
  [SMALL_STATE(73)] = 3387,
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
  [SMALL_STATE(87)] = 4045,
  [SMALL_STATE(88)] = 4080,
  [SMALL_STATE(89)] = 4113,
  [SMALL_STATE(90)] = 4146,
  [SMALL_STATE(91)] = 4193,
  [SMALL_STATE(92)] = 4240,
  [SMALL_STATE(93)] = 4273,
  [SMALL_STATE(94)] = 4320,
  [SMALL_STATE(95)] = 4367,
  [SMALL_STATE(96)] = 4414,
  [SMALL_STATE(97)] = 4461,
  [SMALL_STATE(98)] = 4508,
  [SMALL_STATE(99)] = 4555,
  [SMALL_STATE(100)] = 4602,
  [SMALL_STATE(101)] = 4649,
  [SMALL_STATE(102)] = 4696,
  [SMALL_STATE(103)] = 4743,
  [SMALL_STATE(104)] = 4790,
  [SMALL_STATE(105)] = 4820,
  [SMALL_STATE(106)] = 4858,
  [SMALL_STATE(107)] = 4888,
  [SMALL_STATE(108)] = 4918,
  [SMALL_STATE(109)] = 4948,
  [SMALL_STATE(110)] = 4978,
  [SMALL_STATE(111)] = 5008,
  [SMALL_STATE(112)] = 5038,
  [SMALL_STATE(113)] = 5068,
  [SMALL_STATE(114)] = 5098,
  [SMALL_STATE(115)] = 5130,
  [SMALL_STATE(116)] = 5160,
  [SMALL_STATE(117)] = 5198,
  [SMALL_STATE(118)] = 5228,
  [SMALL_STATE(119)] = 5258,
  [SMALL_STATE(120)] = 5288,
  [SMALL_STATE(121)] = 5318,
  [SMALL_STATE(122)] = 5348,
  [SMALL_STATE(123)] = 5378,
  [SMALL_STATE(124)] = 5408,
  [SMALL_STATE(125)] = 5438,
  [SMALL_STATE(126)] = 5459,
  [SMALL_STATE(127)] = 5491,
  [SMALL_STATE(128)] = 5510,
  [SMALL_STATE(129)] = 5537,
  [SMALL_STATE(130)] = 5554,
  [SMALL_STATE(131)] = 5573,
  [SMALL_STATE(132)] = 5590,
  [SMALL_STATE(133)] = 5609,
  [SMALL_STATE(134)] = 5626,
  [SMALL_STATE(135)] = 5643,
  [SMALL_STATE(136)] = 5660,
  [SMALL_STATE(137)] = 5687,
  [SMALL_STATE(138)] = 5706,
  [SMALL_STATE(139)] = 5733,
  [SMALL_STATE(140)] = 5759,
  [SMALL_STATE(141)] = 5781,
  [SMALL_STATE(142)] = 5795,
  [SMALL_STATE(143)] = 5809,
  [SMALL_STATE(144)] = 5835,
  [SMALL_STATE(145)] = 5849,
  [SMALL_STATE(146)] = 5863,
  [SMALL_STATE(147)] = 5881,
  [SMALL_STATE(148)] = 5895,
  [SMALL_STATE(149)] = 5913,
  [SMALL_STATE(150)] = 5939,
  [SMALL_STATE(151)] = 5953,
  [SMALL_STATE(152)] = 5979,
  [SMALL_STATE(153)] = 5997,
  [SMALL_STATE(154)] = 6023,
  [SMALL_STATE(155)] = 6049,
  [SMALL_STATE(156)] = 6067,
  [SMALL_STATE(157)] = 6093,
  [SMALL_STATE(158)] = 6109,
  [SMALL_STATE(159)] = 6125,
  [SMALL_STATE(160)] = 6141,
  [SMALL_STATE(161)] = 6157,
  [SMALL_STATE(162)] = 6183,
  [SMALL_STATE(163)] = 6209,
  [SMALL_STATE(164)] = 6225,
  [SMALL_STATE(165)] = 6241,
  [SMALL_STATE(166)] = 6267,
  [SMALL_STATE(167)] = 6283,
  [SMALL_STATE(168)] = 6299,
  [SMALL_STATE(169)] = 6325,
  [SMALL_STATE(170)] = 6351,
  [SMALL_STATE(171)] = 6365,
  [SMALL_STATE(172)] = 6379,
  [SMALL_STATE(173)] = 6393,
  [SMALL_STATE(174)] = 6419,
  [SMALL_STATE(175)] = 6433,
  [SMALL_STATE(176)] = 6447,
  [SMALL_STATE(177)] = 6461,
  [SMALL_STATE(178)] = 6477,
  [SMALL_STATE(179)] = 6493,
  [SMALL_STATE(180)] = 6515,
  [SMALL_STATE(181)] = 6529,
  [SMALL_STATE(182)] = 6555,
  [SMALL_STATE(183)] = 6569,
  [SMALL_STATE(184)] = 6583,
  [SMALL_STATE(185)] = 6597,
  [SMALL_STATE(186)] = 6611,
  [SMALL_STATE(187)] = 6625,
  [SMALL_STATE(188)] = 6638,
  [SMALL_STATE(189)] = 6651,
  [SMALL_STATE(190)] = 6674,
  [SMALL_STATE(191)] = 6695,
  [SMALL_STATE(192)] = 6708,
  [SMALL_STATE(193)] = 6731,
  [SMALL_STATE(194)] = 6754,
  [SMALL_STATE(195)] = 6777,
  [SMALL_STATE(196)] = 6790,
  [SMALL_STATE(197)] = 6803,
  [SMALL_STATE(198)] = 6816,
  [SMALL_STATE(199)] = 6829,
  [SMALL_STATE(200)] = 6842,
  [SMALL_STATE(201)] = 6855,
  [SMALL_STATE(202)] = 6868,
  [SMALL_STATE(203)] = 6891,
  [SMALL_STATE(204)] = 6906,
  [SMALL_STATE(205)] = 6929,
  [SMALL_STATE(206)] = 6952,
  [SMALL_STATE(207)] = 6975,
  [SMALL_STATE(208)] = 6990,
  [SMALL_STATE(209)] = 7005,
  [SMALL_STATE(210)] = 7028,
  [SMALL_STATE(211)] = 7051,
  [SMALL_STATE(212)] = 7074,
  [SMALL_STATE(213)] = 7097,
  [SMALL_STATE(214)] = 7112,
  [SMALL_STATE(215)] = 7127,
  [SMALL_STATE(216)] = 7142,
  [SMALL_STATE(217)] = 7155,
  [SMALL_STATE(218)] = 7168,
  [SMALL_STATE(219)] = 7191,
  [SMALL_STATE(220)] = 7214,
  [SMALL_STATE(221)] = 7237,
  [SMALL_STATE(222)] = 7260,
  [SMALL_STATE(223)] = 7283,
  [SMALL_STATE(224)] = 7296,
  [SMALL_STATE(225)] = 7309,
  [SMALL_STATE(226)] = 7332,
  [SMALL_STATE(227)] = 7355,
  [SMALL_STATE(228)] = 7378,
  [SMALL_STATE(229)] = 7401,
  [SMALL_STATE(230)] = 7414,
  [SMALL_STATE(231)] = 7437,
  [SMALL_STATE(232)] = 7450,
  [SMALL_STATE(233)] = 7473,
  [SMALL_STATE(234)] = 7496,
  [SMALL_STATE(235)] = 7509,
  [SMALL_STATE(236)] = 7522,
  [SMALL_STATE(237)] = 7535,
  [SMALL_STATE(238)] = 7548,
  [SMALL_STATE(239)] = 7561,
  [SMALL_STATE(240)] = 7574,
  [SMALL_STATE(241)] = 7587,
  [SMALL_STATE(242)] = 7610,
  [SMALL_STATE(243)] = 7623,
  [SMALL_STATE(244)] = 7636,
  [SMALL_STATE(245)] = 7649,
  [SMALL_STATE(246)] = 7662,
  [SMALL_STATE(247)] = 7675,
  [SMALL_STATE(248)] = 7688,
  [SMALL_STATE(249)] = 7701,
  [SMALL_STATE(250)] = 7714,
  [SMALL_STATE(251)] = 7727,
  [SMALL_STATE(252)] = 7740,
  [SMALL_STATE(253)] = 7753,
  [SMALL_STATE(254)] = 7774,
  [SMALL_STATE(255)] = 7787,
  [SMALL_STATE(256)] = 7800,
  [SMALL_STATE(257)] = 7821,
  [SMALL_STATE(258)] = 7844,
  [SMALL_STATE(259)] = 7862,
  [SMALL_STATE(260)] = 7874,
  [SMALL_STATE(261)] = 7892,
  [SMALL_STATE(262)] = 7910,
  [SMALL_STATE(263)] = 7928,
  [SMALL_STATE(264)] = 7946,
  [SMALL_STATE(265)] = 7966,
  [SMALL_STATE(266)] = 7978,
  [SMALL_STATE(267)] = 7998,
  [SMALL_STATE(268)] = 8016,
  [SMALL_STATE(269)] = 8028,
  [SMALL_STATE(270)] = 8040,
  [SMALL_STATE(271)] = 8060,
  [SMALL_STATE(272)] = 8080,
  [SMALL_STATE(273)] = 8100,
  [SMALL_STATE(274)] = 8112,
  [SMALL_STATE(275)] = 8132,
  [SMALL_STATE(276)] = 8144,
  [SMALL_STATE(277)] = 8164,
  [SMALL_STATE(278)] = 8176,
  [SMALL_STATE(279)] = 8194,
  [SMALL_STATE(280)] = 8206,
  [SMALL_STATE(281)] = 8226,
  [SMALL_STATE(282)] = 8238,
  [SMALL_STATE(283)] = 8250,
  [SMALL_STATE(284)] = 8262,
  [SMALL_STATE(285)] = 8274,
  [SMALL_STATE(286)] = 8294,
  [SMALL_STATE(287)] = 8306,
  [SMALL_STATE(288)] = 8324,
  [SMALL_STATE(289)] = 8336,
  [SMALL_STATE(290)] = 8356,
  [SMALL_STATE(291)] = 8368,
  [SMALL_STATE(292)] = 8388,
  [SMALL_STATE(293)] = 8400,
  [SMALL_STATE(294)] = 8412,
  [SMALL_STATE(295)] = 8424,
  [SMALL_STATE(296)] = 8441,
  [SMALL_STATE(297)] = 8458,
  [SMALL_STATE(298)] = 8475,
  [SMALL_STATE(299)] = 8492,
  [SMALL_STATE(300)] = 8509,
  [SMALL_STATE(301)] = 8526,
  [SMALL_STATE(302)] = 8543,
  [SMALL_STATE(303)] = 8560,
  [SMALL_STATE(304)] = 8577,
  [SMALL_STATE(305)] = 8594,
  [SMALL_STATE(306)] = 8611,
  [SMALL_STATE(307)] = 8628,
  [SMALL_STATE(308)] = 8645,
  [SMALL_STATE(309)] = 8664,
  [SMALL_STATE(310)] = 8681,
  [SMALL_STATE(311)] = 8698,
  [SMALL_STATE(312)] = 8715,
  [SMALL_STATE(313)] = 8732,
  [SMALL_STATE(314)] = 8748,
  [SMALL_STATE(315)] = 8756,
  [SMALL_STATE(316)] = 8770,
  [SMALL_STATE(317)] = 8783,
  [SMALL_STATE(318)] = 8796,
  [SMALL_STATE(319)] = 8807,
  [SMALL_STATE(320)] = 8820,
  [SMALL_STATE(321)] = 8833,
  [SMALL_STATE(322)] = 8846,
  [SMALL_STATE(323)] = 8856,
  [SMALL_STATE(324)] = 8866,
  [SMALL_STATE(325)] = 8876,
  [SMALL_STATE(326)] = 8886,
  [SMALL_STATE(327)] = 8896,
  [SMALL_STATE(328)] = 8906,
  [SMALL_STATE(329)] = 8916,
  [SMALL_STATE(330)] = 8926,
  [SMALL_STATE(331)] = 8936,
  [SMALL_STATE(332)] = 8946,
  [SMALL_STATE(333)] = 8956,
  [SMALL_STATE(334)] = 8966,
  [SMALL_STATE(335)] = 8976,
  [SMALL_STATE(336)] = 8986,
  [SMALL_STATE(337)] = 8996,
  [SMALL_STATE(338)] = 9006,
  [SMALL_STATE(339)] = 9016,
  [SMALL_STATE(340)] = 9026,
  [SMALL_STATE(341)] = 9036,
  [SMALL_STATE(342)] = 9046,
  [SMALL_STATE(343)] = 9056,
  [SMALL_STATE(344)] = 9066,
  [SMALL_STATE(345)] = 9076,
  [SMALL_STATE(346)] = 9086,
  [SMALL_STATE(347)] = 9096,
  [SMALL_STATE(348)] = 9106,
  [SMALL_STATE(349)] = 9116,
  [SMALL_STATE(350)] = 9126,
  [SMALL_STATE(351)] = 9136,
  [SMALL_STATE(352)] = 9146,
  [SMALL_STATE(353)] = 9156,
  [SMALL_STATE(354)] = 9166,
  [SMALL_STATE(355)] = 9176,
  [SMALL_STATE(356)] = 9186,
  [SMALL_STATE(357)] = 9196,
  [SMALL_STATE(358)] = 9206,
  [SMALL_STATE(359)] = 9216,
  [SMALL_STATE(360)] = 9226,
  [SMALL_STATE(361)] = 9236,
  [SMALL_STATE(362)] = 9246,
  [SMALL_STATE(363)] = 9256,
  [SMALL_STATE(364)] = 9266,
  [SMALL_STATE(365)] = 9276,
  [SMALL_STATE(366)] = 9286,
  [SMALL_STATE(367)] = 9296,
  [SMALL_STATE(368)] = 9306,
  [SMALL_STATE(369)] = 9316,
  [SMALL_STATE(370)] = 9326,
  [SMALL_STATE(371)] = 9336,
  [SMALL_STATE(372)] = 9346,
  [SMALL_STATE(373)] = 9356,
  [SMALL_STATE(374)] = 9366,
  [SMALL_STATE(375)] = 9376,
  [SMALL_STATE(376)] = 9386,
  [SMALL_STATE(377)] = 9396,
  [SMALL_STATE(378)] = 9406,
  [SMALL_STATE(379)] = 9416,
  [SMALL_STATE(380)] = 9426,
  [SMALL_STATE(381)] = 9436,
  [SMALL_STATE(382)] = 9446,
  [SMALL_STATE(383)] = 9456,
  [SMALL_STATE(384)] = 9466,
  [SMALL_STATE(385)] = 9476,
  [SMALL_STATE(386)] = 9486,
  [SMALL_STATE(387)] = 9496,
  [SMALL_STATE(388)] = 9503,
  [SMALL_STATE(389)] = 9510,
  [SMALL_STATE(390)] = 9515,
  [SMALL_STATE(391)] = 9522,
  [SMALL_STATE(392)] = 9529,
  [SMALL_STATE(393)] = 9536,
  [SMALL_STATE(394)] = 9543,
  [SMALL_STATE(395)] = 9550,
  [SMALL_STATE(396)] = 9557,
  [SMALL_STATE(397)] = 9564,
  [SMALL_STATE(398)] = 9571,
  [SMALL_STATE(399)] = 9578,
  [SMALL_STATE(400)] = 9585,
  [SMALL_STATE(401)] = 9592,
  [SMALL_STATE(402)] = 9599,
  [SMALL_STATE(403)] = 9606,
  [SMALL_STATE(404)] = 9613,
  [SMALL_STATE(405)] = 9620,
  [SMALL_STATE(406)] = 9627,
  [SMALL_STATE(407)] = 9634,
  [SMALL_STATE(408)] = 9641,
  [SMALL_STATE(409)] = 9648,
  [SMALL_STATE(410)] = 9653,
  [SMALL_STATE(411)] = 9660,
  [SMALL_STATE(412)] = 9667,
  [SMALL_STATE(413)] = 9674,
  [SMALL_STATE(414)] = 9681,
  [SMALL_STATE(415)] = 9688,
  [SMALL_STATE(416)] = 9695,
  [SMALL_STATE(417)] = 9702,
  [SMALL_STATE(418)] = 9709,
  [SMALL_STATE(419)] = 9716,
  [SMALL_STATE(420)] = 9723,
  [SMALL_STATE(421)] = 9730,
  [SMALL_STATE(422)] = 9737,
  [SMALL_STATE(423)] = 9744,
  [SMALL_STATE(424)] = 9751,
  [SMALL_STATE(425)] = 9756,
  [SMALL_STATE(426)] = 9763,
  [SMALL_STATE(427)] = 9770,
  [SMALL_STATE(428)] = 9775,
  [SMALL_STATE(429)] = 9782,
  [SMALL_STATE(430)] = 9789,
  [SMALL_STATE(431)] = 9796,
  [SMALL_STATE(432)] = 9803,
  [SMALL_STATE(433)] = 9810,
  [SMALL_STATE(434)] = 9817,
  [SMALL_STATE(435)] = 9821,
  [SMALL_STATE(436)] = 9825,
  [SMALL_STATE(437)] = 9829,
  [SMALL_STATE(438)] = 9833,
  [SMALL_STATE(439)] = 9837,
  [SMALL_STATE(440)] = 9841,
  [SMALL_STATE(441)] = 9845,
  [SMALL_STATE(442)] = 9849,
  [SMALL_STATE(443)] = 9853,
  [SMALL_STATE(444)] = 9857,
  [SMALL_STATE(445)] = 9861,
  [SMALL_STATE(446)] = 9865,
  [SMALL_STATE(447)] = 9869,
  [SMALL_STATE(448)] = 9873,
  [SMALL_STATE(449)] = 9877,
  [SMALL_STATE(450)] = 9881,
  [SMALL_STATE(451)] = 9885,
  [SMALL_STATE(452)] = 9889,
  [SMALL_STATE(453)] = 9893,
  [SMALL_STATE(454)] = 9897,
  [SMALL_STATE(455)] = 9901,
  [SMALL_STATE(456)] = 9905,
  [SMALL_STATE(457)] = 9909,
  [SMALL_STATE(458)] = 9913,
  [SMALL_STATE(459)] = 9917,
  [SMALL_STATE(460)] = 9921,
  [SMALL_STATE(461)] = 9925,
  [SMALL_STATE(462)] = 9929,
  [SMALL_STATE(463)] = 9933,
  [SMALL_STATE(464)] = 9937,
  [SMALL_STATE(465)] = 9941,
  [SMALL_STATE(466)] = 9945,
  [SMALL_STATE(467)] = 9949,
  [SMALL_STATE(468)] = 9953,
  [SMALL_STATE(469)] = 9957,
  [SMALL_STATE(470)] = 9961,
  [SMALL_STATE(471)] = 9965,
  [SMALL_STATE(472)] = 9969,
  [SMALL_STATE(473)] = 9973,
  [SMALL_STATE(474)] = 9977,
  [SMALL_STATE(475)] = 9981,
  [SMALL_STATE(476)] = 9985,
  [SMALL_STATE(477)] = 9989,
  [SMALL_STATE(478)] = 9993,
  [SMALL_STATE(479)] = 9997,
  [SMALL_STATE(480)] = 10001,
  [SMALL_STATE(481)] = 10005,
  [SMALL_STATE(482)] = 10009,
  [SMALL_STATE(483)] = 10013,
  [SMALL_STATE(484)] = 10017,
  [SMALL_STATE(485)] = 10021,
  [SMALL_STATE(486)] = 10025,
  [SMALL_STATE(487)] = 10029,
  [SMALL_STATE(488)] = 10033,
  [SMALL_STATE(489)] = 10037,
  [SMALL_STATE(490)] = 10041,
  [SMALL_STATE(491)] = 10045,
  [SMALL_STATE(492)] = 10049,
  [SMALL_STATE(493)] = 10053,
  [SMALL_STATE(494)] = 10057,
  [SMALL_STATE(495)] = 10061,
  [SMALL_STATE(496)] = 10065,
  [SMALL_STATE(497)] = 10069,
  [SMALL_STATE(498)] = 10073,
  [SMALL_STATE(499)] = 10077,
  [SMALL_STATE(500)] = 10081,
  [SMALL_STATE(501)] = 10085,
  [SMALL_STATE(502)] = 10089,
  [SMALL_STATE(503)] = 10093,
  [SMALL_STATE(504)] = 10097,
  [SMALL_STATE(505)] = 10101,
  [SMALL_STATE(506)] = 10105,
  [SMALL_STATE(507)] = 10109,
  [SMALL_STATE(508)] = 10113,
  [SMALL_STATE(509)] = 10117,
  [SMALL_STATE(510)] = 10121,
  [SMALL_STATE(511)] = 10125,
  [SMALL_STATE(512)] = 10129,
  [SMALL_STATE(513)] = 10133,
  [SMALL_STATE(514)] = 10137,
  [SMALL_STATE(515)] = 10141,
  [SMALL_STATE(516)] = 10145,
  [SMALL_STATE(517)] = 10149,
  [SMALL_STATE(518)] = 10153,
  [SMALL_STATE(519)] = 10157,
  [SMALL_STATE(520)] = 10161,
  [SMALL_STATE(521)] = 10165,
  [SMALL_STATE(522)] = 10169,
  [SMALL_STATE(523)] = 10173,
  [SMALL_STATE(524)] = 10177,
  [SMALL_STATE(525)] = 10181,
  [SMALL_STATE(526)] = 10185,
  [SMALL_STATE(527)] = 10189,
  [SMALL_STATE(528)] = 10193,
  [SMALL_STATE(529)] = 10197,
  [SMALL_STATE(530)] = 10201,
  [SMALL_STATE(531)] = 10205,
  [SMALL_STATE(532)] = 10209,
  [SMALL_STATE(533)] = 10213,
  [SMALL_STATE(534)] = 10217,
  [SMALL_STATE(535)] = 10221,
  [SMALL_STATE(536)] = 10225,
  [SMALL_STATE(537)] = 10229,
  [SMALL_STATE(538)] = 10233,
  [SMALL_STATE(539)] = 10237,
  [SMALL_STATE(540)] = 10241,
  [SMALL_STATE(541)] = 10245,
  [SMALL_STATE(542)] = 10249,
  [SMALL_STATE(543)] = 10253,
  [SMALL_STATE(544)] = 10257,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(65),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 5, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 5, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 12),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 9),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 9),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 4, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 4, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 9, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 9, .production_id = 13),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 9),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_type, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_type, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 6, .production_id = 6),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 6, .production_id = 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_type, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 7),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 7),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positional_field, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positional_field, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(73),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 5),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(79),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat2, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 7, .production_id = 9),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 6, .production_id = 9),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 5, .production_id = 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 4, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 2),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 7),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 4),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 8), SHIFT_REPEAT(431),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 8),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagnostic_annotation_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagnostic_annotation_repeat1, 2), SHIFT_REPEAT(489),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 6),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(318),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat2, 2), SHIFT_REPEAT(70),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 4),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_annotation, 2, .production_id = 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_annotation, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_annotation, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 4, .production_id = 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodiscard_annotation, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_annotation, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 2),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 8),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 6, .production_id = 5),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_annotation, 3, .production_id = 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 5),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_annotation, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 3),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 6),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 5),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 7),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 3),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 3),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodiscard_annotation, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_annotation, 2),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_annotation, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 8, .production_id = 11),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 8),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 1),
  [1016] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 9),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 4),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 5),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 3),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_annotation, 1),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 5),
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
