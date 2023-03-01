#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->parent = new;
	}
	else
	{
		parent->right = new;
	}

	return (new);
}
