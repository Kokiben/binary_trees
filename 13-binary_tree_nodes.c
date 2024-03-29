#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in a binary tree.
 * @tree: ptr to the root node of the tree to count nodes.
 *
 * Return: The number of nodes with at least one child in the binary tree.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0); /* If tree is NULL, returns 0. */

if (tree->left != NULL || tree->right != NULL)

/* Return 1 + the count of nodes in the left and right subtrees */
return ((1) + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
/* Return count the count of nodes in the left and right subtrees */
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
