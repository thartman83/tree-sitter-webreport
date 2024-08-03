package tree_sitter_webreport_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-webreport"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_webreport.Language())
	if language == nil {
		t.Errorf("Error loading Webreport grammar")
	}
}
