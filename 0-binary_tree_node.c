#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node in a binary tree
 * @parent: parent of the new node
 * @value: value stored in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;

	return (newnode);
}
