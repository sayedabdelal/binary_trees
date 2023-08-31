#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node.
 * @parent: A pointer to the node.
 * @value: The value to store.
 *
 * Return: a pointer to the n_binery_nde node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_binery_nde;

	if (parent == NULL)
		return (NULL);

	n_binery_nde = binary_tree_node(parent, value);
	if (n_binery_nde == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		n_binery_nde->left = parent->left;
		parent->left->parent = n_binery_nde;
	}
	parent->left = n_binery_nde;

	return (n_binery_nde);
}
