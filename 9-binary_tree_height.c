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
if (tree == NULL)
return (0);

return (1 + ((binary_tree_height(tree->left) > binary_tree_height(tree->right))
? binary_tree_height(tree->left) : binary_tree_height(tree->right)));
}
