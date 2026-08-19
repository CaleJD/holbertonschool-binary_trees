#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling node
 * @node: Node to find sibling of
 *
 * Return: Pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left && node->parent->right != NULL)
		return (node->parent->right);
	if (node == node->parent->right && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
