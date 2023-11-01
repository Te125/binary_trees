#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in th new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nNode;

	nNode = malloc(sizeof(binary_tree_t));

	if (nNode == NULL)
	{
		return (NULL);
	}

	nNode->n = value;
	nNode->parent = parent;
	nNode->left = NULL;
	nNode->right = NULL;

	return (nNode);
}
