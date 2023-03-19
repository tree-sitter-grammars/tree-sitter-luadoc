/**
 * @file Luadoc grammar for tree-sitter
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 * @see {@link https://emmylua.github.io/index.html|official documentation}
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'luadoc',

  supertypes: $ => [
    $.type,
  ],

  rules: {
    documentation: $ => choice(
      $.class_annotation,
      $.type_annotation,
      $.param_annotation,
      $.alias_annotation,
      $.return_annotation,
      $.field_annotation,
      $.qualifier_annotation,
      $.generic_annotation,
      $.vararg_annotation,
      $.diagnostic_annotation,
      $.deprecated_annotation,
      $.cast_annotation,
      $.async_annotation,
      $.overload_annotation,
      $.enum_annotation,
      $.language_injection,
      $.see_reference,
    ),

    class_annotation: $ => seq(
      '@class',
      $.identifier,
      optional(seq(':', $.type)),
      optional(choice($.class_at_comment, $.comment)),
    ),

    type_annotation: $ => seq(
      '@type',
      commaSep1(prec.right($.type)),
      optional(choice($.at_comment, $.comment)),
    ),

    param_annotation: $ => seq(
      '@param',
      choice($.identifier, '...'),
      optional('?'),
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    alias_annotation: $ => seq(
      '@alias',
      $.identifier,
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    return_annotation: $ => seq(
      '@return',
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    field_annotation: $ => seq(
      '@field',
      optional($.qualifier),
      choice($.identifier, $.positional_field),
      optional('?'),
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    qualifier_annotation: _ => choice('@public', '@protected', '@private'),

    generic_annotation: $ => seq(
      '@generic',
      $.identifier,
      optional(seq(':', $.identifier)),
      optional(seq(',', $.identifier, optional(seq(':', $.identifier)))),
      optional($.comment),
    ),

    vararg_annotation: $ => seq('@vararg', $.type, optional($.comment)),

    diagnostic_annotation: $ => seq(
      '@diagnostic',
      $.diagnostic_identifier,
      optional(seq(':', $.diagnostic_identifier)),
    ),

    deprecated_annotation: $ => seq('@deprecated', optional(seq(optional(':'), $.comment))),

    cast_annotation: $ => seq('@cast', $.type, $.type, optional($.comment)),

    async_annotation: $ => seq('@async', optional($.comment)),

    overload_annotation: $ => seq('@overload', $.function_type, optional($.comment)),

    enum_annotation: $ => seq('@enum', $.identifier, optional($.comment)),

    language_injection: $ => seq('@language', $.identifier, optional($.comment)),

    see_reference: $ => seq('@see', $.type, optional($.comment)),

    qualifier: _ => choice('public', 'protected', 'private'),

    class_at_comment: $ => seq(
      '@',
      $.identifier,
      optional(seq('extends', $.identifier)),
      optional($.comment),
    ),

    at_comment: $ => seq('@', $.identifier, optional($.comment)),

    comment: _ => token(prec(-1, /[^\r\n]+/)),

    type: $ => prec.right(choice(
      $.builtin_type,
      $.identifier,
      $.array_type,
      $.table_type,
      $.table_literal_type,
      $.union_type,
      $.parenthesized_type,
      $.function_type,
      $.member_type,
      $.optional_type,
      $.literal_type,
    )),

    array_type: $ => choice(
      seq($.type, '[', token.immediate(']')),
    ),

    table_type: $ => seq(
      'table',
      '<',
      field('key', $.type),
      optional(seq(',', field('value', $.type))),
      '>',
    ),

    table_literal_type: $ => seq(
      '{',
      commaSep(seq(
        field(
          'field',
          choice(
            seq($.identifier),
            seq('[', choice($.type, $.number), ']'),
          ),
        ),
        optional('?'),
        ':',
        $.type,
      )),
      '}',
    ),

    union_type: $ => prec.right(seq($.type, '|', $.type)),

    parenthesized_type: $ => seq('(', $.type, ')'),

    function_type: $ => prec.right(seq(
      choice('fun', 'function'),
      '(',
      choice(commaSep($.parameter), '...', commaSep($.type), seq('self', optional('?'))),
      ')',
      optional(seq(':', commaSep1(prec.right($.type)))),
    )),

    parameter: $ => seq(
      choice(
        seq(choice($.identifier, 'self'), optional('?')),
        '...',
      ),
      ':',
      $.type,
    ),

    member_type: $ => seq($.type, choice('#', '.'), $.identifier),

    optional_type: $ => seq($.type, '?'),

    literal_type: _ => seq('"', /[^"]*/, '"'),

    builtin_type: _ => prec.right(choice(
      'any',
      'boolean',
      'function',
      'CFunction',
      'nil',
      'number',
      'string',
      'table',
      'userdata',
      'void',
    )),

    number: _ => /\d+/,

    positional_field: $ => seq('[', $.number, ']'),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    diagnostic_identifier: _ => /[a-zA-Z_][a-zA-Z0-9_-]*/,
  },
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
