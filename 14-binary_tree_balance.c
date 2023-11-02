#include "binary_trees.h"

/**
 * _getheight - This recursively calculates the height
 * @root: pointer to the root node
 *
 * Return: the height of the tree
 */
size_t _getheight(const binary_tree_t *root)
{
	size_t l_height, r_height;

	if (!root)
		return (0);
	l_height = r_height = 0;

	l_height = _getheight(root->left);
	r_height = _getheight(root->right);

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
 * binary_tree_balance - This measures the balance factor of a bianry tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = _treeheight(tree->left);
	r = _treeheight(tree->right);

	return (l - r);
}
