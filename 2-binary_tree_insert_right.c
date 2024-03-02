#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 *	This function creates a new node with the given value and inserts it as
 *	the right-child of the specified parent node. If the parent already has
 *	a right child, the new node becomes the right child and the existing
 *	right child becomes the right child of the new node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/*Check if parent node is NULL*/
	if (parent == NULL)
		return (NULL);

	/*Create a new node with the given value*/
	new = binary_tree_node(parent, value);
	/*Check if memory allocation failed*/
	if (new == NULL)
		return (NULL);

	/*If parent already has a right child*/
	if (parent->right != NULL)
	{
		/*Make the new node's right child point to the existing right child*/
		new->right = parent->right;
		/*Update the existing right child's parent to be the new node*/
		parent->right->parent = new;
	}
	/*Set the new node as the right child of the parent*/
	parent->right = new;

	return (new);
}
