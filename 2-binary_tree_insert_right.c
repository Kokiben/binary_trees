#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If an error arises- NULL.
 *         If successful - a pointer to the newly created node.
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nw_node;

if (parent == NULL)
return (NULL);

nw_node = binary_tree_node(parent, value);
if (nw_node == NULL)
return (NULL);

if (parent->right != NULL)
{
nw_node->right = parent->right;
parent->right->parent = nw_node;
}
parent->right = nw_node;

return (nw_node);
}
