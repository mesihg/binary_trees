#include "binary_trees.h"


/**
 * binary_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: return the height of binary tree, 0 otherwise
 */

size_t binary_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_height(tree->left);
	right = binary_heighht(tree->right);
	if (left > right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: return the balance factor of binary tree, 0 otherwise
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	left = tree->left ? (int)binary_height(tree->left) : -1;
	right = tree->right ? (int)binary_height(tree->right) : -1;
	return (left - right);
}
