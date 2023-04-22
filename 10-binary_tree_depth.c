#include "binary_trees.h"
/**
 *binary_tree_depth -- measures the depth of the tree
*@tree: the tree is a pointer to the root node of the tree to measure
* if tree is NULL do nothing
*Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{

if (!tree)
return (0);

if (!tree->parent)
return (0);

return (binary_tree_depth(tree->parent) + 1);

}
