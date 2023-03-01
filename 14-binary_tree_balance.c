#include "binary_trees.h"

/**
 * find_height - recursively traverse through tree
 * @tree: pointer to the root node of tree
 * @counter: counter
 * Return: counter of height
 */

int find_height(const binary_tree_t *tree, size_t counter)
{
	int counter_left, counter_right;

	counter_left = 0;
	counter_right = 0;

	if (tree)
	{
		counter++;
		counter_left = find_height(tree->left, counter);
		counter_right = find_height(tree->right, counter);
		if (counter_left > counter_right)
			return (counter_left);
		else
			return (counter_right);
	}
	return (counter);
}

/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: pointer to tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	height_left = 0;
	height_right = 0;

	if (!tree)
		return (0);

	height_left = find_height(tree->left, height_left);
	height_right = find_height(tree->right, height_right);

	return (height_left - height_right);
}
