#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if ((tree->left && tree->right))
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}

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
