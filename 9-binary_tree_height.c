#include "binary_trees.h"

/**
 * binary_tree_height - Determines the height of a binary tree.
 * @tree: ptr to the root node of the tree to determine the height.
 *
 * Return: The height of the binary tree.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t l = 0, r = 0;

if (tree == NULL)
return (0);

if (tree->left)
l = 1 + binary_tree_height(tree->left);
if (tree->right)
r = 1 + binary_tree_height(tree->right);
return ((l > r) ? l : r);
}
