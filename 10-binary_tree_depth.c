#include "binary_trees.h"

/**
 * binary_tree_depth - processes depth of a node in a binary tree.
 * @tree: ptr to node being processes the depth.
 *
 * Return: The depth of the node tree.
 *         If tree is NULL, returns 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t dept_node = 0;

if (tree == NULL)
{
/* If tree is NULL, returns 0. */
return (0);
}
/* traverse up tree to the root, counting the number of steps*/
while (tree->parent != NULL)
{
dept_node++;
tree = tree->parent;
}
return (dept_node);
}
