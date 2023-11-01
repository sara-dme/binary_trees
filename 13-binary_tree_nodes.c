#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0 or size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (right + left + 1);
}


/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (1);
	return (left + right);
}
