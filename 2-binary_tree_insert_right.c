#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a binary tree node and inserts it right
 * @parent: Parent of the node
 * @value: Value of the node's content
 * Return: Newly created node
 */
binary_tree_t	*binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t	*node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->parent = parent;
	node->right = NULL;
	if (parent->right)
	{
		node->right = parent->right;
		if (node->right)
			node->right->parent = node;
	}
	parent->right = node;
	node->n = value;
	node->left = NULL;
	return (node);
}
