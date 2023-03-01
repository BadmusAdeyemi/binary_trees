#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth
 * @node: pointer to the node to measure the depth
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t counter;

	counter = 0;
	if (node)
	{
		while (node->parent)
		{
			counter++;
			node = node->parent;
		}
	}
	return (counter);
}
