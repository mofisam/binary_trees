#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 *	This function measures the height of the binary tree starting from the
 *	specified root node. The height of a tree is defined as the length of
 *	the longest path from the root node to a leaf node.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*If tree is not NULL*/
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		/*Calculate height of the left subtree*/
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/*Calculate height of the right subtree*/
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/*Return the maximum of left and right subtree heights*/
		return ((left_height > right_height) ? left_height : right_height);
	}

	/*If tree is NULL, return 0*/
	return (0);
}
