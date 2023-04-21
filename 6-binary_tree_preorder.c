#include "binary_trees.h"
/**
*binary_tree_preorder -- goes through a tree using pre-order traversal
*@tree: the tree to traverse
*@func: the function tu traverse the tree
* Return: o if null
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
