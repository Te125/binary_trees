#include "binary_trees.h"

/**
 * binary_tree_nodes - This counts the nodes with at least a child
 * @tree: pointer to the root node of the tree
 *
 * Return: the nodes with at least 1 child or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		counter++;

	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);

	return (counter);
}
