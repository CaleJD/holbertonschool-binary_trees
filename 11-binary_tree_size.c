#include "binary_trees.h"

/**
 * binary_tree_size - Counts the size of a tree
 * @tree: Pointer to tree
 *
 * Return: Size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size1;
	size_t size2;
	size_t size_all;

	if (tree == NULL)
		return (0);
	size1 = binary_tree_size(tree->left);
	size2 = binary_tree_size(tree->right);
	size_all = (size1 + size2);
	return (size_all);

}
