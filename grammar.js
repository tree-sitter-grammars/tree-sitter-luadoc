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
      $.generic_annotation,
      $.vararg_annotation,
      $.language_injection,
      $.see_reference,
    ),

    class_annotation: $ => seq(
      '@class',
      $.identifier,
      optional(seq(':', $.identifier)),
      optional(choice($.class_at_comment, $.comment)),
    ),

    type_annotation: $ => seq(
      '@type',
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    param_annotation: $ => seq(
      '@param',
      $.identifier,
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
      $.identifier,
      $.type,
      optional(choice($.at_comment, $.comment)),
    ),

    generic_annotation: $ => seq(
      '@generic',
      $.identifier,
      optional(seq(':', $.identifier)),
      optional(seq(',', $.identifier, optional(seq(':', $.identifier)))),
      optional($.comment),
    ),

    vararg_annotation: $ => seq('@vararg', $.type, optional($.comment)),

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

    type: $ => choice(
      $.builtin_type,
      $.identifier,
      $.array_type,
      $.table_type,
      $.union_type,
      $.function_type,
      $.member_type,
      $.literal_type,
    ),

    array_type: $ => seq($.type, '[', token.immediate(']')),

    table_type: $ => seq('table', '<', field('key', $.type), ',', field('value', $.type), '>'),

    union_type: $ => prec.right(seq($.type, '|', $.type)),

    function_type: $ => prec.right(seq(
      'fun',
      '(',
      optional(seq($.parameter, repeat(seq(',', $.parameter)))),
      ')',
      ':',
      $.type,
    )),

    parameter: $ => seq($.identifier, ':', $.type),

    member_type: $ => seq($.type, '#', $.identifier),

    literal_type: _ => seq('"', /[^"]*/, '"'),

    builtin_type: _ => choice(
      'any',
      'boolean',
      'function',
      'CFunction',
      'nil',
      'number',
      'string',
      'userdata',
      'void',
    ),

    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
  },
});
