#include "binary_trees.h"

/**
 * check_full - recursively traverse through tree
 * @tree: pointer to the root node of tree
 * Return: 1 if full, 0 if not
 */

int check_full(const binary_tree_t *tree)
{
	int left, right;

	left = 0;
	right = 0;
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right))
			return (0);
		left = check_full(tree->left);
		right = check_full(tree->right);
		if (left == 0 || right == 0)
			return (0);
		else
			return (1);
	}
	return (1);
}

/**
 * binary_tree_is_full - is tree full
 * @tree: pointer to tree
 * Return: 1 if full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_full(tree));
}
