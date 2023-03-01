#include "binary_trees.h"

/**
 * height_recursive - recursively traverse through tree
 * @tree: pointer to the root node of tree
 * @counter: counter
 * Return: counter of height
 */

size_t height_recursive(const binary_tree_t *tree, size_t counter)
{
	size_t counter_left, counter_right;

	counter_left = 0;
	counter_right = 0;

	if (tree)
	{
		counter++;
		counter_left = height_recursive(tree->left, counter);
		counter_right = height_recursive(tree->right, counter);
		if (counter_left > counter_right)
			return (counter_left);
		else
			return (counter_right);
	}
	return (counter);
}

/**
 * binary_tree_height - measure height
 * @tree: pointer to the root node of the tree to traverse
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;

	counter = -1;
	if (!tree)
		return (0);

	return (height_recursive(tree, counter));
}
