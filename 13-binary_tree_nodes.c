#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of leaves in a tree
 * @tree: Pointer to tree
 *
 * Return: Number of nodes with a single child
 */
size_t binary_tree_nodes(const binary_tree_t *tree);
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	return (binary_tree_nodes(tree->right)
	 + binary_tree_nodes(tree->left));
}
