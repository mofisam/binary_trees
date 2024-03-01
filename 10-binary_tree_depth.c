#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 *	This function measures the depth of the specified node in the binary
 *	tree. The depth of a node is defined as the length of the path from the
 *	node to the root node.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	// If tree is not NULL and has a parent, calculate depth recursively
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
