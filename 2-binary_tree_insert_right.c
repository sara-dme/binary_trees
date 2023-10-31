#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on faillure or if the parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node = NULL;

    if (parent == NULL)
        return (NULL);
    node = malloc(sizeof(binary_tree_t));
    node->parent = parent;
    node->left = NULL; 
    node->right = NULL;
    node->n = value;

    if (parent->right == NULL)
        parent->right = node;
    else
    {
        node->right = parent->right;
        parent->right = node;
        node->right->parent = node;
    }
    return (node);
}