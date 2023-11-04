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
 * _traverselevel - This traverses the level and execute the
 * function on each node
 * @tree: pointer to the root node
 * @level: current level
 * @func: pointer function to execute on each node
 *
 * Return: nothing
 */
void _traverselevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		_traverselevel(tree->left, level - 1, func);
		_traverselevel(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - This traverses a binary tree using
 * level-order traversal
 * @tree: pointer to the root of the node
 * @func: function pointer to call on each node
 *
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, x;

	if (!tree || !func)
		return;
	h = _getheight(tree);

	for (x = 1; x <= h; x++)
		_traverselevel(tree, x, func);
}
