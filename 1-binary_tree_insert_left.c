#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 *     the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on
 *        failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left != NULL)
	{
		nNode->left = parent->left;
		nNode->left->parent = nNode;
	}
	parent->left = nNode;

	return (nNode);
}
