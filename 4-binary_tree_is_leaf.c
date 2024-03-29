#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf.
 * @node: ptr to node to check.
 *
 * Return: 1 if the node is a leaf,Otherwise.
 *        If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
/* If node is NULL, return 0. */
return (0);
}
/* check if a node is a has no children */
return ( node->left == NULL && node->right == NULL);

}
