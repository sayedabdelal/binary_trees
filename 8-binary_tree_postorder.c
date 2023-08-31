#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree.
 * @tree: root the tree to traverse.
 * @func: a func that will be full on the data of each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
