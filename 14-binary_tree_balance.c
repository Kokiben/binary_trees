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

size_t Left_Heigh, Right_High;
if (tree == NULL)
{
return (0); /* If tree is NULL, returns 0. */
}
/* Recursively compute the height of the left subtree */
Left_Heigh = binary_tree_height(tree->left);
/* Recursively compute the height of the right subtree */
Right_High = binary_tree_height(tree->right);
/* Return the max of the left and right subtree heights */
return ((Left_Heigh > Right_High ? Left_Heigh : Right_High)+ 1);

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
size_t Left_Heigh = binary_tree_height(tree->left);
size_t Right_High = binary_tree_height(tree->right);
/* return the balance factor (diffrence of left and right subtrees */
return (Left_Heigh - Right_High);

}
