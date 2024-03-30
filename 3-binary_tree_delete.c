#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: ptr to root node of tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
/* Delete left subtree */
if (tree->left != NULL)
binary_tree_delete(tree->left);
/* Delete right subtree */
if (tree->right != NULL)
binary_tree_delete(tree->right);
/* Delete current node */
free(tree);
}
}
