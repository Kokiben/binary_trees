#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle.
 *
 * Return: return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Check if node's parent or  NULL */
if (node == NULL ||
node->parent == NULL || node->parent->parent == NULL)
/* Check if node is NULL */
return (NULL);
if (node->parent->parent->left == node->parent)
/* Return the right child (uncle) */
return (node->parent->parent->right);
else
/* Return the left child (uncle) */
return (node->parent->parent->left);
}
