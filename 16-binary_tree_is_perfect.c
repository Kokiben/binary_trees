#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t  Left_Heigh = 0, Right_Heigh = 0;

if (tree == NULL)
return (0); /* If tree is NULL, returns 0. */

if (tree->left)
/* Recursively compute the height of the left subtree */
Left_Heigh = 1 + binary_tree_height(tree->left);
if (tree->right)
/* Recursively compute the height of the right subtree */
Right_Heigh = 1 + binary_tree_height(tree->right);
/* Return the max of the left and right subtree heights */
return ((Left_Heigh > Right_Heigh) ? Left_Heigh : Right_Heigh);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int child = 0;

if (tree == NULL)
{
return (0);
/* If tree is NULL, returns 0. */
}
else
{
child = binary_tree_height(tree);
if (child != 0)
{
return (1);
}
return (0);
}
}
