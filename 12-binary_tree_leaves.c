#include "binary_trees.h"
/**
 * binary_tree_leaves --function that counts the leaves in a binary tree
* @tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
* Return: depth
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree && tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
