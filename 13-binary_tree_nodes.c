#include "binary_trees.h"
/**
 * binary_tree_nodes --function that counts the leaves in a binary tree
* @tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
* Return: depth
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (i);

	if (tree->left != NULL || tree->right != NULL)
		i = 1;

	i += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (i);
}
