#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Check if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[1000], *current;
	int flag, front, rear;

	if (!tree)
		return (0);

	front = -1;
	rear = -1;
	queue[++rear] = (binary_tree_t *)tree;
	flag = 0;

	while (front != rear)
	{
		current = queue[++front];

		if (!current->left)
			flag = 1;
		else
			queue[++rear] = current->left;

		if (!current->right)
			flag = 1;
		else
			queue[++rear] = current->right;

		if (flag)
			return (0);
	}

	return (1);
}
