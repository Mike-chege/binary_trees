#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL, Otherwise the sie of binary
 * tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t bin_size = 0;

	if (!tree)
		return (0);

	bin_size += binary_tree_size(tree->left);
	bin_size += binary_tree_size(tree->right);
	bin_size += 1;
	return (bin_size);
}
