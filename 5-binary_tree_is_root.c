#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a binary tree is a root
 * @node: pointer to the node
 *
 * Return: 1 if node is root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
