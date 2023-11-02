#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checking if a node is a leaf
 * @node: pointer to the node
 *
 * Return: 1 if node else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->right || node->left ? 0 : 1));
}
