#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using
 * pre-order traversal
 * @tree: Pointer to the root node of the tree to treverse
 * @func: Pointer to the function to call for each node, the
 * value in the node must be passed as a parameter to its function
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (!func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
