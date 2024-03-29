#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses  a binary tree using in-order traversal.
 * @tree: ptr to the root node of the tree to traverse.
 * @func: ptr to a function to call for each node.
 *        the value in the node must be passed as a parameter to this function.
 *        if tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
/* if tree or func is NULL, do nothing. */
}
/* traverses left subtree */
binary_tree_inorder(tree->left, func);
/* call the function for the current node */
func(tree->n);
/* traverses right subtree */
binary_tree_inorder(tree->right, func);
}
