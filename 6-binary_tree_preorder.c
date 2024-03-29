#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal.
 * @tree: ptr to the root node of the tree to traverse.
 * @func: ptr to a function to call for each node.
 *        the value in the node must be passed as a parameter to this function.
 *        if tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
{
return;
/* if tree or func is NULL, do nothing. */
}
/* call the function for the current node */
func(tree->n);
/* traverses left subtree */
binary_tree_preorder(tree->left, func);
/* traverses left subtree */
binary_tree_preorder(tree->right, func);
}
