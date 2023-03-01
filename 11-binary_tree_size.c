#include "binary_trees.h"

/**
 * bt_recursive - recursively traverse through tree
 * @tree: tree
 * @counter: counter to track nodes of tree
 * Return: tree
 */

size_t bt_recursive(const binary_tree_t *tree, size_t counter)
{
	if (tree)
	{
		counter++;
		counter = bt_recursive(tree->left, counter);
		counter = bt_recursive(tree->right, counter);
		return (counter);
	}
	return (counter);
}

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to the tree to measure size
 * Return: size of bt
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter;

	counter = 0;

	if (!tree)
		return (0);
	return (bt_recursive(tree, counter));
}
