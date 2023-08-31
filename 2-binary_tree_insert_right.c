#include "binary_trees.h"

/**
 * binary_tree_insert_right - puts a node as the right-child of another node
 * @parent: parent of node
 * @value: int value of node
 * Return: pointer to the new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_binery_nde;

	if (parent == NULL)
		return (NULL);

	n_binery_nde = binary_tree_node(parent, value);
	if (n_binery_nde == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		n_binery_nde->right = parent->right;
		parent->right->parent = n_binery_nde;
	}
	parent->right = n_binery_nde;

	return (n_binery_nde);
}
