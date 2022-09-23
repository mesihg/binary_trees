#include "binary_trees.h"


/**
 * binary_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: return the height of binary tree, 0 otherwise
 */

size_t binary_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_height(tree->left);
	right_height = binary_heighht(tree->right);
	if (left_height >= right_height)
		return (1 + left_height);
	return (1 + right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: return the balance factor of binary tree, 0 otherwise
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? (int)binary_height(tree->left) : -1;
	right_height = tree->right ? (int)binary_height(tree->right) : -1;
	return (left_height - right_height);
}
