#include "binary_trees.h"

/**
 * binary_tree_is_full - This checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if the tree is full
 *		0 if not full
 *		0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		return (l && r);
	}

	return (0);
}
