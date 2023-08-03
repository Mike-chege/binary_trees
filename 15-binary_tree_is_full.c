#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, Otherwise 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int not_full = 0;

	if (!tree)
	{
		return (0);
	}
	not_full = binary_tree_check_full(tree);
	return ((not_full) ? 0 : 1);
}

/**
 * binary_tree_check_full - Checks if binary tree if full
 * @tree: Pointer to the root node of the binary tree to check
 * Return: The number of non full nodes
 */
int binary_tree_check_full(const binary_tree_t *tree)
{
	size_t not_full = 0;

	if (!tree)
	{
		return (0);
	}
	if ((tree->right && !tree->left) || (tree->left && !tree->right))
	{
		return (0);
	}
	not_full += binary_tree_check_full(tree->left);
	not_full += binary_tree_check_full(tree->right);
	return (not_full);
}
