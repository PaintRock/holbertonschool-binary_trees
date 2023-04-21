#include "binary_trees.h"
/**
*binary_tree_delete -- deletes the entire binary tree
*@tree: the tree is a pointer to the root node of the tree to delete
* if tree is NULL do nothing
*Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
       return;

      binary_tree_delete(tree->left);
      binary_tree_delete(tree->right);

      free(tree);
}