#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 * @node: pointer to the node to find the uncle
 * Return: pointer to uncle of node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *papa, *godfada;

	if (!node)
		return (NULL);

	papa = node->parent;
	if (!papa)
		return (NULL);

	godfada = papa->parent;
	if (!godfada)
		return (NULL);

	if (godfada->left == papa)
		return (godfada->right);
	else
		return (godfada->left);
}
