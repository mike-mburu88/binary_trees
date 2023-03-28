#include "binary_trees.h"

/**
 *binary_tree_node - a function that creates a binary tree node
 *@parent: a pointer variable for the parent node of the created node
 *@value: is the value to put in the new node
 *Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree));
if (node == NULL)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
