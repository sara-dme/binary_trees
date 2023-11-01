#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: 0 or int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = ((int)binary_tree_height(tree->left));
	r = ((int)binary_tree_height(tree->right));
	return (l - r);
}

/**
 * binary_tree_height - mesure height of a binary tree
 * @tree: pointer to the root
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	return (left > right ? left : right);
}
