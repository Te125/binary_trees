#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using postorder
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
