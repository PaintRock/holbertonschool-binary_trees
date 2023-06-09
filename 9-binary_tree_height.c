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
