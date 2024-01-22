#include "tree_sitter/parser.h"

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
#define STATE_COUNT 784
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  anon_sym_ATclass = 1,
  anon_sym_COLON = 2,
  anon_sym_COMMA = 3,
  anon_sym_ATtype = 4,
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
  aux_sym_link_reference_token1 = 39,
  anon_sym_LBRACE = 40,
  anon_sym_ATlink = 41,
  anon_sym_RBRACE = 42,
  anon_sym_ATsince = 43,
  anon_sym_LBRACK_LBRACK = 44,
  anon_sym_ATas = 45,
  anon_sym_RBRACK_RBRACK = 46,
  anon_sym_public = 47,
  anon_sym_protected = 48,
  anon_sym_private = 49,
  anon_sym_package = 50,
  anon_sym_AT = 51,
  anon_sym_extends = 52,
  sym_comment = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  anon_sym_table = 56,
  anon_sym_LT = 57,
  anon_sym_GT = 58,
  anon_sym_RBRACK2 = 59,
  anon_sym_PIPE = 60,
  anon_sym_fun = 61,
  anon_sym_function = 62,
  anon_sym_self = 63,
  anon_sym_POUND = 64,
  anon_sym_DQUOTE = 65,
  aux_sym_literal_type_token1 = 66,
  anon_sym_SQUOTE = 67,
  aux_sym_literal_type_token2 = 68,
  anon_sym_any = 69,
  anon_sym_boolean = 70,
  anon_sym_CFunction = 71,
  anon_sym_nil = 72,
  anon_sym_number = 73,
  anon_sym_string = 74,
  anon_sym_userdata = 75,
  anon_sym_void = 76,
  sym_string = 77,
  sym_number = 78,
  sym_numeric_literal_type = 79,
  sym_identifier = 80,
  sym_diagnostic_identifier = 81,
  sym_documentation = 82,
  sym_class_annotation = 83,
  sym_type_annotation = 84,
  sym_param_annotation = 85,
  sym_alias_annotation = 86,
  sym_return_annotation = 87,
  sym_field_annotation = 88,
  sym_qualifier_annotation = 89,
  sym_generic_annotation = 90,
  sym_vararg_annotation = 91,
  sym_diagnostic_annotation = 92,
  sym_meta_annotation = 93,
  sym_module_annotation = 94,
  sym_source_annotation = 95,
  sym_version_annotation = 96,
  sym_package_annotation = 97,
  sym_operator_annotation = 98,
  sym_nodiscard_annotation = 99,
  sym_deprecated_annotation = 100,
  sym_cast_annotation = 101,
  sym_async_annotation = 102,
  sym_overload_annotation = 103,
  sym_enum_annotation = 104,
  sym_language_injection = 105,
  sym_see_reference = 106,
  sym_link_reference = 107,
  sym_since_annotation = 108,
  sym_as_annotation = 109,
  sym_qualifier = 110,
  sym_class_at_comment = 111,
  sym_at_comment = 112,
  sym_type = 113,
  sym_array_type = 114,
  sym_table_type = 115,
  sym_table_literal_type = 116,
  sym_union_type = 117,
  sym_parenthesized_type = 118,
  sym_function_type = 119,
  sym_parameter = 120,
  sym_member_type = 121,
  sym_optional_type = 122,
  sym_literal_type = 123,
  sym_builtin_type = 124,
  sym_positional_field = 125,
  sym_indexed_field = 126,
  aux_sym_class_annotation_repeat1 = 127,
  aux_sym_type_annotation_repeat1 = 128,
  aux_sym_diagnostic_annotation_repeat1 = 129,
  aux_sym_table_literal_type_repeat1 = 130,
  aux_sym_function_type_repeat1 = 131,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATclass] = "@class",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATtype] = "@type",
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
  [aux_sym_link_reference_token1] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_ATlink] = "@link",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATsince] = "@since",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_ATas] = "@as",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_public] = "public",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_package] = "package",
  [anon_sym_AT] = "@",
  [anon_sym_extends] = "extends",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_table] = "table",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_RBRACK2] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_fun] = "fun",
  [anon_sym_function] = "function",
  [anon_sym_self] = "self",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_literal_type_token1] = "literal_type_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_literal_type_token2] = "literal_type_token2",
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
  [sym_numeric_literal_type] = "numeric_literal_type",
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
  [sym_link_reference] = "link_reference",
  [sym_since_annotation] = "since_annotation",
  [sym_as_annotation] = "as_annotation",
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
  [sym_indexed_field] = "indexed_field",
  [aux_sym_class_annotation_repeat1] = "class_annotation_repeat1",
  [aux_sym_type_annotation_repeat1] = "type_annotation_repeat1",
  [aux_sym_diagnostic_annotation_repeat1] = "diagnostic_annotation_repeat1",
  [aux_sym_table_literal_type_repeat1] = "table_literal_type_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATclass] = anon_sym_ATclass,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATtype] = anon_sym_ATtype,
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
  [aux_sym_link_reference_token1] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_ATlink] = anon_sym_ATlink,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATsince] = anon_sym_ATsince,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_ATas] = anon_sym_ATas,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_extends] = anon_sym_extends,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_literal_type_token1] = aux_sym_literal_type_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_literal_type_token2] = aux_sym_literal_type_token2,
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
  [sym_numeric_literal_type] = sym_numeric_literal_type,
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
  [sym_link_reference] = sym_link_reference,
  [sym_since_annotation] = sym_since_annotation,
  [sym_as_annotation] = sym_as_annotation,
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
  [sym_indexed_field] = sym_indexed_field,
  [aux_sym_class_annotation_repeat1] = aux_sym_class_annotation_repeat1,
  [aux_sym_type_annotation_repeat1] = aux_sym_type_annotation_repeat1,
  [aux_sym_diagnostic_annotation_repeat1] = aux_sym_diagnostic_annotation_repeat1,
  [aux_sym_table_literal_type_repeat1] = aux_sym_table_literal_type_repeat1,
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
  [anon_sym_COMMA] = {
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
  [aux_sym_link_reference_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsince] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
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
  [anon_sym_package] = {
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
  [anon_sym_RBRACK2] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_type_token2] = {
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
  [sym_numeric_literal_type] = {
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
  [sym_link_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_since_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_as_annotation] = {
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
  [sym_indexed_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_annotation_repeat1] = {
    .visible = false,
    .named = false,
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
};

enum ts_field_identifiers {
  field_extension = 1,
  field_field = 2,
  field_filename = 3,
  field_key = 4,
  field_major = 5,
  field_minor = 6,
  field_name = 7,
  field_patch = 8,
  field_start_column = 9,
  field_start_line = 10,
  field_value = 11,
  field_version = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_extension] = "extension",
  [field_field] = "field",
  [field_filename] = "filename",
  [field_key] = "key",
  [field_major] = "major",
  [field_minor] = "minor",
  [field_name] = "name",
  [field_patch] = "patch",
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
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 4},
  [14] = {.index = 27, .length = 4},
  [15] = {.index = 31, .length = 1},
  [16] = {.index = 32, .length = 4},
  [17] = {.index = 36, .length = 1},
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
    {field_major, 1},
    {field_minor, 3},
    {field_patch, 5},
  [11] =
    {field_field, 1},
    {field_field, 4, .inherited = true},
  [13] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [15] =
    {field_key, 2},
    {field_value, 4},
  [17] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [20] =
    {field_field, 1},
    {field_field, 5, .inherited = true},
  [22] =
    {field_name, 4},
  [23] =
    {field_extension, 3},
    {field_filename, 1},
    {field_start_column, 7},
    {field_start_line, 5},
  [27] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
    {field_field, 6, .inherited = true},
  [31] =
    {field_name, 5},
  [32] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
    {field_field, 7, .inherited = true},
  [36] =
    {field_name, 6},
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
  [9] = 3,
  [10] = 3,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 13,
  [27] = 13,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 13,
  [34] = 34,
  [35] = 13,
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
  [47] = 46,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 43,
  [61] = 45,
  [62] = 46,
  [63] = 48,
  [64] = 50,
  [65] = 52,
  [66] = 53,
  [67] = 43,
  [68] = 45,
  [69] = 46,
  [70] = 48,
  [71] = 50,
  [72] = 52,
  [73] = 53,
  [74] = 43,
  [75] = 45,
  [76] = 46,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 48,
  [84] = 54,
  [85] = 85,
  [86] = 45,
  [87] = 48,
  [88] = 50,
  [89] = 89,
  [90] = 54,
  [91] = 91,
  [92] = 52,
  [93] = 53,
  [94] = 54,
  [95] = 54,
  [96] = 96,
  [97] = 43,
  [98] = 45,
  [99] = 46,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 54,
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
  [116] = 59,
  [117] = 78,
  [118] = 80,
  [119] = 81,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 42,
  [124] = 43,
  [125] = 125,
  [126] = 126,
  [127] = 59,
  [128] = 78,
  [129] = 96,
  [130] = 130,
  [131] = 121,
  [132] = 48,
  [133] = 50,
  [134] = 134,
  [135] = 52,
  [136] = 80,
  [137] = 81,
  [138] = 138,
  [139] = 139,
  [140] = 121,
  [141] = 52,
  [142] = 42,
  [143] = 143,
  [144] = 50,
  [145] = 42,
  [146] = 146,
  [147] = 147,
  [148] = 50,
  [149] = 96,
  [150] = 48,
  [151] = 59,
  [152] = 78,
  [153] = 153,
  [154] = 80,
  [155] = 81,
  [156] = 156,
  [157] = 121,
  [158] = 46,
  [159] = 53,
  [160] = 52,
  [161] = 53,
  [162] = 162,
  [163] = 121,
  [164] = 42,
  [165] = 45,
  [166] = 53,
  [167] = 143,
  [168] = 168,
  [169] = 169,
  [170] = 96,
  [171] = 171,
  [172] = 81,
  [173] = 80,
  [174] = 174,
  [175] = 78,
  [176] = 59,
  [177] = 177,
  [178] = 178,
  [179] = 113,
  [180] = 12,
  [181] = 37,
  [182] = 28,
  [183] = 38,
  [184] = 184,
  [185] = 36,
  [186] = 41,
  [187] = 34,
  [188] = 25,
  [189] = 24,
  [190] = 23,
  [191] = 21,
  [192] = 20,
  [193] = 40,
  [194] = 18,
  [195] = 195,
  [196] = 32,
  [197] = 156,
  [198] = 40,
  [199] = 113,
  [200] = 12,
  [201] = 37,
  [202] = 28,
  [203] = 38,
  [204] = 36,
  [205] = 39,
  [206] = 41,
  [207] = 34,
  [208] = 25,
  [209] = 24,
  [210] = 23,
  [211] = 21,
  [212] = 20,
  [213] = 104,
  [214] = 111,
  [215] = 19,
  [216] = 110,
  [217] = 109,
  [218] = 108,
  [219] = 18,
  [220] = 17,
  [221] = 19,
  [222] = 122,
  [223] = 39,
  [224] = 11,
  [225] = 113,
  [226] = 40,
  [227] = 17,
  [228] = 228,
  [229] = 103,
  [230] = 11,
  [231] = 22,
  [232] = 22,
  [233] = 101,
  [234] = 32,
  [235] = 112,
  [236] = 125,
  [237] = 169,
  [238] = 138,
  [239] = 102,
  [240] = 107,
  [241] = 153,
  [242] = 134,
  [243] = 168,
  [244] = 139,
  [245] = 174,
  [246] = 28,
  [247] = 112,
  [248] = 40,
  [249] = 174,
  [250] = 250,
  [251] = 39,
  [252] = 139,
  [253] = 22,
  [254] = 254,
  [255] = 17,
  [256] = 18,
  [257] = 24,
  [258] = 19,
  [259] = 134,
  [260] = 107,
  [261] = 17,
  [262] = 32,
  [263] = 138,
  [264] = 34,
  [265] = 265,
  [266] = 25,
  [267] = 267,
  [268] = 102,
  [269] = 24,
  [270] = 25,
  [271] = 34,
  [272] = 20,
  [273] = 41,
  [274] = 169,
  [275] = 36,
  [276] = 168,
  [277] = 11,
  [278] = 109,
  [279] = 156,
  [280] = 111,
  [281] = 110,
  [282] = 109,
  [283] = 108,
  [284] = 110,
  [285] = 104,
  [286] = 38,
  [287] = 103,
  [288] = 101,
  [289] = 113,
  [290] = 125,
  [291] = 19,
  [292] = 28,
  [293] = 138,
  [294] = 37,
  [295] = 153,
  [296] = 39,
  [297] = 108,
  [298] = 17,
  [299] = 299,
  [300] = 11,
  [301] = 156,
  [302] = 168,
  [303] = 169,
  [304] = 22,
  [305] = 305,
  [306] = 306,
  [307] = 174,
  [308] = 139,
  [309] = 309,
  [310] = 104,
  [311] = 32,
  [312] = 12,
  [313] = 134,
  [314] = 107,
  [315] = 11,
  [316] = 103,
  [317] = 19,
  [318] = 102,
  [319] = 101,
  [320] = 112,
  [321] = 125,
  [322] = 40,
  [323] = 113,
  [324] = 111,
  [325] = 122,
  [326] = 326,
  [327] = 18,
  [328] = 153,
  [329] = 20,
  [330] = 21,
  [331] = 23,
  [332] = 332,
  [333] = 112,
  [334] = 125,
  [335] = 122,
  [336] = 110,
  [337] = 138,
  [338] = 17,
  [339] = 153,
  [340] = 109,
  [341] = 108,
  [342] = 19,
  [343] = 156,
  [344] = 168,
  [345] = 169,
  [346] = 111,
  [347] = 104,
  [348] = 11,
  [349] = 174,
  [350] = 139,
  [351] = 103,
  [352] = 101,
  [353] = 332,
  [354] = 354,
  [355] = 134,
  [356] = 107,
  [357] = 111,
  [358] = 110,
  [359] = 109,
  [360] = 102,
  [361] = 108,
  [362] = 104,
  [363] = 363,
  [364] = 40,
  [365] = 113,
  [366] = 103,
  [367] = 101,
  [368] = 112,
  [369] = 125,
  [370] = 138,
  [371] = 153,
  [372] = 156,
  [373] = 168,
  [374] = 169,
  [375] = 174,
  [376] = 139,
  [377] = 134,
  [378] = 107,
  [379] = 102,
  [380] = 380,
  [381] = 332,
  [382] = 382,
  [383] = 332,
  [384] = 363,
  [385] = 354,
  [386] = 380,
  [387] = 382,
  [388] = 332,
  [389] = 382,
  [390] = 363,
  [391] = 354,
  [392] = 380,
  [393] = 382,
  [394] = 380,
  [395] = 363,
  [396] = 354,
  [397] = 380,
  [398] = 398,
  [399] = 380,
  [400] = 382,
  [401] = 332,
  [402] = 363,
  [403] = 354,
  [404] = 380,
  [405] = 382,
  [406] = 363,
  [407] = 354,
  [408] = 380,
  [409] = 382,
  [410] = 332,
  [411] = 363,
  [412] = 354,
  [413] = 413,
  [414] = 414,
  [415] = 174,
  [416] = 102,
  [417] = 107,
  [418] = 299,
  [419] = 134,
  [420] = 414,
  [421] = 139,
  [422] = 422,
  [423] = 169,
  [424] = 424,
  [425] = 168,
  [426] = 156,
  [427] = 414,
  [428] = 153,
  [429] = 138,
  [430] = 430,
  [431] = 431,
  [432] = 125,
  [433] = 414,
  [434] = 414,
  [435] = 112,
  [436] = 101,
  [437] = 103,
  [438] = 104,
  [439] = 108,
  [440] = 109,
  [441] = 110,
  [442] = 111,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 414,
  [448] = 414,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 451,
  [453] = 453,
  [454] = 453,
  [455] = 455,
  [456] = 453,
  [457] = 457,
  [458] = 453,
  [459] = 459,
  [460] = 451,
  [461] = 453,
  [462] = 453,
  [463] = 453,
  [464] = 451,
  [465] = 451,
  [466] = 455,
  [467] = 455,
  [468] = 451,
  [469] = 469,
  [470] = 451,
  [471] = 455,
  [472] = 455,
  [473] = 473,
  [474] = 455,
  [475] = 455,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 12,
  [481] = 481,
  [482] = 41,
  [483] = 23,
  [484] = 484,
  [485] = 485,
  [486] = 12,
  [487] = 36,
  [488] = 38,
  [489] = 37,
  [490] = 21,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 478,
  [496] = 493,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 498,
  [501] = 498,
  [502] = 493,
  [503] = 494,
  [504] = 499,
  [505] = 19,
  [506] = 11,
  [507] = 498,
  [508] = 492,
  [509] = 497,
  [510] = 497,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 513,
  [516] = 497,
  [517] = 511,
  [518] = 518,
  [519] = 513,
  [520] = 520,
  [521] = 512,
  [522] = 512,
  [523] = 523,
  [524] = 512,
  [525] = 17,
  [526] = 492,
  [527] = 513,
  [528] = 512,
  [529] = 511,
  [530] = 511,
  [531] = 531,
  [532] = 511,
  [533] = 493,
  [534] = 497,
  [535] = 494,
  [536] = 498,
  [537] = 537,
  [538] = 493,
  [539] = 499,
  [540] = 493,
  [541] = 494,
  [542] = 499,
  [543] = 494,
  [544] = 493,
  [545] = 494,
  [546] = 498,
  [547] = 492,
  [548] = 497,
  [549] = 499,
  [550] = 511,
  [551] = 492,
  [552] = 492,
  [553] = 513,
  [554] = 497,
  [555] = 512,
  [556] = 556,
  [557] = 499,
  [558] = 512,
  [559] = 498,
  [560] = 513,
  [561] = 494,
  [562] = 511,
  [563] = 563,
  [564] = 497,
  [565] = 565,
  [566] = 498,
  [567] = 567,
  [568] = 568,
  [569] = 493,
  [570] = 494,
  [571] = 499,
  [572] = 492,
  [573] = 513,
  [574] = 574,
  [575] = 575,
  [576] = 575,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 578,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 589,
  [594] = 580,
  [595] = 595,
  [596] = 580,
  [597] = 597,
  [598] = 575,
  [599] = 589,
  [600] = 578,
  [601] = 578,
  [602] = 575,
  [603] = 603,
  [604] = 589,
  [605] = 575,
  [606] = 578,
  [607] = 589,
  [608] = 580,
  [609] = 578,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 580,
  [614] = 614,
  [615] = 589,
  [616] = 575,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 575,
  [623] = 623,
  [624] = 580,
  [625] = 580,
  [626] = 626,
  [627] = 589,
  [628] = 628,
  [629] = 578,
  [630] = 578,
  [631] = 580,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 637,
  [648] = 638,
  [649] = 639,
  [650] = 640,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 640,
  [658] = 639,
  [659] = 659,
  [660] = 638,
  [661] = 637,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 640,
  [672] = 672,
  [673] = 673,
  [674] = 639,
  [675] = 638,
  [676] = 637,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 640,
  [683] = 639,
  [684] = 665,
  [685] = 666,
  [686] = 667,
  [687] = 638,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 637,
  [693] = 693,
  [694] = 665,
  [695] = 666,
  [696] = 667,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 640,
  [703] = 639,
  [704] = 665,
  [705] = 666,
  [706] = 667,
  [707] = 638,
  [708] = 637,
  [709] = 709,
  [710] = 667,
  [711] = 666,
  [712] = 665,
  [713] = 713,
  [714] = 665,
  [715] = 666,
  [716] = 667,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 665,
  [725] = 666,
  [726] = 667,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 656,
  [736] = 736,
  [737] = 737,
  [738] = 738,
  [739] = 739,
  [740] = 740,
  [741] = 741,
  [742] = 640,
  [743] = 639,
  [744] = 741,
  [745] = 638,
  [746] = 656,
  [747] = 637,
  [748] = 741,
  [749] = 749,
  [750] = 656,
  [751] = 751,
  [752] = 741,
  [753] = 753,
  [754] = 656,
  [755] = 755,
  [756] = 741,
  [757] = 757,
  [758] = 656,
  [759] = 759,
  [760] = 741,
  [761] = 761,
  [762] = 656,
  [763] = 763,
  [764] = 741,
  [765] = 665,
  [766] = 655,
  [767] = 767,
  [768] = 655,
  [769] = 769,
  [770] = 655,
  [771] = 771,
  [772] = 655,
  [773] = 773,
  [774] = 655,
  [775] = 775,
  [776] = 655,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(179);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == 'J') ADVANCE(44);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '}') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(409);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '}') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(409);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '}') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == ']') ADVANCE(403);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == 'C') ADVANCE(445);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'b') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == 'u') ADVANCE(505);
      if (lookahead == 'v') ADVANCE(497);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == '|') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(448);
      if (lookahead == '|') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '}') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 18:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 19:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 20:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 21:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 22:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 23:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 24:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 25:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(381);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 26:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 27:
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(185);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 's') ADVANCE(469);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 39:
      if (lookahead == '1') ADVANCE(202);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead == '3') ADVANCE(204);
      if (lookahead == '4') ADVANCE(205);
      END_STATE();
    case 40:
      if (lookahead == '5') ADVANCE(37);
      if (lookahead == 'J') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 42:
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 43:
      if (lookahead == 'F') ADVANCE(124);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(438);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(415);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(356);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 128:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(128)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 129:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(129)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 132:
      if (eof) ADVANCE(179);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == '\'') ADVANCE(421);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == 'C') ADVANCE(43);
      if (lookahead == 'J') ADVANCE(44);
      if (lookahead == '[') ADVANCE(402);
      if (lookahead == ']') ADVANCE(408);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(105);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '}') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(132)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 133:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(153)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 134:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(154)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 135:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(155)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 136:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(156)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 137:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(157)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 138:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(158)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 139:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(159)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 140:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(160)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 141:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(161)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 142:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(162)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 143:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(163)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 144:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(164)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 145:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(165)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 146:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(169)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 147:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(170)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 148:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(171)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 149:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(172)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 150:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(173)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 151:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(174)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 152:
      if (eof) ADVANCE(179);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(175)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 153:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(153)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 154:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(154)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 155:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(155)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 156:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(156)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 157:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(157)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 158:
      if (eof) ADVANCE(179);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(158)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 159:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(159)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 160:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(160)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 161:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(161)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 162:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(162)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 163:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(163)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 164:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(164)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 165:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(165)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 166:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(166)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(381);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 167:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(167)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 168:
      if (eof) ADVANCE(179);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(168)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 169:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(169)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 170:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(170)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 171:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(171)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 172:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(172)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 173:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(173)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 174:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(174)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 175:
      if (eof) ADVANCE(179);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(175)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 176:
      if (eof) ADVANCE(179);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(176)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 177:
      if (eof) ADVANCE(179);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(177)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(178)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATclass);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATtype);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATalias);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATreturn);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATfield);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATpublic);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATprotected);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATprivate);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATgeneric);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATvararg);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATdiagnostic);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATmeta);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATmodule);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATsource);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATversion);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_5_DOT1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_5_DOT2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_5_DOT3);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_5_DOT4);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_JIT);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATpackage);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_AToperator);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATnodiscard);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATdeprecated);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATcast);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATasync);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_AToverload);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATenum);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATlanguage);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATsee);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == '[') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'g') ADVANCE(268);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(313);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == 'v') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'd') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'g') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'g') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'i') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'k') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'p') ADVANCE(277);
      if (lookahead == 'v') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'r') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'u') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'u') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'v') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'y') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead == 'y') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_link_reference_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_ATlink);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_ATsince);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_ATas);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(368);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(370);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(372);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(17)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(374);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(377);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(378);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(24)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(381);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(382);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ',') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(31)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(385);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(386);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(33)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '<') ADVANCE(406);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(34)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(388);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(366);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(389);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '[') ADVANCE(401);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(390);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(391);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(69)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(393);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 's') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'x') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(128)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(399);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(355);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == 'c') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_self);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_literal_type_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_literal_type_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_literal_type_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_any);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_CFunction);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_CFunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_userdata);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_userdata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_numeric_literal_type);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_numeric_literal_type);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead == 'u') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_diagnostic_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 2},
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
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 133},
  [180] = {.lex_state = 140},
  [181] = {.lex_state = 140},
  [182] = {.lex_state = 140},
  [183] = {.lex_state = 140},
  [184] = {.lex_state = 144},
  [185] = {.lex_state = 140},
  [186] = {.lex_state = 140},
  [187] = {.lex_state = 140},
  [188] = {.lex_state = 140},
  [189] = {.lex_state = 140},
  [190] = {.lex_state = 140},
  [191] = {.lex_state = 140},
  [192] = {.lex_state = 140},
  [193] = {.lex_state = 139},
  [194] = {.lex_state = 140},
  [195] = {.lex_state = 144},
  [196] = {.lex_state = 140},
  [197] = {.lex_state = 140},
  [198] = {.lex_state = 146},
  [199] = {.lex_state = 136},
  [200] = {.lex_state = 144},
  [201] = {.lex_state = 144},
  [202] = {.lex_state = 144},
  [203] = {.lex_state = 144},
  [204] = {.lex_state = 144},
  [205] = {.lex_state = 140},
  [206] = {.lex_state = 144},
  [207] = {.lex_state = 144},
  [208] = {.lex_state = 144},
  [209] = {.lex_state = 144},
  [210] = {.lex_state = 144},
  [211] = {.lex_state = 144},
  [212] = {.lex_state = 144},
  [213] = {.lex_state = 140},
  [214] = {.lex_state = 140},
  [215] = {.lex_state = 140},
  [216] = {.lex_state = 140},
  [217] = {.lex_state = 140},
  [218] = {.lex_state = 140},
  [219] = {.lex_state = 144},
  [220] = {.lex_state = 140},
  [221] = {.lex_state = 140},
  [222] = {.lex_state = 140},
  [223] = {.lex_state = 140},
  [224] = {.lex_state = 140},
  [225] = {.lex_state = 134},
  [226] = {.lex_state = 142},
  [227] = {.lex_state = 140},
  [228] = {.lex_state = 147},
  [229] = {.lex_state = 140},
  [230] = {.lex_state = 140},
  [231] = {.lex_state = 140},
  [232] = {.lex_state = 140},
  [233] = {.lex_state = 140},
  [234] = {.lex_state = 140},
  [235] = {.lex_state = 140},
  [236] = {.lex_state = 140},
  [237] = {.lex_state = 140},
  [238] = {.lex_state = 140},
  [239] = {.lex_state = 140},
  [240] = {.lex_state = 140},
  [241] = {.lex_state = 140},
  [242] = {.lex_state = 140},
  [243] = {.lex_state = 140},
  [244] = {.lex_state = 140},
  [245] = {.lex_state = 140},
  [246] = {.lex_state = 145},
  [247] = {.lex_state = 144},
  [248] = {.lex_state = 143},
  [249] = {.lex_state = 147},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 141},
  [252] = {.lex_state = 147},
  [253] = {.lex_state = 141},
  [254] = {.lex_state = 151},
  [255] = {.lex_state = 147},
  [256] = {.lex_state = 145},
  [257] = {.lex_state = 145},
  [258] = {.lex_state = 141},
  [259] = {.lex_state = 147},
  [260] = {.lex_state = 147},
  [261] = {.lex_state = 141},
  [262] = {.lex_state = 141},
  [263] = {.lex_state = 147},
  [264] = {.lex_state = 145},
  [265] = {.lex_state = 151},
  [266] = {.lex_state = 145},
  [267] = {.lex_state = 151},
  [268] = {.lex_state = 147},
  [269] = {.lex_state = 145},
  [270] = {.lex_state = 145},
  [271] = {.lex_state = 145},
  [272] = {.lex_state = 145},
  [273] = {.lex_state = 145},
  [274] = {.lex_state = 147},
  [275] = {.lex_state = 145},
  [276] = {.lex_state = 147},
  [277] = {.lex_state = 141},
  [278] = {.lex_state = 147},
  [279] = {.lex_state = 147},
  [280] = {.lex_state = 144},
  [281] = {.lex_state = 144},
  [282] = {.lex_state = 144},
  [283] = {.lex_state = 144},
  [284] = {.lex_state = 147},
  [285] = {.lex_state = 144},
  [286] = {.lex_state = 145},
  [287] = {.lex_state = 144},
  [288] = {.lex_state = 144},
  [289] = {.lex_state = 135},
  [290] = {.lex_state = 144},
  [291] = {.lex_state = 147},
  [292] = {.lex_state = 145},
  [293] = {.lex_state = 144},
  [294] = {.lex_state = 145},
  [295] = {.lex_state = 144},
  [296] = {.lex_state = 141},
  [297] = {.lex_state = 147},
  [298] = {.lex_state = 147},
  [299] = {.lex_state = 144},
  [300] = {.lex_state = 147},
  [301] = {.lex_state = 144},
  [302] = {.lex_state = 144},
  [303] = {.lex_state = 144},
  [304] = {.lex_state = 141},
  [305] = {.lex_state = 151},
  [306] = {.lex_state = 151},
  [307] = {.lex_state = 144},
  [308] = {.lex_state = 144},
  [309] = {.lex_state = 151},
  [310] = {.lex_state = 147},
  [311] = {.lex_state = 141},
  [312] = {.lex_state = 145},
  [313] = {.lex_state = 144},
  [314] = {.lex_state = 144},
  [315] = {.lex_state = 147},
  [316] = {.lex_state = 147},
  [317] = {.lex_state = 147},
  [318] = {.lex_state = 144},
  [319] = {.lex_state = 147},
  [320] = {.lex_state = 147},
  [321] = {.lex_state = 147},
  [322] = {.lex_state = 149},
  [323] = {.lex_state = 137},
  [324] = {.lex_state = 147},
  [325] = {.lex_state = 144},
  [326] = {.lex_state = 151},
  [327] = {.lex_state = 145},
  [328] = {.lex_state = 147},
  [329] = {.lex_state = 145},
  [330] = {.lex_state = 145},
  [331] = {.lex_state = 145},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 151},
  [334] = {.lex_state = 151},
  [335] = {.lex_state = 145},
  [336] = {.lex_state = 151},
  [337] = {.lex_state = 151},
  [338] = {.lex_state = 148},
  [339] = {.lex_state = 151},
  [340] = {.lex_state = 151},
  [341] = {.lex_state = 151},
  [342] = {.lex_state = 148},
  [343] = {.lex_state = 151},
  [344] = {.lex_state = 151},
  [345] = {.lex_state = 151},
  [346] = {.lex_state = 151},
  [347] = {.lex_state = 151},
  [348] = {.lex_state = 148},
  [349] = {.lex_state = 151},
  [350] = {.lex_state = 151},
  [351] = {.lex_state = 151},
  [352] = {.lex_state = 151},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 151},
  [356] = {.lex_state = 151},
  [357] = {.lex_state = 145},
  [358] = {.lex_state = 145},
  [359] = {.lex_state = 145},
  [360] = {.lex_state = 151},
  [361] = {.lex_state = 145},
  [362] = {.lex_state = 145},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 150},
  [365] = {.lex_state = 138},
  [366] = {.lex_state = 145},
  [367] = {.lex_state = 145},
  [368] = {.lex_state = 145},
  [369] = {.lex_state = 145},
  [370] = {.lex_state = 145},
  [371] = {.lex_state = 145},
  [372] = {.lex_state = 145},
  [373] = {.lex_state = 145},
  [374] = {.lex_state = 145},
  [375] = {.lex_state = 145},
  [376] = {.lex_state = 145},
  [377] = {.lex_state = 145},
  [378] = {.lex_state = 145},
  [379] = {.lex_state = 145},
  [380] = {.lex_state = 1},
  [381] = {.lex_state = 1},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 1},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 1},
  [392] = {.lex_state = 1},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 1},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 1},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 1},
  [401] = {.lex_state = 1},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 1},
  [405] = {.lex_state = 1},
  [406] = {.lex_state = 1},
  [407] = {.lex_state = 1},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 1},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 1},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 152},
  [416] = {.lex_state = 152},
  [417] = {.lex_state = 152},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 152},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 152},
  [422] = {.lex_state = 152},
  [423] = {.lex_state = 152},
  [424] = {.lex_state = 152},
  [425] = {.lex_state = 152},
  [426] = {.lex_state = 152},
  [427] = {.lex_state = 1},
  [428] = {.lex_state = 152},
  [429] = {.lex_state = 152},
  [430] = {.lex_state = 152},
  [431] = {.lex_state = 152},
  [432] = {.lex_state = 152},
  [433] = {.lex_state = 1},
  [434] = {.lex_state = 1},
  [435] = {.lex_state = 152},
  [436] = {.lex_state = 152},
  [437] = {.lex_state = 152},
  [438] = {.lex_state = 152},
  [439] = {.lex_state = 152},
  [440] = {.lex_state = 152},
  [441] = {.lex_state = 152},
  [442] = {.lex_state = 152},
  [443] = {.lex_state = 1},
  [444] = {.lex_state = 1},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 1},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 152},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 1},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 2},
  [454] = {.lex_state = 2},
  [455] = {.lex_state = 1},
  [456] = {.lex_state = 2},
  [457] = {.lex_state = 2},
  [458] = {.lex_state = 2},
  [459] = {.lex_state = 7},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 2},
  [462] = {.lex_state = 2},
  [463] = {.lex_state = 2},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 167},
  [470] = {.lex_state = 1},
  [471] = {.lex_state = 1},
  [472] = {.lex_state = 1},
  [473] = {.lex_state = 167},
  [474] = {.lex_state = 1},
  [475] = {.lex_state = 1},
  [476] = {.lex_state = 1},
  [477] = {.lex_state = 1},
  [478] = {.lex_state = 167},
  [479] = {.lex_state = 40},
  [480] = {.lex_state = 167},
  [481] = {.lex_state = 38},
  [482] = {.lex_state = 168},
  [483] = {.lex_state = 168},
  [484] = {.lex_state = 166},
  [485] = {.lex_state = 9},
  [486] = {.lex_state = 168},
  [487] = {.lex_state = 168},
  [488] = {.lex_state = 168},
  [489] = {.lex_state = 168},
  [490] = {.lex_state = 168},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 176},
  [506] = {.lex_state = 176},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 9},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 176},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 9},
  [522] = {.lex_state = 9},
  [523] = {.lex_state = 9},
  [524] = {.lex_state = 9},
  [525] = {.lex_state = 176},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 9},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 177},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 9},
  [556] = {.lex_state = 176},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 9},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 176},
  [568] = {.lex_state = 168},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 178},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 178},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 178},
  [586] = {.lex_state = 178},
  [587] = {.lex_state = 178},
  [588] = {.lex_state = 178},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 9},
  [592] = {.lex_state = 178},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 178},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 178},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 178},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 178},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 9},
  [618] = {.lex_state = 178},
  [619] = {.lex_state = 178},
  [620] = {.lex_state = 178},
  [621] = {.lex_state = 178},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 178},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 9},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 9},
  [640] = {.lex_state = 4},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 9},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 129},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 9},
  [650] = {.lex_state = 4},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 9},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 7},
  [655] = {.lex_state = 2},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 4},
  [658] = {.lex_state = 9},
  [659] = {.lex_state = 2},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 2},
  [663] = {.lex_state = 9},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 419},
  [667] = {.lex_state = 422},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 9},
  [671] = {.lex_state = 4},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 9},
  [674] = {.lex_state = 9},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 1},
  [680] = {.lex_state = 1},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 4},
  [683] = {.lex_state = 9},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 419},
  [686] = {.lex_state = 422},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 178},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 419},
  [696] = {.lex_state = 422},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 1},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 4},
  [703] = {.lex_state = 9},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 419},
  [706] = {.lex_state = 422},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 9},
  [710] = {.lex_state = 422},
  [711] = {.lex_state = 419},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 419},
  [716] = {.lex_state = 422},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 7},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 9},
  [723] = {.lex_state = 9},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 419},
  [726] = {.lex_state = 422},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 9},
  [731] = {.lex_state = 9},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 9},
  [734] = {.lex_state = 129},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 7},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 9},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 7},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 4},
  [743] = {.lex_state = 9},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 9},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 7},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 2},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 2},
  [769] = {.lex_state = 2},
  [770] = {.lex_state = 2},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 2},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 2},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 2},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 7},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 129},
  [781] = {.lex_state = 9},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_JIT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_CFunction] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_userdata] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_numeric_literal_type] = ACTIONS(1),
  },
  [1] = {
    [sym_documentation] = STATE(718),
    [sym_class_annotation] = STATE(717),
    [sym_type_annotation] = STATE(717),
    [sym_param_annotation] = STATE(717),
    [sym_alias_annotation] = STATE(717),
    [sym_return_annotation] = STATE(717),
    [sym_field_annotation] = STATE(717),
    [sym_qualifier_annotation] = STATE(717),
    [sym_generic_annotation] = STATE(717),
    [sym_vararg_annotation] = STATE(717),
    [sym_diagnostic_annotation] = STATE(717),
    [sym_meta_annotation] = STATE(717),
    [sym_module_annotation] = STATE(717),
    [sym_source_annotation] = STATE(717),
    [sym_version_annotation] = STATE(717),
    [sym_package_annotation] = STATE(717),
    [sym_operator_annotation] = STATE(717),
    [sym_nodiscard_annotation] = STATE(717),
    [sym_deprecated_annotation] = STATE(717),
    [sym_cast_annotation] = STATE(717),
    [sym_async_annotation] = STATE(717),
    [sym_overload_annotation] = STATE(717),
    [sym_enum_annotation] = STATE(717),
    [sym_language_injection] = STATE(717),
    [sym_see_reference] = STATE(717),
    [sym_link_reference] = STATE(717),
    [sym_since_annotation] = STATE(717),
    [sym_as_annotation] = STATE(717),
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
    [aux_sym_link_reference_token1] = ACTIONS(51),
    [anon_sym_ATsince] = ACTIONS(53),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(422), 1,
      sym_type,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(79), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(441), 10,
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
  [66] = 16,
    ACTIONS(85), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(99), 1,
      anon_sym_self,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(399), 1,
      sym_type,
    STATE(546), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [131] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_self,
    STATE(408), 1,
      sym_type,
    STATE(500), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [196] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      anon_sym_self,
    STATE(404), 1,
      sym_type,
    STATE(501), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [261] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_self,
    STATE(397), 1,
      sym_type,
    STATE(559), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [326] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(129), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_self,
    STATE(392), 1,
      sym_type,
    STATE(566), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [391] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      anon_sym_self,
    STATE(386), 1,
      sym_type,
    STATE(536), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [456] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_self,
    STATE(380), 1,
      sym_type,
    STATE(498), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [521] = 16,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_self,
    STATE(394), 1,
      sym_type,
    STATE(507), 1,
      sym_parameter,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [586] = 3,
    ACTIONS(153), 1,
      anon_sym_COLON,
    ACTIONS(157), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(155), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [622] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(164), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(162), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [660] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym_number,
    STATE(454), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [714] = 13,
    ACTIONS(170), 1,
      anon_sym_QMARK,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(305), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [770] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_number,
    STATE(456), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [824] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      sym_number,
    STATE(458), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [878] = 3,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(200), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(198), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [914] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(204), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(206), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [960] = 3,
    ACTIONS(208), 1,
      anon_sym_COLON,
    ACTIONS(206), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(204), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [996] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(210), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(212), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [1042] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(212), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(210), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1080] = 3,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(218), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(216), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1116] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(222), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(220), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1154] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(224), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(226), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [1200] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(220), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(222), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [1246] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 1,
      sym_number,
    STATE(453), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [1300] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_number,
    STATE(462), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [1354] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(232), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(234), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [1400] = 13,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_QMARK,
    STATE(267), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [1456] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      sym_number,
    STATE(457), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [1510] = 13,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    STATE(309), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [1566] = 3,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(218), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(216), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1602] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(244), 1,
      sym_number,
    STATE(461), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [1656] = 8,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(246), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(248), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [1702] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      sym_number,
    STATE(463), 1,
      sym_type,
    ACTIONS(168), 2,
      sym_numeric_literal_type,
      sym_identifier,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [1756] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(254), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(252), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1794] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(258), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(256), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1832] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(262), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(260), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1870] = 3,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(218), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(216), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1906] = 3,
    ACTIONS(270), 1,
      anon_sym_LT,
    ACTIONS(268), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(266), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1942] = 4,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(274), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(272), 14,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [1980] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(327), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [2033] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(409), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2086] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(405), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2139] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(420), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2192] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(466), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2245] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(471), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2298] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(403), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2351] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(184), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [2404] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(402), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2457] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(265), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [2510] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(460), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2563] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(401), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2616] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(334), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [2669] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(290), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [2722] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(444), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2775] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(445), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2828] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(306), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [2881] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(182), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [2934] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(400), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [2987] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(447), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3040] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(467), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3093] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(396), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3146] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(395), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3199] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(451), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3252] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(353), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3305] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(393), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3358] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(433), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3411] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(475), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3464] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(391), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3517] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(390), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3570] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(464), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3623] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(388), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3676] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(387), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3729] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(427), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3782] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(472), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3835] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(446), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3888] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(187), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [3941] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(450), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [3994] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(188), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [4047] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(189), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [4100] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(459), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4153] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(385), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4206] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(369), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [4259] = 12,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(424), 1,
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
    STATE(441), 10,
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
  [4312] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(448), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4365] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(354), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4418] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(384), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4471] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(195), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [4524] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(236), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [4577] = 12,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(449), 1,
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
    STATE(441), 10,
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
  [4630] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(452), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4683] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(383), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4736] = 12,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(432), 1,
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
    STATE(441), 10,
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
  [4789] = 12,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_table,
    ACTIONS(346), 1,
      anon_sym_fun,
    ACTIONS(348), 1,
      anon_sym_function,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 1,
      sym_numeric_literal_type,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(321), 1,
      sym_type,
    ACTIONS(354), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(284), 10,
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
  [4842] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(325), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [4895] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(382), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [4948] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(434), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [5001] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(474), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [5054] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(326), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [5107] = 2,
    ACTIONS(362), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(360), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5140] = 2,
    ACTIONS(366), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(364), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5173] = 2,
    ACTIONS(370), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(368), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5206] = 2,
    ACTIONS(374), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(372), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5239] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(125), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [5292] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(267), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [5345] = 2,
    ACTIONS(378), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(376), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5378] = 2,
    ACTIONS(382), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(380), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5411] = 2,
    ACTIONS(386), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(384), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5444] = 2,
    ACTIONS(218), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(216), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5477] = 2,
    ACTIONS(268), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(266), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5510] = 2,
    ACTIONS(390), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(388), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5543] = 3,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(266), 14,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [5578] = 12,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(430), 1,
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
    STATE(441), 10,
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
  [5631] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(476), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [5684] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(246), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [5737] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(264), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [5790] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(266), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [5843] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(269), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [5896] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(477), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [5949] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(272), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [6002] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(162), 10,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(164), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [6043] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(256), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [6096] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(389), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6149] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(400), 10,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_GT,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(402), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
  [6190] = 12,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_table,
    ACTIONS(346), 1,
      anon_sym_fun,
    ACTIONS(348), 1,
      anon_sym_function,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    ACTIONS(356), 1,
      sym_numeric_literal_type,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(228), 1,
      sym_type,
    ACTIONS(354), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(284), 10,
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
  [6243] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(28), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6296] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(34), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6349] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(222), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [6402] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(443), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6455] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(192), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [6508] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(412), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6561] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(411), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6614] = 2,
    ACTIONS(408), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(406), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [6647] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(465), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6700] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(25), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6753] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(24), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6806] = 2,
    ACTIONS(414), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(412), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [6839] = 2,
    ACTIONS(418), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(416), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [6872] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(20), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6925] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(470), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [6978] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(219), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [7031] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(299), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [7084] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(363), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7137] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(18), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7190] = 12,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_table,
    ACTIONS(178), 1,
      anon_sym_fun,
    ACTIONS(180), 1,
      anon_sym_function,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_numeric_literal_type,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(254), 1,
      sym_type,
    ACTIONS(186), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(336), 10,
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
  [7243] = 12,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_table,
    ACTIONS(71), 1,
      anon_sym_fun,
    ACTIONS(73), 1,
      anon_sym_function,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_numeric_literal_type,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(431), 1,
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
    STATE(441), 10,
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
  [7296] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(406), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7349] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(122), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7402] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(407), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7455] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(292), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [7508] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(271), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [7561] = 2,
    ACTIONS(428), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(426), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [7594] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(270), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [7647] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(257), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [7700] = 2,
    ACTIONS(434), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(432), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [7733] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(329), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [7786] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(455), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7839] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(381), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7892] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(468), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7945] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(410), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [7998] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(413), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [8051] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(212), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [8104] = 12,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_table,
    ACTIONS(322), 1,
      anon_sym_fun,
    ACTIONS(324), 1,
      anon_sym_function,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_numeric_literal_type,
    ACTIONS(440), 1,
      sym_identifier,
    STATE(194), 1,
      sym_type,
    ACTIONS(330), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(216), 10,
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
  [8157] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(414), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [8210] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(332), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [8263] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(418), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [8316] = 2,
    ACTIONS(444), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(442), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [8349] = 2,
    ACTIONS(448), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(446), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [8382] = 12,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_table,
    ACTIONS(282), 1,
      anon_sym_fun,
    ACTIONS(284), 1,
      anon_sym_function,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_SQUOTE,
    ACTIONS(292), 1,
      sym_numeric_literal_type,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(335), 1,
      sym_type,
    ACTIONS(290), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(358), 10,
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
  [8435] = 12,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_fun,
    ACTIONS(97), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_numeric_literal_type,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(2), 1,
      sym_type,
    ACTIONS(105), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(110), 10,
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
  [8488] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(209), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [8541] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [8594] = 2,
    ACTIONS(454), 13,
      anon_sym_table,
      anon_sym_RBRACK2,
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
    ACTIONS(452), 15,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
  [8627] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(207), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [8680] = 12,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_table,
    ACTIONS(302), 1,
      anon_sym_fun,
    ACTIONS(304), 1,
      anon_sym_function,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_numeric_literal_type,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type,
    ACTIONS(310), 8,
      anon_sym_any,
      anon_sym_boolean,
      anon_sym_CFunction,
      anon_sym_nil,
      anon_sym_number,
      anon_sym_string,
      anon_sym_userdata,
      anon_sym_void,
    STATE(281), 10,
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
  [8733] = 2,
    ACTIONS(456), 6,
      anon_sym_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(458), 12,
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
  [8756] = 2,
    ACTIONS(460), 6,
      anon_sym_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_numeric_literal_type,
    ACTIONS(462), 12,
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
  [8779] = 3,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8797] = 4,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(164), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8817] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(258), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8837] = 9,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(181), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(234), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [8867] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(262), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8887] = 11,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(491), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(469), 1,
      aux_sym_type_annotation_repeat1,
    STATE(669), 1,
      sym_at_comment,
  [8921] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(254), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8941] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(274), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [8961] = 9,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(183), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(248), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [8991] = 9,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(185), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(222), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [9021] = 9,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(186), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(226), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [9051] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(222), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9071] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(212), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9091] = 9,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(190), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(212), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [9121] = 3,
    ACTIONS(499), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9139] = 9,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    STATE(191), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(206), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [9169] = 11,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_AT,
    ACTIONS(507), 1,
      sym_comment,
    STATE(473), 1,
      aux_sym_class_annotation_repeat1,
    STATE(777), 1,
      sym_class_at_comment,
  [9203] = 3,
    ACTIONS(509), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9220] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9235] = 3,
    ACTIONS(511), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9252] = 3,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9269] = 4,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(164), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9288] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(258), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9307] = 9,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(201), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(234), 2,
      anon_sym_AT,
      sym_comment,
  [9336] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(262), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9355] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(254), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9374] = 3,
    ACTIONS(518), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9391] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(274), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9410] = 9,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(203), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(248), 2,
      anon_sym_AT,
      sym_comment,
  [9439] = 9,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(204), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(222), 2,
      anon_sym_AT,
      sym_comment,
  [9468] = 9,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(206), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(226), 2,
      anon_sym_AT,
      sym_comment,
  [9497] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(222), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9516] = 4,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(212), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9535] = 9,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(210), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(212), 2,
      anon_sym_AT,
      sym_comment,
  [9564] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9579] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9594] = 3,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9611] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9626] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9641] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9656] = 9,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    STATE(211), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(206), 2,
      anon_sym_AT,
      sym_comment,
  [9685] = 3,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9702] = 3,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9719] = 7,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    ACTIONS(164), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [9744] = 3,
    ACTIONS(526), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9761] = 3,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9778] = 3,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9795] = 3,
    ACTIONS(532), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9812] = 3,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9829] = 10,
    ACTIONS(505), 1,
      anon_sym_AT,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    ACTIONS(538), 1,
      anon_sym_COLON,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_POUND,
    STATE(672), 1,
      sym_class_at_comment,
  [9860] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9875] = 3,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9892] = 3,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9909] = 3,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9926] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9941] = 3,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9958] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [9973] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(471), 1,
      anon_sym_QMARK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_POUND,
    ACTIONS(402), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [9998] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10013] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10028] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10043] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10058] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10073] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10088] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10103] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10118] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 8,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10133] = 9,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(489), 1,
      aux_sym_type_annotation_repeat1,
  [10161] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10175] = 3,
    ACTIONS(572), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10191] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10205] = 5,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(485), 1,
      sym_qualifier,
    STATE(31), 2,
      sym_positional_field,
      sym_indexed_field,
    ACTIONS(574), 4,
      anon_sym_public,
      anon_sym_protected,
      anon_sym_private,
      anon_sym_package,
  [10225] = 3,
    ACTIONS(580), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10241] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10255] = 3,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10271] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    STATE(753), 1,
      sym_at_comment,
  [10299] = 3,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10315] = 9,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(490), 1,
      aux_sym_type_annotation_repeat1,
  [10343] = 9,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(273), 1,
      aux_sym_type_annotation_repeat1,
  [10371] = 3,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10387] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10401] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10415] = 3,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10431] = 3,
    ACTIONS(602), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10447] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10461] = 9,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(488), 1,
      aux_sym_type_annotation_repeat1,
  [10489] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      ts_builtin_sym_end,
    ACTIONS(606), 1,
      sym_comment,
    STATE(664), 1,
      sym_at_comment,
  [10517] = 9,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(487), 1,
      aux_sym_type_annotation_repeat1,
  [10545] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      sym_comment,
    STATE(729), 1,
      sym_at_comment,
  [10573] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10587] = 9,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(482), 1,
      aux_sym_type_annotation_repeat1,
  [10615] = 9,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(275), 1,
      aux_sym_type_annotation_repeat1,
  [10643] = 9,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(286), 1,
      aux_sym_type_annotation_repeat1,
  [10671] = 9,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(483), 1,
      aux_sym_type_annotation_repeat1,
  [10699] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(274), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10717] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10731] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(254), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10749] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10763] = 3,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10779] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10793] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10807] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10821] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10835] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10849] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10863] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10877] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10891] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(262), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10909] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10923] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10937] = 3,
    ACTIONS(614), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10953] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    ACTIONS(402), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [10977] = 3,
    ACTIONS(520), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [10993] = 9,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(294), 1,
      aux_sym_type_annotation_repeat1,
  [11021] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11035] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(258), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11053] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11067] = 3,
    ACTIONS(616), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11083] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11097] = 3,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11113] = 7,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [11137] = 3,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11153] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11167] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11181] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11195] = 3,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11211] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    ACTIONS(626), 1,
      sym_comment,
    STATE(677), 1,
      sym_at_comment,
  [11239] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 1,
      sym_comment,
    STATE(653), 1,
      sym_at_comment,
  [11267] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11281] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11295] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 1,
      sym_comment,
    STATE(681), 1,
      sym_at_comment,
  [11323] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11337] = 3,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11353] = 4,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(164), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11371] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11385] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11399] = 3,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11415] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11429] = 3,
    ACTIONS(524), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11445] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 7,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11459] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11473] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11487] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(540), 1,
      anon_sym_QMARK,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      anon_sym_POUND,
    ACTIONS(402), 3,
      anon_sym_COLON,
      anon_sym_AT,
      sym_comment,
  [11511] = 3,
    ACTIONS(641), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11527] = 3,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11543] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11557] = 7,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(485), 1,
      anon_sym_QMARK,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_POUND,
    ACTIONS(164), 3,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_comment,
  [11581] = 9,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 1,
      sym_comment,
    STATE(728), 1,
      sym_at_comment,
  [11609] = 9,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(330), 1,
      aux_sym_type_annotation_repeat1,
  [11637] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 7,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11651] = 9,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    STATE(331), 1,
      aux_sym_type_annotation_repeat1,
  [11679] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(212), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11697] = 4,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(312), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(222), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11715] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(526), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [11738] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11751] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(586), 1,
      anon_sym_QMARK,
    ACTIONS(588), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 1,
      anon_sym_PIPE,
    ACTIONS(596), 1,
      anon_sym_POUND,
    ACTIONS(402), 2,
      anon_sym_AT,
      sym_comment,
  [11774] = 7,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      sym_comment,
  [11797] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11810] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11823] = 3,
    ACTIONS(600), 1,
      anon_sym_COLON,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(200), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11838] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11851] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11864] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11877] = 3,
    ACTIONS(598), 1,
      anon_sym_COLON,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(206), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11892] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11905] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11918] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11931] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11944] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11957] = 3,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(157), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11972] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11985] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [11998] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12011] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12024] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(572), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12047] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12070] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12083] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12096] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12109] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12122] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12135] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 6,
      anon_sym_QMARK,
      anon_sym_DOT,
      anon_sym_AT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12148] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12161] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12174] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    STATE(530), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12197] = 3,
    ACTIONS(659), 1,
      anon_sym_LT,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12212] = 3,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12227] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12240] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12253] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12266] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(562), 1,
      anon_sym_QMARK,
    ACTIONS(564), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_POUND,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      sym_comment,
  [12289] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12302] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12315] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12328] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12341] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12354] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12367] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12380] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12393] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12406] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 6,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [12419] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12442] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(551), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12465] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(504), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12488] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    STATE(508), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12511] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(511), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12534] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    STATE(513), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12557] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12580] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    STATE(542), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12603] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(547), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12626] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(683), 1,
      anon_sym_RBRACE,
    STATE(499), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12649] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(550), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12672] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    STATE(553), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12695] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12718] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    STATE(571), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12741] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12764] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(532), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12787] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    STATE(560), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12810] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12833] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(703), 1,
      anon_sym_QMARK,
    ACTIONS(216), 6,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_POUND,
  [12848] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12871] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    STATE(539), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12894] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12917] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_RBRACE,
    STATE(529), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12940] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(527), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12963] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [12986] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    STATE(557), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13009] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13032] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    STATE(515), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13055] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13078] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(549), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13101] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    STATE(552), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13124] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    STATE(562), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13147] = 7,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    STATE(573), 1,
      aux_sym_table_literal_type_repeat1,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13170] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13188] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13208] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(454), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13220] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(366), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13232] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(378), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13244] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13262] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(408), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13274] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13294] = 2,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(418), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13306] = 7,
    ACTIONS(743), 1,
      ts_builtin_sym_end,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(749), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
  [13328] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(448), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13340] = 7,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      sym_comment,
  [13362] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(444), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13374] = 2,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(434), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13386] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13406] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(428), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13418] = 2,
    ACTIONS(412), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(414), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13430] = 7,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
    ACTIONS(767), 1,
      sym_comment,
  [13452] = 7,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
    ACTIONS(769), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      sym_comment,
  [13474] = 7,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
  [13496] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13516] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13536] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(390), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13548] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(362), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13560] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(370), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13572] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(374), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13584] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(382), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13596] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(386), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13608] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(218), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13620] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(268), 5,
      anon_sym_QMARK,
      anon_sym_DOT,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_PIPE,
  [13632] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13650] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13668] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(785), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13686] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13704] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13724] = 6,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13744] = 7,
    ACTIONS(745), 1,
      anon_sym_QMARK,
    ACTIONS(747), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(753), 1,
      anon_sym_PIPE,
    ACTIONS(755), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
    ACTIONS(799), 1,
      sym_comment,
  [13766] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
    ACTIONS(801), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [13784] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(803), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13801] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(805), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13818] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(807), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13835] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(809), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13852] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13869] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(813), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13886] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(815), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13903] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(817), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13920] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(819), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13937] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(821), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13954] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(823), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13971] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(825), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [13988] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(827), 1,
      anon_sym_RBRACK2,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14005] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(829), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14022] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(831), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14039] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(833), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14056] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14073] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(837), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14090] = 6,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_AT,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
    ACTIONS(841), 1,
      sym_comment,
    STATE(480), 1,
      aux_sym_type_annotation_repeat1,
    STATE(668), 1,
      sym_at_comment,
  [14109] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(843), 1,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14126] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14143] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14160] = 6,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_AT,
    ACTIONS(849), 1,
      ts_builtin_sym_end,
    ACTIONS(851), 1,
      sym_comment,
    STATE(478), 1,
      aux_sym_class_annotation_repeat1,
    STATE(751), 1,
      sym_class_at_comment,
  [14179] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14196] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14213] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(857), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14230] = 5,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 2,
      anon_sym_DOT,
      anon_sym_POUND,
  [14247] = 4,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    STATE(478), 1,
      aux_sym_class_annotation_repeat1,
    ACTIONS(620), 2,
      anon_sym_AT,
      sym_comment,
  [14261] = 1,
    ACTIONS(864), 5,
      anon_sym_5_DOT1,
      anon_sym_5_DOT2,
      anon_sym_5_DOT3,
      anon_sym_5_DOT4,
      anon_sym_JIT,
  [14269] = 4,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(515), 1,
      anon_sym_COMMA,
    STATE(480), 1,
      aux_sym_type_annotation_repeat1,
    ACTIONS(164), 2,
      anon_sym_AT,
      sym_comment,
  [14283] = 3,
    ACTIONS(866), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(610), 1,
      sym_parameter,
    ACTIONS(868), 2,
      anon_sym_self,
      sym_identifier,
  [14294] = 4,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14307] = 4,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14320] = 4,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
    ACTIONS(872), 1,
      anon_sym_COLON,
    ACTIONS(874), 1,
      anon_sym_COMMA,
    ACTIONS(876), 1,
      sym_comment,
  [14333] = 3,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    ACTIONS(878), 1,
      sym_identifier,
    STATE(29), 2,
      sym_positional_field,
      sym_indexed_field,
  [14344] = 4,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14357] = 4,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14370] = 4,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14383] = 4,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14396] = 4,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(486), 1,
      aux_sym_type_annotation_repeat1,
  [14409] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14419] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14429] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14439] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14449] = 3,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14459] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14469] = 3,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(896), 1,
      anon_sym_QMARK,
  [14479] = 3,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(503), 1,
      aux_sym_function_type_repeat1,
  [14489] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14499] = 3,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(545), 1,
      aux_sym_function_type_repeat1,
  [14509] = 3,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(494), 1,
      aux_sym_function_type_repeat1,
  [14519] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14529] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14539] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14549] = 3,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_COLON,
  [14559] = 3,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_COLON,
  [14569] = 3,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(561), 1,
      aux_sym_function_type_repeat1,
  [14579] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14589] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 1,
      anon_sym_QMARK,
  [14599] = 3,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(912), 1,
      anon_sym_QMARK,
  [14609] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14619] = 3,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(920), 1,
      sym_identifier,
  [14629] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14639] = 3,
    ACTIONS(924), 1,
      ts_builtin_sym_end,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(563), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [14649] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14659] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      anon_sym_QMARK,
  [14669] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14679] = 3,
    ACTIONS(934), 1,
      ts_builtin_sym_end,
    ACTIONS(936), 1,
      anon_sym_COLON,
    ACTIONS(938), 1,
      sym_comment,
  [14689] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14699] = 3,
    ACTIONS(942), 1,
      anon_sym_fun,
    ACTIONS(944), 1,
      anon_sym_function,
    STATE(587), 1,
      sym_function_type,
  [14709] = 3,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(948), 1,
      anon_sym_LBRACK,
    ACTIONS(950), 1,
      sym_identifier,
  [14719] = 3,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    ACTIONS(954), 1,
      anon_sym_LBRACK,
    ACTIONS(956), 1,
      sym_identifier,
  [14729] = 2,
    ACTIONS(960), 1,
      sym_number,
    ACTIONS(958), 2,
      sym_string,
      sym_identifier,
  [14737] = 3,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(964), 1,
      anon_sym_LBRACK,
    ACTIONS(966), 1,
      sym_identifier,
  [14747] = 3,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COLON,
  [14757] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14767] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(972), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14777] = 3,
    ACTIONS(974), 1,
      anon_sym_RBRACE,
    ACTIONS(976), 1,
      anon_sym_LBRACK,
    ACTIONS(978), 1,
      sym_identifier,
  [14787] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14797] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14807] = 3,
    ACTIONS(984), 1,
      ts_builtin_sym_end,
    ACTIONS(986), 1,
      anon_sym_extends,
    ACTIONS(988), 1,
      sym_comment,
  [14817] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14827] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14837] = 3,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(994), 1,
      anon_sym_QMARK,
  [14847] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14857] = 3,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(541), 1,
      aux_sym_function_type_repeat1,
  [14867] = 3,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14877] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14887] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1003), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14897] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14907] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14917] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14927] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14937] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [14947] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [14957] = 3,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(543), 1,
      aux_sym_function_type_repeat1,
  [14967] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14977] = 3,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    ACTIONS(1013), 1,
      anon_sym_QMARK,
  [14987] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1015), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [14997] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1017), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15007] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15017] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1021), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15027] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15037] = 3,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(1025), 1,
      anon_sym_QMARK,
  [15047] = 3,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 1,
      anon_sym_LBRACK,
    ACTIONS(1031), 1,
      sym_identifier,
  [15057] = 3,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    ACTIONS(1035), 1,
      anon_sym_COLON,
    ACTIONS(1037), 1,
      sym_comment,
  [15067] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15077] = 3,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(1043), 1,
      anon_sym_LBRACK,
    ACTIONS(1045), 1,
      sym_identifier,
  [15087] = 3,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(535), 1,
      aux_sym_function_type_repeat1,
  [15097] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15107] = 3,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [15117] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15127] = 3,
    ACTIONS(1051), 1,
      ts_builtin_sym_end,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    STATE(563), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [15137] = 3,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(1056), 1,
      anon_sym_QMARK,
  [15147] = 3,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    ACTIONS(1058), 1,
      ts_builtin_sym_end,
    STATE(514), 1,
      aux_sym_diagnostic_annotation_repeat1,
  [15157] = 3,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(570), 1,
      aux_sym_function_type_repeat1,
  [15167] = 3,
    ACTIONS(1060), 1,
      ts_builtin_sym_end,
    ACTIONS(1062), 1,
      anon_sym_COLON,
    ACTIONS(1064), 1,
      sym_comment,
  [15177] = 3,
    ACTIONS(1060), 1,
      ts_builtin_sym_end,
    ACTIONS(1064), 1,
      sym_comment,
    ACTIONS(1066), 1,
      anon_sym_COMMA,
  [15187] = 3,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(495), 1,
      aux_sym_class_annotation_repeat1,
  [15197] = 3,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_function_type_repeat1,
  [15207] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1070), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15217] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15227] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(1074), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      aux_sym_table_literal_type_repeat1,
  [15237] = 1,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [15242] = 2,
    ACTIONS(1076), 1,
      anon_sym_COLON,
    ACTIONS(1078), 1,
      anon_sym_QMARK,
  [15249] = 2,
    ACTIONS(1080), 1,
      anon_sym_COLON,
    ACTIONS(1082), 1,
      anon_sym_QMARK,
  [15256] = 2,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(1086), 1,
      sym_comment,
  [15263] = 2,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15270] = 2,
    ACTIONS(1090), 1,
      anon_sym_COLON,
    ACTIONS(1092), 1,
      anon_sym_QMARK,
  [15277] = 2,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [15284] = 2,
    ACTIONS(1094), 1,
      ts_builtin_sym_end,
    ACTIONS(1096), 1,
      anon_sym_COLON,
  [15291] = 2,
    ACTIONS(1098), 1,
      ts_builtin_sym_end,
    ACTIONS(1100), 1,
      sym_comment,
  [15298] = 2,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15305] = 2,
    ACTIONS(1102), 1,
      ts_builtin_sym_end,
    ACTIONS(1104), 1,
      anon_sym_COLON,
  [15312] = 2,
    ACTIONS(1106), 1,
      ts_builtin_sym_end,
    ACTIONS(1108), 1,
      sym_comment,
  [15319] = 2,
    ACTIONS(1110), 1,
      ts_builtin_sym_end,
    ACTIONS(1112), 1,
      sym_comment,
  [15326] = 2,
    ACTIONS(1114), 1,
      ts_builtin_sym_end,
    ACTIONS(1116), 1,
      sym_comment,
  [15333] = 2,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    ACTIONS(1118), 1,
      sym_comment,
  [15340] = 2,
    ACTIONS(1120), 1,
      anon_sym_COLON,
    ACTIONS(1122), 1,
      anon_sym_QMARK,
  [15347] = 2,
    ACTIONS(1124), 1,
      anon_sym_COLON,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
  [15354] = 1,
    ACTIONS(1128), 2,
      anon_sym_DOT_DOT_DOT,
      sym_identifier,
  [15359] = 2,
    ACTIONS(1130), 1,
      ts_builtin_sym_end,
    ACTIONS(1132), 1,
      sym_comment,
  [15366] = 2,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    ACTIONS(1136), 1,
      anon_sym_QMARK,
  [15373] = 2,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [15380] = 2,
    ACTIONS(1138), 1,
      ts_builtin_sym_end,
    ACTIONS(1140), 1,
      sym_comment,
  [15387] = 2,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [15394] = 2,
    ACTIONS(1142), 1,
      ts_builtin_sym_end,
    ACTIONS(1144), 1,
      sym_comment,
  [15401] = 2,
    ACTIONS(1146), 1,
      anon_sym_COLON,
    ACTIONS(1148), 1,
      anon_sym_QMARK,
  [15408] = 2,
    ACTIONS(1150), 1,
      anon_sym_COLON,
    ACTIONS(1152), 1,
      anon_sym_QMARK,
  [15415] = 2,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15422] = 2,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15429] = 2,
    ACTIONS(1154), 1,
      anon_sym_COLON,
    ACTIONS(1156), 1,
      anon_sym_QMARK,
  [15436] = 2,
    ACTIONS(1158), 1,
      ts_builtin_sym_end,
    ACTIONS(1160), 1,
      sym_comment,
  [15443] = 2,
    ACTIONS(1162), 1,
      anon_sym_COLON,
    ACTIONS(1164), 1,
      anon_sym_QMARK,
  [15450] = 2,
    ACTIONS(1166), 1,
      anon_sym_COLON,
    ACTIONS(1168), 1,
      anon_sym_QMARK,
  [15457] = 2,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15464] = 2,
    ACTIONS(1170), 1,
      anon_sym_COLON,
    ACTIONS(1172), 1,
      anon_sym_QMARK,
  [15471] = 2,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [15478] = 2,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15485] = 1,
    ACTIONS(1001), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15490] = 2,
    ACTIONS(1174), 1,
      ts_builtin_sym_end,
    ACTIONS(1176), 1,
      anon_sym_COLON,
  [15497] = 2,
    ACTIONS(1178), 1,
      ts_builtin_sym_end,
    ACTIONS(1180), 1,
      sym_comment,
  [15504] = 2,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [15511] = 2,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(703), 1,
      anon_sym_QMARK,
  [15518] = 2,
    ACTIONS(1182), 1,
      anon_sym_COLON,
    ACTIONS(1184), 1,
      anon_sym_QMARK,
  [15525] = 2,
    ACTIONS(1186), 1,
      anon_sym_COLON,
    ACTIONS(1188), 1,
      anon_sym_QMARK,
  [15532] = 1,
    ACTIONS(1190), 2,
      anon_sym_LBRACK,
      sym_identifier,
  [15537] = 2,
    ACTIONS(1192), 1,
      ts_builtin_sym_end,
    ACTIONS(1194), 1,
      sym_comment,
  [15544] = 2,
    ACTIONS(1196), 1,
      ts_builtin_sym_end,
    ACTIONS(1198), 1,
      sym_comment,
  [15551] = 2,
    ACTIONS(1200), 1,
      ts_builtin_sym_end,
    ACTIONS(1202), 1,
      sym_comment,
  [15558] = 2,
    ACTIONS(1204), 1,
      ts_builtin_sym_end,
    ACTIONS(1206), 1,
      sym_comment,
  [15565] = 2,
    ACTIONS(1208), 1,
      anon_sym_COLON,
    ACTIONS(1210), 1,
      anon_sym_QMARK,
  [15572] = 2,
    ACTIONS(1212), 1,
      anon_sym_COLON,
    ACTIONS(1214), 1,
      anon_sym_QMARK,
  [15579] = 2,
    ACTIONS(701), 1,
      anon_sym_COLON,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [15586] = 2,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [15593] = 2,
    ACTIONS(1216), 1,
      ts_builtin_sym_end,
    ACTIONS(1218), 1,
      sym_comment,
  [15600] = 2,
    ACTIONS(1220), 1,
      anon_sym_COLON,
    ACTIONS(1222), 1,
      anon_sym_QMARK,
  [15607] = 2,
    ACTIONS(1224), 1,
      anon_sym_LBRACK,
    ACTIONS(1226), 1,
      sym_identifier,
  [15614] = 2,
    ACTIONS(891), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15621] = 2,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15628] = 2,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [15635] = 1,
    ACTIONS(1228), 1,
      ts_builtin_sym_end,
  [15639] = 1,
    ACTIONS(1230), 1,
      ts_builtin_sym_end,
  [15643] = 1,
    ACTIONS(1232), 1,
      ts_builtin_sym_end,
  [15647] = 1,
    ACTIONS(1234), 1,
      ts_builtin_sym_end,
  [15651] = 1,
    ACTIONS(1236), 1,
      ts_builtin_sym_end,
  [15655] = 1,
    ACTIONS(1238), 1,
      anon_sym_DQUOTE,
  [15659] = 1,
    ACTIONS(1238), 1,
      anon_sym_SQUOTE,
  [15663] = 1,
    ACTIONS(1240), 1,
      sym_identifier,
  [15667] = 1,
    ACTIONS(1242), 1,
      anon_sym_RBRACK,
  [15671] = 1,
    ACTIONS(1244), 1,
      ts_builtin_sym_end,
  [15675] = 1,
    ACTIONS(1246), 1,
      ts_builtin_sym_end,
  [15679] = 1,
    ACTIONS(1248), 1,
      sym_identifier,
  [15683] = 1,
    ACTIONS(1250), 1,
      ts_builtin_sym_end,
  [15687] = 1,
    ACTIONS(1252), 1,
      sym_diagnostic_identifier,
  [15691] = 1,
    ACTIONS(1254), 1,
      ts_builtin_sym_end,
  [15695] = 1,
    ACTIONS(1256), 1,
      anon_sym_DQUOTE,
  [15699] = 1,
    ACTIONS(1256), 1,
      anon_sym_SQUOTE,
  [15703] = 1,
    ACTIONS(1258), 1,
      sym_identifier,
  [15707] = 1,
    ACTIONS(1260), 1,
      anon_sym_RBRACK,
  [15711] = 1,
    ACTIONS(1262), 1,
      ts_builtin_sym_end,
  [15715] = 1,
    ACTIONS(1264), 1,
      sym_identifier,
  [15719] = 1,
    ACTIONS(1266), 1,
      ts_builtin_sym_end,
  [15723] = 1,
    ACTIONS(1268), 1,
      sym_number,
  [15727] = 1,
    ACTIONS(825), 1,
      anon_sym_RBRACK2,
  [15731] = 1,
    ACTIONS(1270), 1,
      anon_sym_COLON,
  [15735] = 1,
    ACTIONS(1272), 1,
      anon_sym_RBRACK,
  [15739] = 1,
    ACTIONS(1274), 1,
      sym_identifier,
  [15743] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACK2,
  [15747] = 1,
    ACTIONS(1278), 1,
      anon_sym_SQUOTE,
  [15751] = 1,
    ACTIONS(1278), 1,
      anon_sym_DQUOTE,
  [15755] = 1,
    ACTIONS(1280), 1,
      anon_sym_RBRACK2,
  [15759] = 1,
    ACTIONS(1282), 1,
      sym_identifier,
  [15763] = 1,
    ACTIONS(1284), 1,
      ts_builtin_sym_end,
  [15767] = 1,
    ACTIONS(1286), 1,
      anon_sym_LPAREN,
  [15771] = 1,
    ACTIONS(1288), 1,
      aux_sym_literal_type_token1,
  [15775] = 1,
    ACTIONS(1290), 1,
      aux_sym_literal_type_token2,
  [15779] = 1,
    ACTIONS(1292), 1,
      ts_builtin_sym_end,
  [15783] = 1,
    ACTIONS(839), 1,
      ts_builtin_sym_end,
  [15787] = 1,
    ACTIONS(1294), 1,
      sym_identifier,
  [15791] = 1,
    ACTIONS(1296), 1,
      anon_sym_RBRACK,
  [15795] = 1,
    ACTIONS(1298), 1,
      ts_builtin_sym_end,
  [15799] = 1,
    ACTIONS(1300), 1,
      sym_identifier,
  [15803] = 1,
    ACTIONS(1302), 1,
      sym_identifier,
  [15807] = 1,
    ACTIONS(1304), 1,
      anon_sym_SQUOTE,
  [15811] = 1,
    ACTIONS(1304), 1,
      anon_sym_DQUOTE,
  [15815] = 1,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
  [15819] = 1,
    ACTIONS(1306), 1,
      anon_sym_COLON,
  [15823] = 1,
    ACTIONS(1308), 1,
      anon_sym_DOT,
  [15827] = 1,
    ACTIONS(1310), 1,
      anon_sym_ATlink,
  [15831] = 1,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
  [15835] = 1,
    ACTIONS(1312), 1,
      anon_sym_RBRACK,
  [15839] = 1,
    ACTIONS(1314), 1,
      sym_identifier,
  [15843] = 1,
    ACTIONS(1316), 1,
      anon_sym_LPAREN,
  [15847] = 1,
    ACTIONS(1318), 1,
      aux_sym_literal_type_token1,
  [15851] = 1,
    ACTIONS(1320), 1,
      aux_sym_literal_type_token2,
  [15855] = 1,
    ACTIONS(1322), 1,
      anon_sym_SQUOTE,
  [15859] = 1,
    ACTIONS(1324), 1,
      ts_builtin_sym_end,
  [15863] = 1,
    ACTIONS(1326), 1,
      ts_builtin_sym_end,
  [15867] = 1,
    ACTIONS(1328), 1,
      sym_comment,
  [15871] = 1,
    ACTIONS(1330), 1,
      ts_builtin_sym_end,
  [15875] = 1,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE,
  [15879] = 1,
    ACTIONS(1332), 1,
      ts_builtin_sym_end,
  [15883] = 1,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
  [15887] = 1,
    ACTIONS(1334), 1,
      aux_sym_literal_type_token1,
  [15891] = 1,
    ACTIONS(1336), 1,
      aux_sym_literal_type_token2,
  [15895] = 1,
    ACTIONS(1338), 1,
      ts_builtin_sym_end,
  [15899] = 1,
    ACTIONS(1340), 1,
      anon_sym_DOT,
  [15903] = 1,
    ACTIONS(1342), 1,
      anon_sym_DOT,
  [15907] = 1,
    ACTIONS(1344), 1,
      ts_builtin_sym_end,
  [15911] = 1,
    ACTIONS(1088), 1,
      anon_sym_COLON,
  [15915] = 1,
    ACTIONS(1346), 1,
      anon_sym_RBRACK,
  [15919] = 1,
    ACTIONS(1348), 1,
      sym_identifier,
  [15923] = 1,
    ACTIONS(1350), 1,
      anon_sym_LPAREN,
  [15927] = 1,
    ACTIONS(1352), 1,
      aux_sym_literal_type_token1,
  [15931] = 1,
    ACTIONS(1354), 1,
      aux_sym_literal_type_token2,
  [15935] = 1,
    ACTIONS(1356), 1,
      anon_sym_SQUOTE,
  [15939] = 1,
    ACTIONS(1356), 1,
      anon_sym_DQUOTE,
  [15943] = 1,
    ACTIONS(1358), 1,
      sym_identifier,
  [15947] = 1,
    ACTIONS(1360), 1,
      aux_sym_literal_type_token2,
  [15951] = 1,
    ACTIONS(1362), 1,
      aux_sym_literal_type_token1,
  [15955] = 1,
    ACTIONS(1364), 1,
      anon_sym_LPAREN,
  [15959] = 1,
    ACTIONS(1366), 1,
      ts_builtin_sym_end,
  [15963] = 1,
    ACTIONS(1368), 1,
      anon_sym_LPAREN,
  [15967] = 1,
    ACTIONS(1370), 1,
      aux_sym_literal_type_token1,
  [15971] = 1,
    ACTIONS(1372), 1,
      aux_sym_literal_type_token2,
  [15975] = 1,
    ACTIONS(1374), 1,
      ts_builtin_sym_end,
  [15979] = 1,
    ACTIONS(1376), 1,
      ts_builtin_sym_end,
  [15983] = 1,
    ACTIONS(1378), 1,
      anon_sym_ATas,
  [15987] = 1,
    ACTIONS(1380), 1,
      sym_number,
  [15991] = 1,
    ACTIONS(1382), 1,
      anon_sym_LBRACE,
  [15995] = 1,
    ACTIONS(1384), 1,
      sym_identifier,
  [15999] = 1,
    ACTIONS(1386), 1,
      sym_identifier,
  [16003] = 1,
    ACTIONS(1388), 1,
      anon_sym_LPAREN,
  [16007] = 1,
    ACTIONS(1390), 1,
      aux_sym_literal_type_token1,
  [16011] = 1,
    ACTIONS(1392), 1,
      aux_sym_literal_type_token2,
  [16015] = 1,
    ACTIONS(1394), 1,
      ts_builtin_sym_end,
  [16019] = 1,
    ACTIONS(1396), 1,
      ts_builtin_sym_end,
  [16023] = 1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
  [16027] = 1,
    ACTIONS(1398), 1,
      sym_identifier,
  [16031] = 1,
    ACTIONS(1400), 1,
      sym_identifier,
  [16035] = 1,
    ACTIONS(1402), 1,
      ts_builtin_sym_end,
  [16039] = 1,
    ACTIONS(1404), 1,
      sym_identifier,
  [16043] = 1,
    ACTIONS(1406), 1,
      sym_diagnostic_identifier,
  [16047] = 1,
    ACTIONS(1408), 1,
      anon_sym_COLON,
  [16051] = 1,
    ACTIONS(1410), 1,
      sym_number,
  [16055] = 1,
    ACTIONS(1412), 1,
      ts_builtin_sym_end,
  [16059] = 1,
    ACTIONS(1414), 1,
      sym_identifier,
  [16063] = 1,
    ACTIONS(1416), 1,
      anon_sym_COLON,
  [16067] = 1,
    ACTIONS(1418), 1,
      sym_number,
  [16071] = 1,
    ACTIONS(1420), 1,
      anon_sym_COLON,
  [16075] = 1,
    ACTIONS(1422), 1,
      anon_sym_RBRACK,
  [16079] = 1,
    ACTIONS(1424), 1,
      sym_identifier,
  [16083] = 1,
    ACTIONS(1426), 1,
      anon_sym_COLON,
  [16087] = 1,
    ACTIONS(1428), 1,
      anon_sym_SQUOTE,
  [16091] = 1,
    ACTIONS(1430), 1,
      anon_sym_COLON,
  [16095] = 1,
    ACTIONS(1428), 1,
      anon_sym_DQUOTE,
  [16099] = 1,
    ACTIONS(1432), 1,
      anon_sym_COLON,
  [16103] = 1,
    ACTIONS(701), 1,
      anon_sym_COLON,
  [16107] = 1,
    ACTIONS(1434), 1,
      anon_sym_COLON,
  [16111] = 1,
    ACTIONS(1436), 1,
      ts_builtin_sym_end,
  [16115] = 1,
    ACTIONS(1438), 1,
      anon_sym_COLON,
  [16119] = 1,
    ACTIONS(1440), 1,
      ts_builtin_sym_end,
  [16123] = 1,
    ACTIONS(1442), 1,
      anon_sym_COLON,
  [16127] = 1,
    ACTIONS(1444), 1,
      ts_builtin_sym_end,
  [16131] = 1,
    ACTIONS(1446), 1,
      anon_sym_COLON,
  [16135] = 1,
    ACTIONS(1448), 1,
      ts_builtin_sym_end,
  [16139] = 1,
    ACTIONS(1450), 1,
      anon_sym_COLON,
  [16143] = 1,
    ACTIONS(1452), 1,
      sym_identifier,
  [16147] = 1,
    ACTIONS(1454), 1,
      anon_sym_COLON,
  [16151] = 1,
    ACTIONS(1456), 1,
      ts_builtin_sym_end,
  [16155] = 1,
    ACTIONS(1458), 1,
      anon_sym_COLON,
  [16159] = 1,
    ACTIONS(1460), 1,
      sym_number,
  [16163] = 1,
    ACTIONS(1462), 1,
      anon_sym_COLON,
  [16167] = 1,
    ACTIONS(1464), 1,
      anon_sym_LPAREN,
  [16171] = 1,
    ACTIONS(817), 1,
      anon_sym_RBRACK2,
  [16175] = 1,
    ACTIONS(1466), 1,
      ts_builtin_sym_end,
  [16179] = 1,
    ACTIONS(813), 1,
      anon_sym_RBRACK2,
  [16183] = 1,
    ACTIONS(815), 1,
      anon_sym_RBRACK2,
  [16187] = 1,
    ACTIONS(809), 1,
      anon_sym_RBRACK2,
  [16191] = 1,
    ACTIONS(1468), 1,
      anon_sym_COLON,
  [16195] = 1,
    ACTIONS(807), 1,
      anon_sym_RBRACK2,
  [16199] = 1,
    ACTIONS(1470), 1,
      ts_builtin_sym_end,
  [16203] = 1,
    ACTIONS(823), 1,
      anon_sym_RBRACK2,
  [16207] = 1,
    ACTIONS(1472), 1,
      ts_builtin_sym_end,
  [16211] = 1,
    ACTIONS(827), 1,
      anon_sym_RBRACK2,
  [16215] = 1,
    ACTIONS(849), 1,
      ts_builtin_sym_end,
  [16219] = 1,
    ACTIONS(1474), 1,
      sym_string,
  [16223] = 1,
    ACTIONS(1476), 1,
      ts_builtin_sym_end,
  [16227] = 1,
    ACTIONS(1478), 1,
      sym_diagnostic_identifier,
  [16231] = 1,
    ACTIONS(1480), 1,
      sym_identifier,
  [16235] = 1,
    ACTIONS(1482), 1,
      ts_builtin_sym_end,
  [16239] = 1,
    ACTIONS(1484), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 131,
  [SMALL_STATE(5)] = 196,
  [SMALL_STATE(6)] = 261,
  [SMALL_STATE(7)] = 326,
  [SMALL_STATE(8)] = 391,
  [SMALL_STATE(9)] = 456,
  [SMALL_STATE(10)] = 521,
  [SMALL_STATE(11)] = 586,
  [SMALL_STATE(12)] = 622,
  [SMALL_STATE(13)] = 660,
  [SMALL_STATE(14)] = 714,
  [SMALL_STATE(15)] = 770,
  [SMALL_STATE(16)] = 824,
  [SMALL_STATE(17)] = 878,
  [SMALL_STATE(18)] = 914,
  [SMALL_STATE(19)] = 960,
  [SMALL_STATE(20)] = 996,
  [SMALL_STATE(21)] = 1042,
  [SMALL_STATE(22)] = 1080,
  [SMALL_STATE(23)] = 1116,
  [SMALL_STATE(24)] = 1154,
  [SMALL_STATE(25)] = 1200,
  [SMALL_STATE(26)] = 1246,
  [SMALL_STATE(27)] = 1300,
  [SMALL_STATE(28)] = 1354,
  [SMALL_STATE(29)] = 1400,
  [SMALL_STATE(30)] = 1456,
  [SMALL_STATE(31)] = 1510,
  [SMALL_STATE(32)] = 1566,
  [SMALL_STATE(33)] = 1602,
  [SMALL_STATE(34)] = 1656,
  [SMALL_STATE(35)] = 1702,
  [SMALL_STATE(36)] = 1756,
  [SMALL_STATE(37)] = 1794,
  [SMALL_STATE(38)] = 1832,
  [SMALL_STATE(39)] = 1870,
  [SMALL_STATE(40)] = 1906,
  [SMALL_STATE(41)] = 1942,
  [SMALL_STATE(42)] = 1980,
  [SMALL_STATE(43)] = 2033,
  [SMALL_STATE(44)] = 2086,
  [SMALL_STATE(45)] = 2139,
  [SMALL_STATE(46)] = 2192,
  [SMALL_STATE(47)] = 2245,
  [SMALL_STATE(48)] = 2298,
  [SMALL_STATE(49)] = 2351,
  [SMALL_STATE(50)] = 2404,
  [SMALL_STATE(51)] = 2457,
  [SMALL_STATE(52)] = 2510,
  [SMALL_STATE(53)] = 2563,
  [SMALL_STATE(54)] = 2616,
  [SMALL_STATE(55)] = 2669,
  [SMALL_STATE(56)] = 2722,
  [SMALL_STATE(57)] = 2775,
  [SMALL_STATE(58)] = 2828,
  [SMALL_STATE(59)] = 2881,
  [SMALL_STATE(60)] = 2934,
  [SMALL_STATE(61)] = 2987,
  [SMALL_STATE(62)] = 3040,
  [SMALL_STATE(63)] = 3093,
  [SMALL_STATE(64)] = 3146,
  [SMALL_STATE(65)] = 3199,
  [SMALL_STATE(66)] = 3252,
  [SMALL_STATE(67)] = 3305,
  [SMALL_STATE(68)] = 3358,
  [SMALL_STATE(69)] = 3411,
  [SMALL_STATE(70)] = 3464,
  [SMALL_STATE(71)] = 3517,
  [SMALL_STATE(72)] = 3570,
  [SMALL_STATE(73)] = 3623,
  [SMALL_STATE(74)] = 3676,
  [SMALL_STATE(75)] = 3729,
  [SMALL_STATE(76)] = 3782,
  [SMALL_STATE(77)] = 3835,
  [SMALL_STATE(78)] = 3888,
  [SMALL_STATE(79)] = 3941,
  [SMALL_STATE(80)] = 3994,
  [SMALL_STATE(81)] = 4047,
  [SMALL_STATE(82)] = 4100,
  [SMALL_STATE(83)] = 4153,
  [SMALL_STATE(84)] = 4206,
  [SMALL_STATE(85)] = 4259,
  [SMALL_STATE(86)] = 4312,
  [SMALL_STATE(87)] = 4365,
  [SMALL_STATE(88)] = 4418,
  [SMALL_STATE(89)] = 4471,
  [SMALL_STATE(90)] = 4524,
  [SMALL_STATE(91)] = 4577,
  [SMALL_STATE(92)] = 4630,
  [SMALL_STATE(93)] = 4683,
  [SMALL_STATE(94)] = 4736,
  [SMALL_STATE(95)] = 4789,
  [SMALL_STATE(96)] = 4842,
  [SMALL_STATE(97)] = 4895,
  [SMALL_STATE(98)] = 4948,
  [SMALL_STATE(99)] = 5001,
  [SMALL_STATE(100)] = 5054,
  [SMALL_STATE(101)] = 5107,
  [SMALL_STATE(102)] = 5140,
  [SMALL_STATE(103)] = 5173,
  [SMALL_STATE(104)] = 5206,
  [SMALL_STATE(105)] = 5239,
  [SMALL_STATE(106)] = 5292,
  [SMALL_STATE(107)] = 5345,
  [SMALL_STATE(108)] = 5378,
  [SMALL_STATE(109)] = 5411,
  [SMALL_STATE(110)] = 5444,
  [SMALL_STATE(111)] = 5477,
  [SMALL_STATE(112)] = 5510,
  [SMALL_STATE(113)] = 5543,
  [SMALL_STATE(114)] = 5578,
  [SMALL_STATE(115)] = 5631,
  [SMALL_STATE(116)] = 5684,
  [SMALL_STATE(117)] = 5737,
  [SMALL_STATE(118)] = 5790,
  [SMALL_STATE(119)] = 5843,
  [SMALL_STATE(120)] = 5896,
  [SMALL_STATE(121)] = 5949,
  [SMALL_STATE(122)] = 6002,
  [SMALL_STATE(123)] = 6043,
  [SMALL_STATE(124)] = 6096,
  [SMALL_STATE(125)] = 6149,
  [SMALL_STATE(126)] = 6190,
  [SMALL_STATE(127)] = 6243,
  [SMALL_STATE(128)] = 6296,
  [SMALL_STATE(129)] = 6349,
  [SMALL_STATE(130)] = 6402,
  [SMALL_STATE(131)] = 6455,
  [SMALL_STATE(132)] = 6508,
  [SMALL_STATE(133)] = 6561,
  [SMALL_STATE(134)] = 6614,
  [SMALL_STATE(135)] = 6647,
  [SMALL_STATE(136)] = 6700,
  [SMALL_STATE(137)] = 6753,
  [SMALL_STATE(138)] = 6806,
  [SMALL_STATE(139)] = 6839,
  [SMALL_STATE(140)] = 6872,
  [SMALL_STATE(141)] = 6925,
  [SMALL_STATE(142)] = 6978,
  [SMALL_STATE(143)] = 7031,
  [SMALL_STATE(144)] = 7084,
  [SMALL_STATE(145)] = 7137,
  [SMALL_STATE(146)] = 7190,
  [SMALL_STATE(147)] = 7243,
  [SMALL_STATE(148)] = 7296,
  [SMALL_STATE(149)] = 7349,
  [SMALL_STATE(150)] = 7402,
  [SMALL_STATE(151)] = 7455,
  [SMALL_STATE(152)] = 7508,
  [SMALL_STATE(153)] = 7561,
  [SMALL_STATE(154)] = 7594,
  [SMALL_STATE(155)] = 7647,
  [SMALL_STATE(156)] = 7700,
  [SMALL_STATE(157)] = 7733,
  [SMALL_STATE(158)] = 7786,
  [SMALL_STATE(159)] = 7839,
  [SMALL_STATE(160)] = 7892,
  [SMALL_STATE(161)] = 7945,
  [SMALL_STATE(162)] = 7998,
  [SMALL_STATE(163)] = 8051,
  [SMALL_STATE(164)] = 8104,
  [SMALL_STATE(165)] = 8157,
  [SMALL_STATE(166)] = 8210,
  [SMALL_STATE(167)] = 8263,
  [SMALL_STATE(168)] = 8316,
  [SMALL_STATE(169)] = 8349,
  [SMALL_STATE(170)] = 8382,
  [SMALL_STATE(171)] = 8435,
  [SMALL_STATE(172)] = 8488,
  [SMALL_STATE(173)] = 8541,
  [SMALL_STATE(174)] = 8594,
  [SMALL_STATE(175)] = 8627,
  [SMALL_STATE(176)] = 8680,
  [SMALL_STATE(177)] = 8733,
  [SMALL_STATE(178)] = 8756,
  [SMALL_STATE(179)] = 8779,
  [SMALL_STATE(180)] = 8797,
  [SMALL_STATE(181)] = 8817,
  [SMALL_STATE(182)] = 8837,
  [SMALL_STATE(183)] = 8867,
  [SMALL_STATE(184)] = 8887,
  [SMALL_STATE(185)] = 8921,
  [SMALL_STATE(186)] = 8941,
  [SMALL_STATE(187)] = 8961,
  [SMALL_STATE(188)] = 8991,
  [SMALL_STATE(189)] = 9021,
  [SMALL_STATE(190)] = 9051,
  [SMALL_STATE(191)] = 9071,
  [SMALL_STATE(192)] = 9091,
  [SMALL_STATE(193)] = 9121,
  [SMALL_STATE(194)] = 9139,
  [SMALL_STATE(195)] = 9169,
  [SMALL_STATE(196)] = 9203,
  [SMALL_STATE(197)] = 9220,
  [SMALL_STATE(198)] = 9235,
  [SMALL_STATE(199)] = 9252,
  [SMALL_STATE(200)] = 9269,
  [SMALL_STATE(201)] = 9288,
  [SMALL_STATE(202)] = 9307,
  [SMALL_STATE(203)] = 9336,
  [SMALL_STATE(204)] = 9355,
  [SMALL_STATE(205)] = 9374,
  [SMALL_STATE(206)] = 9391,
  [SMALL_STATE(207)] = 9410,
  [SMALL_STATE(208)] = 9439,
  [SMALL_STATE(209)] = 9468,
  [SMALL_STATE(210)] = 9497,
  [SMALL_STATE(211)] = 9516,
  [SMALL_STATE(212)] = 9535,
  [SMALL_STATE(213)] = 9564,
  [SMALL_STATE(214)] = 9579,
  [SMALL_STATE(215)] = 9594,
  [SMALL_STATE(216)] = 9611,
  [SMALL_STATE(217)] = 9626,
  [SMALL_STATE(218)] = 9641,
  [SMALL_STATE(219)] = 9656,
  [SMALL_STATE(220)] = 9685,
  [SMALL_STATE(221)] = 9702,
  [SMALL_STATE(222)] = 9719,
  [SMALL_STATE(223)] = 9744,
  [SMALL_STATE(224)] = 9761,
  [SMALL_STATE(225)] = 9778,
  [SMALL_STATE(226)] = 9795,
  [SMALL_STATE(227)] = 9812,
  [SMALL_STATE(228)] = 9829,
  [SMALL_STATE(229)] = 9860,
  [SMALL_STATE(230)] = 9875,
  [SMALL_STATE(231)] = 9892,
  [SMALL_STATE(232)] = 9909,
  [SMALL_STATE(233)] = 9926,
  [SMALL_STATE(234)] = 9941,
  [SMALL_STATE(235)] = 9958,
  [SMALL_STATE(236)] = 9973,
  [SMALL_STATE(237)] = 9998,
  [SMALL_STATE(238)] = 10013,
  [SMALL_STATE(239)] = 10028,
  [SMALL_STATE(240)] = 10043,
  [SMALL_STATE(241)] = 10058,
  [SMALL_STATE(242)] = 10073,
  [SMALL_STATE(243)] = 10088,
  [SMALL_STATE(244)] = 10103,
  [SMALL_STATE(245)] = 10118,
  [SMALL_STATE(246)] = 10133,
  [SMALL_STATE(247)] = 10161,
  [SMALL_STATE(248)] = 10175,
  [SMALL_STATE(249)] = 10191,
  [SMALL_STATE(250)] = 10205,
  [SMALL_STATE(251)] = 10225,
  [SMALL_STATE(252)] = 10241,
  [SMALL_STATE(253)] = 10255,
  [SMALL_STATE(254)] = 10271,
  [SMALL_STATE(255)] = 10299,
  [SMALL_STATE(256)] = 10315,
  [SMALL_STATE(257)] = 10343,
  [SMALL_STATE(258)] = 10371,
  [SMALL_STATE(259)] = 10387,
  [SMALL_STATE(260)] = 10401,
  [SMALL_STATE(261)] = 10415,
  [SMALL_STATE(262)] = 10431,
  [SMALL_STATE(263)] = 10447,
  [SMALL_STATE(264)] = 10461,
  [SMALL_STATE(265)] = 10489,
  [SMALL_STATE(266)] = 10517,
  [SMALL_STATE(267)] = 10545,
  [SMALL_STATE(268)] = 10573,
  [SMALL_STATE(269)] = 10587,
  [SMALL_STATE(270)] = 10615,
  [SMALL_STATE(271)] = 10643,
  [SMALL_STATE(272)] = 10671,
  [SMALL_STATE(273)] = 10699,
  [SMALL_STATE(274)] = 10717,
  [SMALL_STATE(275)] = 10731,
  [SMALL_STATE(276)] = 10749,
  [SMALL_STATE(277)] = 10763,
  [SMALL_STATE(278)] = 10779,
  [SMALL_STATE(279)] = 10793,
  [SMALL_STATE(280)] = 10807,
  [SMALL_STATE(281)] = 10821,
  [SMALL_STATE(282)] = 10835,
  [SMALL_STATE(283)] = 10849,
  [SMALL_STATE(284)] = 10863,
  [SMALL_STATE(285)] = 10877,
  [SMALL_STATE(286)] = 10891,
  [SMALL_STATE(287)] = 10909,
  [SMALL_STATE(288)] = 10923,
  [SMALL_STATE(289)] = 10937,
  [SMALL_STATE(290)] = 10953,
  [SMALL_STATE(291)] = 10977,
  [SMALL_STATE(292)] = 10993,
  [SMALL_STATE(293)] = 11021,
  [SMALL_STATE(294)] = 11035,
  [SMALL_STATE(295)] = 11053,
  [SMALL_STATE(296)] = 11067,
  [SMALL_STATE(297)] = 11083,
  [SMALL_STATE(298)] = 11097,
  [SMALL_STATE(299)] = 11113,
  [SMALL_STATE(300)] = 11137,
  [SMALL_STATE(301)] = 11153,
  [SMALL_STATE(302)] = 11167,
  [SMALL_STATE(303)] = 11181,
  [SMALL_STATE(304)] = 11195,
  [SMALL_STATE(305)] = 11211,
  [SMALL_STATE(306)] = 11239,
  [SMALL_STATE(307)] = 11267,
  [SMALL_STATE(308)] = 11281,
  [SMALL_STATE(309)] = 11295,
  [SMALL_STATE(310)] = 11323,
  [SMALL_STATE(311)] = 11337,
  [SMALL_STATE(312)] = 11353,
  [SMALL_STATE(313)] = 11371,
  [SMALL_STATE(314)] = 11385,
  [SMALL_STATE(315)] = 11399,
  [SMALL_STATE(316)] = 11415,
  [SMALL_STATE(317)] = 11429,
  [SMALL_STATE(318)] = 11445,
  [SMALL_STATE(319)] = 11459,
  [SMALL_STATE(320)] = 11473,
  [SMALL_STATE(321)] = 11487,
  [SMALL_STATE(322)] = 11511,
  [SMALL_STATE(323)] = 11527,
  [SMALL_STATE(324)] = 11543,
  [SMALL_STATE(325)] = 11557,
  [SMALL_STATE(326)] = 11581,
  [SMALL_STATE(327)] = 11609,
  [SMALL_STATE(328)] = 11637,
  [SMALL_STATE(329)] = 11651,
  [SMALL_STATE(330)] = 11679,
  [SMALL_STATE(331)] = 11697,
  [SMALL_STATE(332)] = 11715,
  [SMALL_STATE(333)] = 11738,
  [SMALL_STATE(334)] = 11751,
  [SMALL_STATE(335)] = 11774,
  [SMALL_STATE(336)] = 11797,
  [SMALL_STATE(337)] = 11810,
  [SMALL_STATE(338)] = 11823,
  [SMALL_STATE(339)] = 11838,
  [SMALL_STATE(340)] = 11851,
  [SMALL_STATE(341)] = 11864,
  [SMALL_STATE(342)] = 11877,
  [SMALL_STATE(343)] = 11892,
  [SMALL_STATE(344)] = 11905,
  [SMALL_STATE(345)] = 11918,
  [SMALL_STATE(346)] = 11931,
  [SMALL_STATE(347)] = 11944,
  [SMALL_STATE(348)] = 11957,
  [SMALL_STATE(349)] = 11972,
  [SMALL_STATE(350)] = 11985,
  [SMALL_STATE(351)] = 11998,
  [SMALL_STATE(352)] = 12011,
  [SMALL_STATE(353)] = 12024,
  [SMALL_STATE(354)] = 12047,
  [SMALL_STATE(355)] = 12070,
  [SMALL_STATE(356)] = 12083,
  [SMALL_STATE(357)] = 12096,
  [SMALL_STATE(358)] = 12109,
  [SMALL_STATE(359)] = 12122,
  [SMALL_STATE(360)] = 12135,
  [SMALL_STATE(361)] = 12148,
  [SMALL_STATE(362)] = 12161,
  [SMALL_STATE(363)] = 12174,
  [SMALL_STATE(364)] = 12197,
  [SMALL_STATE(365)] = 12212,
  [SMALL_STATE(366)] = 12227,
  [SMALL_STATE(367)] = 12240,
  [SMALL_STATE(368)] = 12253,
  [SMALL_STATE(369)] = 12266,
  [SMALL_STATE(370)] = 12289,
  [SMALL_STATE(371)] = 12302,
  [SMALL_STATE(372)] = 12315,
  [SMALL_STATE(373)] = 12328,
  [SMALL_STATE(374)] = 12341,
  [SMALL_STATE(375)] = 12354,
  [SMALL_STATE(376)] = 12367,
  [SMALL_STATE(377)] = 12380,
  [SMALL_STATE(378)] = 12393,
  [SMALL_STATE(379)] = 12406,
  [SMALL_STATE(380)] = 12419,
  [SMALL_STATE(381)] = 12442,
  [SMALL_STATE(382)] = 12465,
  [SMALL_STATE(383)] = 12488,
  [SMALL_STATE(384)] = 12511,
  [SMALL_STATE(385)] = 12534,
  [SMALL_STATE(386)] = 12557,
  [SMALL_STATE(387)] = 12580,
  [SMALL_STATE(388)] = 12603,
  [SMALL_STATE(389)] = 12626,
  [SMALL_STATE(390)] = 12649,
  [SMALL_STATE(391)] = 12672,
  [SMALL_STATE(392)] = 12695,
  [SMALL_STATE(393)] = 12718,
  [SMALL_STATE(394)] = 12741,
  [SMALL_STATE(395)] = 12764,
  [SMALL_STATE(396)] = 12787,
  [SMALL_STATE(397)] = 12810,
  [SMALL_STATE(398)] = 12833,
  [SMALL_STATE(399)] = 12848,
  [SMALL_STATE(400)] = 12871,
  [SMALL_STATE(401)] = 12894,
  [SMALL_STATE(402)] = 12917,
  [SMALL_STATE(403)] = 12940,
  [SMALL_STATE(404)] = 12963,
  [SMALL_STATE(405)] = 12986,
  [SMALL_STATE(406)] = 13009,
  [SMALL_STATE(407)] = 13032,
  [SMALL_STATE(408)] = 13055,
  [SMALL_STATE(409)] = 13078,
  [SMALL_STATE(410)] = 13101,
  [SMALL_STATE(411)] = 13124,
  [SMALL_STATE(412)] = 13147,
  [SMALL_STATE(413)] = 13170,
  [SMALL_STATE(414)] = 13188,
  [SMALL_STATE(415)] = 13208,
  [SMALL_STATE(416)] = 13220,
  [SMALL_STATE(417)] = 13232,
  [SMALL_STATE(418)] = 13244,
  [SMALL_STATE(419)] = 13262,
  [SMALL_STATE(420)] = 13274,
  [SMALL_STATE(421)] = 13294,
  [SMALL_STATE(422)] = 13306,
  [SMALL_STATE(423)] = 13328,
  [SMALL_STATE(424)] = 13340,
  [SMALL_STATE(425)] = 13362,
  [SMALL_STATE(426)] = 13374,
  [SMALL_STATE(427)] = 13386,
  [SMALL_STATE(428)] = 13406,
  [SMALL_STATE(429)] = 13418,
  [SMALL_STATE(430)] = 13430,
  [SMALL_STATE(431)] = 13452,
  [SMALL_STATE(432)] = 13474,
  [SMALL_STATE(433)] = 13496,
  [SMALL_STATE(434)] = 13516,
  [SMALL_STATE(435)] = 13536,
  [SMALL_STATE(436)] = 13548,
  [SMALL_STATE(437)] = 13560,
  [SMALL_STATE(438)] = 13572,
  [SMALL_STATE(439)] = 13584,
  [SMALL_STATE(440)] = 13596,
  [SMALL_STATE(441)] = 13608,
  [SMALL_STATE(442)] = 13620,
  [SMALL_STATE(443)] = 13632,
  [SMALL_STATE(444)] = 13650,
  [SMALL_STATE(445)] = 13668,
  [SMALL_STATE(446)] = 13686,
  [SMALL_STATE(447)] = 13704,
  [SMALL_STATE(448)] = 13724,
  [SMALL_STATE(449)] = 13744,
  [SMALL_STATE(450)] = 13766,
  [SMALL_STATE(451)] = 13784,
  [SMALL_STATE(452)] = 13801,
  [SMALL_STATE(453)] = 13818,
  [SMALL_STATE(454)] = 13835,
  [SMALL_STATE(455)] = 13852,
  [SMALL_STATE(456)] = 13869,
  [SMALL_STATE(457)] = 13886,
  [SMALL_STATE(458)] = 13903,
  [SMALL_STATE(459)] = 13920,
  [SMALL_STATE(460)] = 13937,
  [SMALL_STATE(461)] = 13954,
  [SMALL_STATE(462)] = 13971,
  [SMALL_STATE(463)] = 13988,
  [SMALL_STATE(464)] = 14005,
  [SMALL_STATE(465)] = 14022,
  [SMALL_STATE(466)] = 14039,
  [SMALL_STATE(467)] = 14056,
  [SMALL_STATE(468)] = 14073,
  [SMALL_STATE(469)] = 14090,
  [SMALL_STATE(470)] = 14109,
  [SMALL_STATE(471)] = 14126,
  [SMALL_STATE(472)] = 14143,
  [SMALL_STATE(473)] = 14160,
  [SMALL_STATE(474)] = 14179,
  [SMALL_STATE(475)] = 14196,
  [SMALL_STATE(476)] = 14213,
  [SMALL_STATE(477)] = 14230,
  [SMALL_STATE(478)] = 14247,
  [SMALL_STATE(479)] = 14261,
  [SMALL_STATE(480)] = 14269,
  [SMALL_STATE(481)] = 14283,
  [SMALL_STATE(482)] = 14294,
  [SMALL_STATE(483)] = 14307,
  [SMALL_STATE(484)] = 14320,
  [SMALL_STATE(485)] = 14333,
  [SMALL_STATE(486)] = 14344,
  [SMALL_STATE(487)] = 14357,
  [SMALL_STATE(488)] = 14370,
  [SMALL_STATE(489)] = 14383,
  [SMALL_STATE(490)] = 14396,
  [SMALL_STATE(491)] = 14409,
  [SMALL_STATE(492)] = 14419,
  [SMALL_STATE(493)] = 14429,
  [SMALL_STATE(494)] = 14439,
  [SMALL_STATE(495)] = 14449,
  [SMALL_STATE(496)] = 14459,
  [SMALL_STATE(497)] = 14469,
  [SMALL_STATE(498)] = 14479,
  [SMALL_STATE(499)] = 14489,
  [SMALL_STATE(500)] = 14499,
  [SMALL_STATE(501)] = 14509,
  [SMALL_STATE(502)] = 14519,
  [SMALL_STATE(503)] = 14529,
  [SMALL_STATE(504)] = 14539,
  [SMALL_STATE(505)] = 14549,
  [SMALL_STATE(506)] = 14559,
  [SMALL_STATE(507)] = 14569,
  [SMALL_STATE(508)] = 14579,
  [SMALL_STATE(509)] = 14589,
  [SMALL_STATE(510)] = 14599,
  [SMALL_STATE(511)] = 14609,
  [SMALL_STATE(512)] = 14619,
  [SMALL_STATE(513)] = 14629,
  [SMALL_STATE(514)] = 14639,
  [SMALL_STATE(515)] = 14649,
  [SMALL_STATE(516)] = 14659,
  [SMALL_STATE(517)] = 14669,
  [SMALL_STATE(518)] = 14679,
  [SMALL_STATE(519)] = 14689,
  [SMALL_STATE(520)] = 14699,
  [SMALL_STATE(521)] = 14709,
  [SMALL_STATE(522)] = 14719,
  [SMALL_STATE(523)] = 14729,
  [SMALL_STATE(524)] = 14737,
  [SMALL_STATE(525)] = 14747,
  [SMALL_STATE(526)] = 14757,
  [SMALL_STATE(527)] = 14767,
  [SMALL_STATE(528)] = 14777,
  [SMALL_STATE(529)] = 14787,
  [SMALL_STATE(530)] = 14797,
  [SMALL_STATE(531)] = 14807,
  [SMALL_STATE(532)] = 14817,
  [SMALL_STATE(533)] = 14827,
  [SMALL_STATE(534)] = 14837,
  [SMALL_STATE(535)] = 14847,
  [SMALL_STATE(536)] = 14857,
  [SMALL_STATE(537)] = 14867,
  [SMALL_STATE(538)] = 14877,
  [SMALL_STATE(539)] = 14887,
  [SMALL_STATE(540)] = 14897,
  [SMALL_STATE(541)] = 14907,
  [SMALL_STATE(542)] = 14917,
  [SMALL_STATE(543)] = 14927,
  [SMALL_STATE(544)] = 14937,
  [SMALL_STATE(545)] = 14947,
  [SMALL_STATE(546)] = 14957,
  [SMALL_STATE(547)] = 14967,
  [SMALL_STATE(548)] = 14977,
  [SMALL_STATE(549)] = 14987,
  [SMALL_STATE(550)] = 14997,
  [SMALL_STATE(551)] = 15007,
  [SMALL_STATE(552)] = 15017,
  [SMALL_STATE(553)] = 15027,
  [SMALL_STATE(554)] = 15037,
  [SMALL_STATE(555)] = 15047,
  [SMALL_STATE(556)] = 15057,
  [SMALL_STATE(557)] = 15067,
  [SMALL_STATE(558)] = 15077,
  [SMALL_STATE(559)] = 15087,
  [SMALL_STATE(560)] = 15097,
  [SMALL_STATE(561)] = 15107,
  [SMALL_STATE(562)] = 15117,
  [SMALL_STATE(563)] = 15127,
  [SMALL_STATE(564)] = 15137,
  [SMALL_STATE(565)] = 15147,
  [SMALL_STATE(566)] = 15157,
  [SMALL_STATE(567)] = 15167,
  [SMALL_STATE(568)] = 15177,
  [SMALL_STATE(569)] = 15187,
  [SMALL_STATE(570)] = 15197,
  [SMALL_STATE(571)] = 15207,
  [SMALL_STATE(572)] = 15217,
  [SMALL_STATE(573)] = 15227,
  [SMALL_STATE(574)] = 15237,
  [SMALL_STATE(575)] = 15242,
  [SMALL_STATE(576)] = 15249,
  [SMALL_STATE(577)] = 15256,
  [SMALL_STATE(578)] = 15263,
  [SMALL_STATE(579)] = 15270,
  [SMALL_STATE(580)] = 15277,
  [SMALL_STATE(581)] = 15284,
  [SMALL_STATE(582)] = 15291,
  [SMALL_STATE(583)] = 15298,
  [SMALL_STATE(584)] = 15305,
  [SMALL_STATE(585)] = 15312,
  [SMALL_STATE(586)] = 15319,
  [SMALL_STATE(587)] = 15326,
  [SMALL_STATE(588)] = 15333,
  [SMALL_STATE(589)] = 15340,
  [SMALL_STATE(590)] = 15347,
  [SMALL_STATE(591)] = 15354,
  [SMALL_STATE(592)] = 15359,
  [SMALL_STATE(593)] = 15366,
  [SMALL_STATE(594)] = 15373,
  [SMALL_STATE(595)] = 15380,
  [SMALL_STATE(596)] = 15387,
  [SMALL_STATE(597)] = 15394,
  [SMALL_STATE(598)] = 15401,
  [SMALL_STATE(599)] = 15408,
  [SMALL_STATE(600)] = 15415,
  [SMALL_STATE(601)] = 15422,
  [SMALL_STATE(602)] = 15429,
  [SMALL_STATE(603)] = 15436,
  [SMALL_STATE(604)] = 15443,
  [SMALL_STATE(605)] = 15450,
  [SMALL_STATE(606)] = 15457,
  [SMALL_STATE(607)] = 15464,
  [SMALL_STATE(608)] = 15471,
  [SMALL_STATE(609)] = 15478,
  [SMALL_STATE(610)] = 15485,
  [SMALL_STATE(611)] = 15490,
  [SMALL_STATE(612)] = 15497,
  [SMALL_STATE(613)] = 15504,
  [SMALL_STATE(614)] = 15511,
  [SMALL_STATE(615)] = 15518,
  [SMALL_STATE(616)] = 15525,
  [SMALL_STATE(617)] = 15532,
  [SMALL_STATE(618)] = 15537,
  [SMALL_STATE(619)] = 15544,
  [SMALL_STATE(620)] = 15551,
  [SMALL_STATE(621)] = 15558,
  [SMALL_STATE(622)] = 15565,
  [SMALL_STATE(623)] = 15572,
  [SMALL_STATE(624)] = 15579,
  [SMALL_STATE(625)] = 15586,
  [SMALL_STATE(626)] = 15593,
  [SMALL_STATE(627)] = 15600,
  [SMALL_STATE(628)] = 15607,
  [SMALL_STATE(629)] = 15614,
  [SMALL_STATE(630)] = 15621,
  [SMALL_STATE(631)] = 15628,
  [SMALL_STATE(632)] = 15635,
  [SMALL_STATE(633)] = 15639,
  [SMALL_STATE(634)] = 15643,
  [SMALL_STATE(635)] = 15647,
  [SMALL_STATE(636)] = 15651,
  [SMALL_STATE(637)] = 15655,
  [SMALL_STATE(638)] = 15659,
  [SMALL_STATE(639)] = 15663,
  [SMALL_STATE(640)] = 15667,
  [SMALL_STATE(641)] = 15671,
  [SMALL_STATE(642)] = 15675,
  [SMALL_STATE(643)] = 15679,
  [SMALL_STATE(644)] = 15683,
  [SMALL_STATE(645)] = 15687,
  [SMALL_STATE(646)] = 15691,
  [SMALL_STATE(647)] = 15695,
  [SMALL_STATE(648)] = 15699,
  [SMALL_STATE(649)] = 15703,
  [SMALL_STATE(650)] = 15707,
  [SMALL_STATE(651)] = 15711,
  [SMALL_STATE(652)] = 15715,
  [SMALL_STATE(653)] = 15719,
  [SMALL_STATE(654)] = 15723,
  [SMALL_STATE(655)] = 15727,
  [SMALL_STATE(656)] = 15731,
  [SMALL_STATE(657)] = 15735,
  [SMALL_STATE(658)] = 15739,
  [SMALL_STATE(659)] = 15743,
  [SMALL_STATE(660)] = 15747,
  [SMALL_STATE(661)] = 15751,
  [SMALL_STATE(662)] = 15755,
  [SMALL_STATE(663)] = 15759,
  [SMALL_STATE(664)] = 15763,
  [SMALL_STATE(665)] = 15767,
  [SMALL_STATE(666)] = 15771,
  [SMALL_STATE(667)] = 15775,
  [SMALL_STATE(668)] = 15779,
  [SMALL_STATE(669)] = 15783,
  [SMALL_STATE(670)] = 15787,
  [SMALL_STATE(671)] = 15791,
  [SMALL_STATE(672)] = 15795,
  [SMALL_STATE(673)] = 15799,
  [SMALL_STATE(674)] = 15803,
  [SMALL_STATE(675)] = 15807,
  [SMALL_STATE(676)] = 15811,
  [SMALL_STATE(677)] = 15815,
  [SMALL_STATE(678)] = 15819,
  [SMALL_STATE(679)] = 15823,
  [SMALL_STATE(680)] = 15827,
  [SMALL_STATE(681)] = 15831,
  [SMALL_STATE(682)] = 15835,
  [SMALL_STATE(683)] = 15839,
  [SMALL_STATE(684)] = 15843,
  [SMALL_STATE(685)] = 15847,
  [SMALL_STATE(686)] = 15851,
  [SMALL_STATE(687)] = 15855,
  [SMALL_STATE(688)] = 15859,
  [SMALL_STATE(689)] = 15863,
  [SMALL_STATE(690)] = 15867,
  [SMALL_STATE(691)] = 15871,
  [SMALL_STATE(692)] = 15875,
  [SMALL_STATE(693)] = 15879,
  [SMALL_STATE(694)] = 15883,
  [SMALL_STATE(695)] = 15887,
  [SMALL_STATE(696)] = 15891,
  [SMALL_STATE(697)] = 15895,
  [SMALL_STATE(698)] = 15899,
  [SMALL_STATE(699)] = 15903,
  [SMALL_STATE(700)] = 15907,
  [SMALL_STATE(701)] = 15911,
  [SMALL_STATE(702)] = 15915,
  [SMALL_STATE(703)] = 15919,
  [SMALL_STATE(704)] = 15923,
  [SMALL_STATE(705)] = 15927,
  [SMALL_STATE(706)] = 15931,
  [SMALL_STATE(707)] = 15935,
  [SMALL_STATE(708)] = 15939,
  [SMALL_STATE(709)] = 15943,
  [SMALL_STATE(710)] = 15947,
  [SMALL_STATE(711)] = 15951,
  [SMALL_STATE(712)] = 15955,
  [SMALL_STATE(713)] = 15959,
  [SMALL_STATE(714)] = 15963,
  [SMALL_STATE(715)] = 15967,
  [SMALL_STATE(716)] = 15971,
  [SMALL_STATE(717)] = 15975,
  [SMALL_STATE(718)] = 15979,
  [SMALL_STATE(719)] = 15983,
  [SMALL_STATE(720)] = 15987,
  [SMALL_STATE(721)] = 15991,
  [SMALL_STATE(722)] = 15995,
  [SMALL_STATE(723)] = 15999,
  [SMALL_STATE(724)] = 16003,
  [SMALL_STATE(725)] = 16007,
  [SMALL_STATE(726)] = 16011,
  [SMALL_STATE(727)] = 16015,
  [SMALL_STATE(728)] = 16019,
  [SMALL_STATE(729)] = 16023,
  [SMALL_STATE(730)] = 16027,
  [SMALL_STATE(731)] = 16031,
  [SMALL_STATE(732)] = 16035,
  [SMALL_STATE(733)] = 16039,
  [SMALL_STATE(734)] = 16043,
  [SMALL_STATE(735)] = 16047,
  [SMALL_STATE(736)] = 16051,
  [SMALL_STATE(737)] = 16055,
  [SMALL_STATE(738)] = 16059,
  [SMALL_STATE(739)] = 16063,
  [SMALL_STATE(740)] = 16067,
  [SMALL_STATE(741)] = 16071,
  [SMALL_STATE(742)] = 16075,
  [SMALL_STATE(743)] = 16079,
  [SMALL_STATE(744)] = 16083,
  [SMALL_STATE(745)] = 16087,
  [SMALL_STATE(746)] = 16091,
  [SMALL_STATE(747)] = 16095,
  [SMALL_STATE(748)] = 16099,
  [SMALL_STATE(749)] = 16103,
  [SMALL_STATE(750)] = 16107,
  [SMALL_STATE(751)] = 16111,
  [SMALL_STATE(752)] = 16115,
  [SMALL_STATE(753)] = 16119,
  [SMALL_STATE(754)] = 16123,
  [SMALL_STATE(755)] = 16127,
  [SMALL_STATE(756)] = 16131,
  [SMALL_STATE(757)] = 16135,
  [SMALL_STATE(758)] = 16139,
  [SMALL_STATE(759)] = 16143,
  [SMALL_STATE(760)] = 16147,
  [SMALL_STATE(761)] = 16151,
  [SMALL_STATE(762)] = 16155,
  [SMALL_STATE(763)] = 16159,
  [SMALL_STATE(764)] = 16163,
  [SMALL_STATE(765)] = 16167,
  [SMALL_STATE(766)] = 16171,
  [SMALL_STATE(767)] = 16175,
  [SMALL_STATE(768)] = 16179,
  [SMALL_STATE(769)] = 16183,
  [SMALL_STATE(770)] = 16187,
  [SMALL_STATE(771)] = 16191,
  [SMALL_STATE(772)] = 16195,
  [SMALL_STATE(773)] = 16199,
  [SMALL_STATE(774)] = 16203,
  [SMALL_STATE(775)] = 16207,
  [SMALL_STATE(776)] = 16211,
  [SMALL_STATE(777)] = 16215,
  [SMALL_STATE(778)] = 16219,
  [SMALL_STATE(779)] = 16223,
  [SMALL_STATE(780)] = 16227,
  [SMALL_STATE(781)] = 16231,
  [SMALL_STATE(782)] = 16235,
  [SMALL_STATE(783)] = 16239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(782),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(738),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 3),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(149),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 12),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 7, .production_id = 12),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 9, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 9, .production_id = 17),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 15),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8, .production_id = 15),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 10, .production_id = 17),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 10, .production_id = 17),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 9, .production_id = 15),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 9, .production_id = 15),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 8, .production_id = 12),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 8, .production_id = 12),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_type, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_type, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 9, .production_id = 16),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 9, .production_id = 16),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_type, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_type, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_type, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_type, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 10),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 10),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 8, .production_id = 14),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 8, .production_id = 14),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 4, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 4, .production_id = 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 11),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 11),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 5, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 5, .production_id = 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 7),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 6, .production_id = 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_type, 6, .production_id = 9),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_type, 6, .production_id = 9),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_literal_type, 7, .production_id = 10),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_literal_type, 7, .production_id = 10),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positional_field, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_positional_field, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexed_field, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexed_field, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(129),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(639),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(670),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(673),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(96),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(672),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 4),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(729),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_annotation_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_annotation_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_annotation_repeat1, 2), SHIFT_REPEAT(170),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 4),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 3),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(697),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(682),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 2),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(737),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 7, .production_id = 10),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 6, .production_id = 10),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 5, .production_id = 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 7),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 4, .production_id = 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 5),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [861] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_annotation_repeat1, 2), SHIFT_REPEAT(143),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 2),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 8), SHIFT_REPEAT(628),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_literal_type_repeat1, 2, .production_id = 8),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_annotation_repeat1, 2), SHIFT_REPEAT(167),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 5),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 1),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 2),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [998] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(481),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 6),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagnostic_annotation_repeat1, 2),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagnostic_annotation_repeat1, 2), SHIFT_REPEAT(734),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 4),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 4),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_since_annotation, 6, .production_id = 6),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 6, .production_id = 5),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 2),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 4, .production_id = 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 4),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_annotation, 2, .production_id = 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_annotation, 4),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_annotation, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_annotation, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 8),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_annotation, 1),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 1),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodiscard_annotation, 1),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_annotation, 1),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_reference, 5),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_annotation, 5),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_see_reference, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_injection, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_annotation, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_overload_annotation, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 3),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_annotation, 3, .production_id = 1),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_annotation, 3),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vararg_annotation, 3),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 3),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_annotation, 4),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_annotation, 3),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 4),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 3),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_async_annotation, 2),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deprecated_annotation, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nodiscard_annotation, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_annotation, 2),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_annotation, 4),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_annotation, 2),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 3),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 1),
  [1376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_comment, 3),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_annotation, 5),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 5),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 5),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_annotation, 6),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_annotation, 6),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_reference, 6),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_at_comment, 5),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 7),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_since_annotation, 7, .production_id = 6),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_annotation, 8, .production_id = 13),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator_annotation, 8),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_annotation, 9),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier_annotation, 1),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
