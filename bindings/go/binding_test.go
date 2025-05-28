package tree_sitter_luadoc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_luadoc "github.com/tree-sitter-grammars/tree-sitter-luadoc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_luadoc.Language())
	if language == nil {
		t.Errorf("Error loading Luadoc grammar")
	}
}
