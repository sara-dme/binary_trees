#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on faillure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	node->n = value;

	if (node->right)
		node->right->parent = node;
	return (node);
}
