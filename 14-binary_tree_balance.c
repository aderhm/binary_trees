#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measure the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left_height > right_height ? left_height : right_height));
}
