#include "binary_trees.h"

/**
 * binary_tree_ancestor - find lowest common ancestor
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to common ancestor
 *
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *temp, *temp2;

	temp = first->parent;
	while (temp)
	{
		if (temp == second)
			return (temp);
		temp = temp->parent;
	}
	temp = second->parent;
	while (temp)
	{
		if (temp == first)
			return (temp);
		temp = temp->parent;
	}
	temp = first->parent;
	temp2 = second->parent;

	while (temp)
	{
		while (temp2)
		{
			if (temp == temp2)
				return (temp);
			temp2 = temp2->parent;
		}
		temp = temp->parent;
	}
	return (NULL);
}
