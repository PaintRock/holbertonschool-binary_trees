#include "binary_trees.h"
/**
 *binary_tree_depth -- measures the depth of the tree
*@tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
*Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
int right_depth = 0;
int left_depth = 0;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (0);

left_depth = binary_tree_depth(tree->left);
right_depth = binary_tree_depth(tree->right);
/* return the larger of the two depths, plus one for the current node */
if (left_depth > right_depth)
{
return (left_depth + 1);
}
else
{
return (right_depth + 1);
}
}
