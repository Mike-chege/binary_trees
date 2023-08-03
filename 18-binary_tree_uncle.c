#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of binary tree node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, Otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
