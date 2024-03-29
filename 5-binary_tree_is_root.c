#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: ptr to the node to check.
 *
 * Return: 1 if the node is a root, 1 Otherwise.
 *         If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
/* If node is NULL, return 0. */
return (0);
}
return (node->parent == NULL);
}
