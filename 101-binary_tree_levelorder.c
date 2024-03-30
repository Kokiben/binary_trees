#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - funct goes through a tree using level-order.
 * @tree: ptr to root node of tree.
 * @func: ptr to a function to call for each node.
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/* Queue to store nodes for level-order traversal */
const binary_tree_t **qee = malloc(sizeof(binary_tree_t *) * 1024);
if (qee == NULL)
return;

int frt = 0, rer = -1;
const binary_tree_t *crrt = NULL;

/* Enqueue the root node */
qee[++rer] = tree;

/* Traverse the tree level by level */
while (frt <= rer)
{
crrt = qee[frt++];

/* Call the function with the value of the current node */
func(crrt->n);

/* Enqueue left child if it exists */
if (crrt->left != NULL)
qee[++rer] = crrt->left;

/* Enqueue right child if it exists */
if (crrt->right != NULL)
qee[++rer] = crrt->right;
}

free(qee);
}
