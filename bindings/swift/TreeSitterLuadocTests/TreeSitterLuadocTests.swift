import XCTest
import SwiftTreeSitter
import TreeSitterLuadoc

final class TreeSitterLuadocTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_luadoc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Luadoc grammar")
    }
}
