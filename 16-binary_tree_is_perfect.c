#include <stdlib.h>
#include <stdbool.h>
#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);
bool is_perfect_helper(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = binary_tree_depth(tree);

	return (is_perfect_helper(tree, depth, 0));
}

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

/**
 * is_perfect_helper - Perfection check helper.
 * @tree: Pointer to the node to measure the depth,
 * @depth: Depth of the node in the binary tree,
 * @level: Level of the node in the binary tree.
 *
 * Return: ###.
 */
bool is_perfect_helper(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_helper(tree->left, depth, level + 1) &&
			is_perfect_helper(tree->right, depth, level + 1));
}
