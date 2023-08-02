#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary
 * tree
 * @tree: Pointer to the node to measure depth
 * Return: 0 if tree is NULL, Otherwise depth size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size += (tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0;
	return (size);
}
