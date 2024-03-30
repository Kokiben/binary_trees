#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle.
 *
 * Return: return a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Check if node is NULL */
if (node == NULL)
{
return (NULL);
}
/* Check if node's parent or Gradparent is NULL */
if (node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}

binary_tree_t *Gradparent = node->parent->parent;
/* Check if node's parent is the left child of the Gradparent */
if (Gradparent->left == node->parent)
{
/* Return the right child of the Gradparent (uncle) */
return (Gradparent->right);
}
/* Check if node's parent is the right child of the Gradparent */
if (Gradparent->right == node->parent)
{
/* Return the left child of the Gradparent (uncle)*/
return (Gradparent->left);
}

/* Node's parent is not a child of its Gradparent */
return (NULL);
}
