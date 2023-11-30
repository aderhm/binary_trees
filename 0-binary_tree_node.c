#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Ceates a binary tree node.
 * @parent: A pointer to the parent node of the node to create,
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node,
 * or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
