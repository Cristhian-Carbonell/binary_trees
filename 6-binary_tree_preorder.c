#include "binary_trees.h"

/**
 * binary_tree_preorder - checks if a node is a leaf
 * @node: node to be checked
 *
 * Return: 1 if node is a leaf. 0 otherwise or in case of error
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
