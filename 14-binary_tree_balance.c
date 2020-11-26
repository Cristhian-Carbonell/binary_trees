#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor. 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_left = 0;
	int b_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		b_left += 1 + binary_tree_balance(tree->left);
	else
		b_left = 1;
	if (tree->right)
		b_right += 1 + binary_tree_balance(tree->right);
	else
		b_right = 1;
	return (b_left - b_right);
}
