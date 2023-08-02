#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the given node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is root, Otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}