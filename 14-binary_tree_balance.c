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
size_t Left_Heigh = 0, Right_Heigh = 0;

if (tree == NULL)
return (0);/* If tree is NULL, returns 0. */

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
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: ptr to the root node of the tree to measure.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0); /* If tree is NULL, returns 0. */
}
/* compute the height of the left and right subtrees */
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
