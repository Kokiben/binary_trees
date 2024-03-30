#include "binary_trees.h"

/**
 * binary_trees_ancestor - function to finds lowest common ancestor of 2 nodes
 * @first: ptr to first node.
 * @second: ptr to second node.
 *
 * Return: return a pointer to lowest common ancestor node of 2 given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
const binary_tree_t *ancstr = first;

/* Traverse upwards from the first node to the root */
while (ancstr)
{
const binary_tree_t *tmp = second;

/* Check if the current ancestor node is an ancestor of the second nod */
while (tmp)
{
if (tmp == ancstr)
return ((binary_tree_t *)ancstr);
tmp = tmp->parent;
}

/* Move to the parent of the current ancestor node */
ancstr = ancstr->parent;
}

/* No common ancestor found */
return (NULL);
}
