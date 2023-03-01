#include "binary_trees.h"

/**
 * bt_recursive - recursively traverse through tree
 * @tree: tree
 * @counter: counter to track nodes of tree
 * Return: counter of leaves
 */

size_t bt_recursive(const binary_tree_t *tree, size_t counter)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			counter++;
		counter = bt_recursive(tree->left, counter);
		counter = bt_recursive(tree->right, counter);
		return (counter);
	}
	return (counter);
}

/**
 * binary_tree_leaves - measures number of leaves of binary tree
 * @tree: pointer to the tree to measure leaves
 * Return: number of leaves on bt
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter;

	counter = 0;

	if (!tree)
		return (0);
