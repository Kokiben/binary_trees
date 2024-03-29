#include "binary_trees.h"

/**
 * binary_tree_postorder - processes a binary tree using post-order traversal.
 * @tree: ptr to the root node of the tree to processes.
 * @func: ptr to a function to call for each node.
 *        the value in the node must be passed as a parameter to this function.
 *        if tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
/* if tree or func is NULL, do nothing. */
}
/* traverses left subtree */
binary_tree_postorder(tree->left, func);
/* traverses right subtree */
binary_tree_postorder(tree->right, func);
/* call the function for the current node */
func(tree->n);
}
