#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Tells if a node is a root or not
 * @node: Node to check
 * Return: 1 if it's a leaf, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
		return (0);
	}
	return (0);
}
