#include "binary_trees.h"
/**
*binary_tree_height -- deletes the entire binary tree
*@tree: the tree is a pointer to the root node of the tree to delete
* if tree is NULL do nothing
*Return: void
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
int right_height = 0;
int left_height = 0;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
/* return the larger of the two heights, plus one for the current node */
if (left_height > right_height)
{
return (left_height + 1);
}
else
{
return (right_height + 1);
}
}

/**
 * binary_tree_balance --function that measures the balance factor
* @tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
* Return: depth
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (!tree->right && !tree->left)
	return (0);
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
