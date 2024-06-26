#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in a binary tree.
 * @tree: ptr to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the tree.
 *         If tree is NULL, returns 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

if (tree == NULL)
{
return (0); /* If tree is NULL, returns 0. */
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

/* Recursively count the number of leaves in the left and right subtrees */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
