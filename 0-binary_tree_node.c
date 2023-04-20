#include "binary_trees.h"
/**
* binary_tree_node -- creates a binary tree node
*@parent: the parent
*@value: the new value
*Return: node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *knew_knode;

    knew_knode = malloc(sizeof(binary_tree_t));


    if (knew_knode == NULL)
    return (NULL);

    knew_knode->n = value;
    knew_knode->parent = parent;
    knew_knode->left = NULL;
    knew_knode->right = NULL;

    return(knew_knode);
}