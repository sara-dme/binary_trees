#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 or the height
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
    return (left > right ? left : right )
}