#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 *	This function creates a new node with the given value and inserts it as
 *	the left-child of the specified parent node. If the parent already has a
 *	left child, the new node becomes the left child and the existing left
 *	child becomes the left child of the new node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*If parent already has a left child*/
	if (parent->left != NULL)
	{
		/*Make the new node's left child point to the existing left child*/
		new->left = parent->left;
		/*Update the existing left child's parent to be the new node*/
		parent->left->parent = new;
	}
	/*Set the new node as the left child of the parent*/
	parent->left = new;

	return (new);
}
