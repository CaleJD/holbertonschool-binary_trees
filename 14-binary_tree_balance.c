#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the difference in balance
 * @tree: Pointer to the tree
 *
 * Return: Differnce in balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int size1;
	int size2;
	int size_dif;

	if (tree == NULL)
		return (0);
	size1 = binary_tree_balance(tree->left);
	size2 = binary_tree_balance(tree->right);
	size_dif = (size1 - size2);
	return (size_dif);
}
