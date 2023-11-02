#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to the tree
 * Return: measured height else 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt_height = 0; /* lt_height - left height */
	size_t rt_height = 0; /* rt_height - right height */

	if (!tree)
		return (0);

	lt_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rt_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (lt_height > rt_height ? lt_height : rt_height);
}
