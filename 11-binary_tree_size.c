#include "binary_trees.h"
/**
 * binary_tree_size -- function that measures the size of a binary tree
* @tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
* Return: depth
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t biggie = 0;

if (!tree)
return (0);

if (!tree->parent)
return (0);

biggie = (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
return (biggie);

}
