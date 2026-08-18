#include "binary_trees.h"

/**
 */
 int binary_tree_balance(const binary_tree_t *tree)
 {
	size_t size1;
	size_t size2;
	size_t size_dif;

	if (tree == NULL)
		return (0);
	size1 = binary_tree_balance(tree->left);
	size2 = binary_tree_balance(tree->right);
	size_dif = (size1 - size2);
	return (size_dif);
 }