#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: pointer to the parent node
 * @value: value stored in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	newnode->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = newnode;

	parent->right = newnode;

	return (newnode);
}
