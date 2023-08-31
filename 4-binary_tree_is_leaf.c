#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a in a binary tree.
 * @node: A pointer to the node.
 *
 * Return: If node is a leaf - 1. or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
