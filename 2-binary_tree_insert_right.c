#include "binary_trees.h"

/**
 * binary_tree_insert_right - unction that inserts a node as the
 *      right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL
 *     on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	nNode = malloc(sizeof(binary_tree_t));

	if (nNode == NULL)
	{
		return (NULL);
	}
	nNode->n = value;
	nNode->parent = parent;
	nNode->left = NULL;
	nNode->right = NULL;

	if (parent->right != NULL)
	{
		nNode->right = parent->right;
		nNode->right->parent = nNode;
	}
	parent->right = nNode;
	return (nNode);
}
