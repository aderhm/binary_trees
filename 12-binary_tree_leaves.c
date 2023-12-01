#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}
