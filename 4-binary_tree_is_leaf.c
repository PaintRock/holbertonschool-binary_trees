#include "binary_trees.h"
/**
*binary_tree_is_leaf -- see if the node is a leaf
*@node: the node
* Return: return 1 if it is a leaf, return 0 if it is not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}
