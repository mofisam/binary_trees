#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 *	This function recursively deletes all nodes in the binary tree starting
 *	from the specified root node. It deallocates memory for each node and
 *	sets the pointers to NULL.
 *
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	// Check if tree is not NULL
	if (tree != NULL)
	{
		// Recursively delete the left subtree
		binary_tree_delete(tree->left);
		// Recursively delete the right subtree
		binary_tree_delete(tree->right);
		// Free memory allocated for the current node
		free(tree);
	}
}

