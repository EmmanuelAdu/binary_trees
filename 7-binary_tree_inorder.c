#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through tree using in-order traversal
 * @tree: pointer to the tree
 * @func: function pointer to a call to each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
