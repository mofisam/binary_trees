#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 *	This function checks if the given node is a leaf, meaning it has no
 *	children (left or right).
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*If node is NULL or has either left or right child, it's not a leaf*/
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

