#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another
 * node
 * @parent: The pointer to the node to insert the right-child
 * @value: The vallue to store in the new node
 * Return: Pointer to the new created node, Otherwise
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;

	return (node);
}
