#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: ptr to the root node of the tree to measure.
 *
 * Return: The size of the binary tree.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

if (tree == NULL)
{
return (0); /* If tree is NULL, returns 0. */
}
/* Return count the size of the left and right subtree heights */
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
