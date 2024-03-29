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

size_t height = 0;
const binary_tree_t *current = tree;
stack_t *stack = NULL;

if (tree == NULL)
return (0);

while (current != NULL || !stack_empty(stack))
{
while (current != NULL)
{
stack_push(&stack, current);
current = current->left;
height++;
}

current = stack_pop(&stack);
current = current->right;
}

return (height - 1); /* Subtract 1 to get the height of the tree */
}
