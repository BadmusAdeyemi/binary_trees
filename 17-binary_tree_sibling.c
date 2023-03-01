#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: pointer to node
 * Return: pointer to sibling of node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *papa;

	if (!node)
		return (NULL);

	papa = node;
	papa = papa->parent;
	if (!papa)
		return (NULL);
	if (papa->left == node)
		return (papa->right);
	else
		return (papa->left);
}
