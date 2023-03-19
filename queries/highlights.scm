; Keywords

[
  "@class"
  "@type"
  "@param"
  "@alias"
  "@field"
  "@generic"
  "@vararg"
  "@language"
  "@see"
  "extends"
] @keyword

(language_injection "@language" (identifier) @keyword)

[
  "fun"
] @keyword.function

[
  "@return"
] @keyword.return

; Qualifiers

[
  "public"
  "protected"
  "private"
] @type.qualifier

; Variables

(identifier) @variable

; Parameters

(parameter (identifier) @parameter)

; Types

"table" @type.builtin

(builtin_type) @type.builtin

(type (identifier) @type)

; Operators

[
  "|"
] @operator

; Literals

(literal_type) @string

; Punctuation

[ "[" "]" ] @punctuation.bracket

[ "(" ")" ] @punctuation.bracket

[ "<" ">" ] @punctuation.bracket

[
  ","
  "#"
  ":"
] @punctuation.delimiter

; Comments

(comment) @comment @spell

(at_comment 
  "@" @punctuation.special 
  (identifier) @type 
  (_) @comment)

(class_at_comment 
  "@" @punctuation.special 
  (identifier) @type 
  ("extends"? (identifier)? @type)
  (_) @comment)
