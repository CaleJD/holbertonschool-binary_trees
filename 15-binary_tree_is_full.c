#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks is a tree is full
 * @tree: Pointer to the tree
 *
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return (1);
}
