#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree
 * @parent: The pointer to the parent node
 * @value: Value of the new created node
 * Return: Pointer to the new node, otherwise NULL
 * on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}

