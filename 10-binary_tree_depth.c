#include "binary_trees.h"

/**
 * binary_tree_depth - Counts the depth of a node to the root
 * @tree: Pointer to the node
 *
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
