#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - check if tree is perfectoooo
 * @tree: pointer to tree
 * Return: 1 if g, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full, balance;

	if (!tree)
		return (0);
	full = 0;
	balance = 0;

	full = binary_tree_is_full(tree);
	balance = binary_tree_balance(tree);

	if (full == 1 && balance == 0)
		return (1);
	else
		return (0);
}
