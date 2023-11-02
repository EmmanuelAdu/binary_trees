#include "binary_trees.h"

/**
 * binary_tree_postorder - goes throgh binary tree using post-order traversal
 * @tree: pointer to the binary tree
 * @func: pointer to a function to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
