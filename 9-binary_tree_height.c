#include "binary_trees.h"

/**
 * binary_tree_height - This measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree or  0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	l_height = r_height = 0;

	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (1 + (l_height > r_height ? l_height : r_height));
}
