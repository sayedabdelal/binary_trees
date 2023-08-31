#include "binary_trees.h"

/**
 * binary_tree_node - build a binary tree node.
 * @parent: A pointer to the parent of the node.
 * @value: The value of node.
 *
 * Return: If an error occurs - NULL.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_binery_nde;

	n_binery_nde = malloc(sizeof(binary_tree_t));

	if (n_binery_nde == NULL)
		return (NULL);
	n_binery_nde->n = value;
	n_binery_nde->parent = parent;
	n_binery_nde->left = NULL;
	n_binery_nde->right = NULL;

	return (n_binery_nde);
}
