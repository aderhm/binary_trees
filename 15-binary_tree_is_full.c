#include <stdlib.h>
#include "binary_trees.h"

int is_full_helper(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_full_helper(tree));

}

/**
 * is_full_helper - Fullness check helper.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not full,
 *         1 otherwise.
 */
int is_full_helper(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right) ||
				!is_full_helper(tree->left) || !is_full_helper(tree->right))
			return (0);
	}
	return (1);
}
