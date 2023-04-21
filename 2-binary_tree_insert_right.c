#include "binary_trees.h"
/**
 *binary_tree_insert_right-- inserts a node as the right-child of
 *another node
 *@parent: a pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 *Return: NULL on failure
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *knew_wright_knode = NULL;

	if (parent == NULL)
		return (NULL);

	knew_wright_knode = binary_tree_node(parent, value);

	if (knew_wright_knode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		knew_wright_knode->right = parent->right;
		parent->right->parent = knew_wright_knode;
	}
	parent->right = knew_wright_knode;
	return (knew_wright_knode);
}
