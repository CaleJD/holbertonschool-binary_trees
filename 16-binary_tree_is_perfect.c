#include "binary_trees.h"

/**
 * binary_tree_height_helper - measures the height of a subtree
 * @tree: pointer to the root node
 *
 * Return: height of the subtree
 */
static int binary_tree_height_helper(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height_helper(tree->left);
	right_height = binary_tree_height_helper(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if tree is perfect
 * @tree: Pointer to tree
 *
 *Return: 1 if true, 0 if false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height_helper(tree->left) !=
	binary_tree_height_helper(tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
}
