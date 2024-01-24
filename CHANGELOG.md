# Changelog

## [1.1.0](https://github.com/amaanq/tree-sitter-luadoc/compare/v1.0.1...v1.1.0) (2024-01-24)


### Features

* add indexed fields ([c403280](https://github.com/amaanq/tree-sitter-luadoc/commit/c4032803e76e7919547cdc489a0645d1ce4aaa6b))
* continuations ([0c47f54](https://github.com/amaanq/tree-sitter-luadoc/commit/0c47f5440d29aa9b54c37483560ad023a263a5bf))
* custom types ([8eb0a5c](https://github.com/amaanq/tree-sitter-luadoc/commit/8eb0a5c6188c776166223d1356eefa756ac3bd20))
* support as annotations ([f5718f1](https://github.com/amaanq/tree-sitter-luadoc/commit/f5718f12dee173a37be0d2bdbf3c76dbbfe3067a))
* support link references ([87be810](https://github.com/amaanq/tree-sitter-luadoc/commit/87be8109e5f7298bfe79222020149f7fe40ac0d1))
* support named return types ([98ba223](https://github.com/amaanq/tree-sitter-luadoc/commit/98ba22342fd0b97bab54e6af16661f7da008dcb3))
* support numeric literal types ([990926b](https://github.com/amaanq/tree-sitter-luadoc/commit/990926b13488a4bc0fc0804fc0f8400b5b0a1fb4))
* support since annotations ([0bf534f](https://github.com/amaanq/tree-sitter-luadoc/commit/0bf534f9729cd76e2b34f4076ed1dbca19984fdc))
* support single quoted strings ([2e409fa](https://github.com/amaanq/tree-sitter-luadoc/commit/2e409faaae98b9093ed77c43e13a47d66d4f1526))
* support the `package` qualifier ([6afc93e](https://github.com/amaanq/tree-sitter-luadoc/commit/6afc93eb5ccb0a2c32094184006850d610061a23))
* tuple types ([56ad7c4](https://github.com/amaanq/tree-sitter-luadoc/commit/56ad7c4b3ed4f6fa0a5ed6cf2827c39720d84911))


### Bug Fixes

* add missing optional `(key)` to enum annotations ([734d55a](https://github.com/amaanq/tree-sitter-luadoc/commit/734d55afc76365a7e205a42903ad49825b676f88))
* add the optional `(exact)` modifier to class annotations ([0e211c4](https://github.com/amaanq/tree-sitter-luadoc/commit/0e211c44893ec3cc6bc611112a71564498299f2e))
* as annotations with array types ([60e71b3](https://github.com/amaanq/tree-sitter-luadoc/commit/60e71b3dd32b265040426f6e4840856ad68102aa))
* casts ([ad69306](https://github.com/amaanq/tree-sitter-luadoc/commit/ad6930614dfd269efe22b2830962c86736c10617))
* correctly recognize multiple inheritance for `[@class](https://github.com/class)` ([451cc56](https://github.com/amaanq/tree-sitter-luadoc/commit/451cc56b68414d090ba8c97d181af22054c18649))
* diagnostics require at least 1 diagnostic ([75c7556](https://github.com/amaanq/tree-sitter-luadoc/commit/75c755630181bca62372d2cc5f33bdde5522bd2d))
* generic annotation parents are types ([aa2156b](https://github.com/amaanq/tree-sitter-luadoc/commit/aa2156b21be1500352832876dc65c5a0eaf7a689))
* member types referenced with `#` should be immediate ([34d50de](https://github.com/amaanq/tree-sitter-luadoc/commit/34d50dede81e3f360c4934bc73b077576511dc8a))

## [1.0.1](https://github.com/amaanq/tree-sitter-luadoc/compare/v1.0.0...v1.0.1) (2023-06-18)


### Bug Fixes

* class name is a type, not identifier ([e819114](https://github.com/amaanq/tree-sitter-luadoc/commit/e81911491b590fbd3c3a4fd22548196b47391c0d))

## 1.0.0 (2023-05-13)


### Features

* add release action ([ef8dc31](https://github.com/amaanq/tree-sitter-luadoc/commit/ef8dc31764d9d9a79b32173b1e888a012dfd6078))
* add relevant new tests ([10c7b2f](https://github.com/amaanq/tree-sitter-luadoc/commit/10c7b2f88742e3c56cc165791c742f0cd51ee46e))
* allow multiple diagnostics, add missing lua_ls annotations ([11fcc82](https://github.com/amaanq/tree-sitter-luadoc/commit/11fcc82c19eb4bdf54daaf9d3e5d604c08d29096))
* extend the grammar to what's commonly used in nvim lua repos ([0e750e8](https://github.com/amaanq/tree-sitter-luadoc/commit/0e750e84c3ed20fa8782559894086f613c8abb90))
* Initial complete parser ([dc3604f](https://github.com/amaanq/tree-sitter-luadoc/commit/dc3604fbfef515ad29f961303732d9914fb86ccf))
* update queries accordingly ([b55c7f1](https://github.com/amaanq/tree-sitter-luadoc/commit/b55c7f14a3b86057481261998f2ac5e201ecfd27))
* update queries accordingly ([ae28906](https://github.com/amaanq/tree-sitter-luadoc/commit/ae28906932d20af4c921140713985ee9a409780c))
* v0.0.2 ([40a67ee](https://github.com/amaanq/tree-sitter-luadoc/commit/40a67ee798eb3c989fffde0277ff6de740ebaf34))
* v0.0.3 ([5c9572f](https://github.com/amaanq/tree-sitter-luadoc/commit/5c9572faf56d1fa0f7e0740c94de1c4f67c6af5e))
