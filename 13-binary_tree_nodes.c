#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Returns the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree to count the number
 * of nodes
 * Return: 0 if tree is NULL, Otherwise number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	num += binary_tree_nodes(tree->left);
	num += binary_tree_nodes(tree->right);
	num += (tree->right || tree->left) ? 1 : 0;
	return (num);
}
