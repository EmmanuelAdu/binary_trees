#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a new node at left of parent
 * @parent: pointer to the parent node
 * @value: the value to insert to our created node
 *
 * Return: pointer to newly inserted node else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	return (new_node);
}
