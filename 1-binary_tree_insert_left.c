#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node as the leftmost child of
 *                           of another node within a binary tree.
 * @parent: ptr to the node where  the left child will be added.
 * @value: value to be stored in the new node.
 *
 * Return: If an error arises - NULL.
 *         If successful - a pointer to the newly created node.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nw_node;

if (parent == NULL)
return (NULL);

nw_node = binary_tree_node(parent, value);
if (nw_node == NULL)
return (NULL);

if (parent->left != NULL)
{
nw_node->left = parent->left;
parent->left->parent = nw_node;
}
parent->left = nw_node;

return (nw_node);
}
