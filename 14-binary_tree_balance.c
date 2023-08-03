#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance
 * factor
 * Return: 0 if tree is NULL, Otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
	{
		return (0);
	}

	left_h = binary_tree_hgt(tree->left);
	right_h = binary_tree_hgt(tree->right);
	return (left_h - right_h);
}

/**
 * binary_tree_hgt - Counts the height of binary tree
 * @tree: Pointer to the root node to get height from
 * Return: The height of the tree
 */
size_t binary_tree_hgt(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
	{
		return (0);
	}
	left_h += (tree) ? 1 + binary_tree_hgt(tree->left) : 0;
	right_h += (tree) ? 1 + binary_tree_hgt(tree->right) : 0;
	return ((right_h > left_h) ? right_h : left_h);
}
