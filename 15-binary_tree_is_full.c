#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: ptr to root node of tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 *         If tree is NULL, returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/* If tree is NULL, return 0 */
if (tree == NULL)
{
return (0);
}

/* If the current node is a leaf (has no children) */
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

/* If current node has left and right child, recursively check them */
if (tree->left && tree->right)
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

/* If the current node has only one child, tree is not full */
return (0);
}
