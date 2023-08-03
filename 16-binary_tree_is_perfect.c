#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_hgt(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_check_full(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, Otherwise 1 if it is perfect
 */
{
	char is_balanced = (binary_tree_balance(tree) == 0) ? 1 : 0;
	int is_full = binary_tree_is_full(tree);

	if (!tree)
		return (0);
	return (is_balanced && is_full);
}

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: Pointer to the root node to check if tree is full
 * Return: 0 if tree is NULL, Otherwise 1 if tree is full
 */
{
	int non_full_nodes = 0;

	if (!tree)
		return (0);
	non_full_nodes = binary_tree_not_full(tree);
	return ((non_full_nodes) ? 0 : 1);
}

/**
 * binary_tree_check_full - Checks the non full nodes
 * @tree: Pointer to the root node of binary tree to check
 * Return: The number of nodes that are not full
 */
{
	size_t non_full_nodes = 0;

	if (!tree)
		return (0);
	/* base case, found node that's not full */
	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (1);
	non_full_nodes += binary_tree_not_full(tree->left);
	non_full_nodes += binary_tree_not_full(tree->right);
	return (non_full_nodes);
}

/**
 * binary_tree_balance - Returns the balance factor of the tree
 * @tree: Pointer to the root node to calculate balance factor
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	height_l = binary_tree_h(tree->left);
	height_r = binary_tree_h(tree->right);
	return (height_l - height_r);
}

/**
 * binary_tree_hgt - Counts the height of binary tree
 * @tree: Pointer to the root node to get height from
 * Return: The height of the tree
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (!tree)
		return (0);
	l_height += (tree) ? 1 + binary_tree_h(tree->left) : 0;
	r_height += (tree) ? 1 + binary_tree_h(tree->right) : 0;
	return ((r_height > l_height) ? r_height : l_height);
}
