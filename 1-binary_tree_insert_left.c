#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * of another node
 * @parent: The pointer to the node to insert the left child
 * @value: The value to store in the new node
 * Return: A pointer to the created node, OR NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}