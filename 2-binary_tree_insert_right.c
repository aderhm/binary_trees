#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of
 * another node.
 * @parent: A pointer to the node to insert the left-child in,
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
