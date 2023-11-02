#include "binary_trees.h"

/**
 * _getheight - This recursively calculates the height
 * @root: pointer to the root node
 *
 * Return: the height of the tree
 */
size_t _getheight(const binary_tree_t *root)
{
	size_t l_height, l_height;

	if (!root)
		return (0);
	l_height = r_height = 0;

	l_height = _getheight(root->left);
	r_height = -getheight(root->right);

	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);
}

/**
 * _treeheight - This measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the height or 0 if NULL
 */
size_t _treeheight(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (_getheight(tree) - 1);
}

/**
 * binary_tree_is_perfect - This checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if the tree is perfect
 *         0 if otherwise
 *         0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (_treeheight(tree->left) == _treeheight(tree->right))
	{
		if (!tree->left)
			return (1);

		if (!(tree->left)->left && !(tree->left)->right)
			return (1);

		if (tree->left && tree->right)
		{
			l = binary_tree_is_perfect(tree->left);
			r = binary_tree_is_perfect(tree->right);
			return (l && r);
		}
	}
	return (0);
}
