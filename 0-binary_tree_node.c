#include "binary_trees.h"

/**
 * binary_tree_node - function to create a new node
 * @parent: pointer to the parent node to create
 * @value: the value to insert into the created  node
 * Return: NULL on failure else a pointer to the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node; /* creating a new node */

	/**
	 * Allocating and typecasting pointer to memory
	 */
	new_node = (binary_tree_t *)(malloc(sizeof(binary_tree_t)));

	if (new_node == NULL)
		return (NULL);

	/**
	 * ASSIGN VALUES TO CREATED NODE
	 */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
