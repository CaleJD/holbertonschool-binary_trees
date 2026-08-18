#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using postorder traversal
 * @tree: Pointer to the root
 * @func: Function for processing the tree inorder
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
