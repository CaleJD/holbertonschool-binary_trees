#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds a node's Uncle
 * @node: Node to find uncle of
 *
 * Return: Pointer to Uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->right
		&& node->parent->parent->left != NULL)
		return (node->parent->parent->left);
	if (node->parent == node->parent->parent->left
		&& node->parent->parent->right != NULL)
		return (node->parent->parent->right);
	return (NULL);
}
