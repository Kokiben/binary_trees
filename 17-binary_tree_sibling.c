#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/* Check if node or its parent is NULL */
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
/* Check if node is the left child of its parent */
if (node->parent->left == node)
{
return (node->parent->right);
}
/* Check if node is the right child of its parent */
if (node->parent->right == node)
{
return (node->parent->left);
}
/* Node is not a child of its parent */
return (NULL);
}
