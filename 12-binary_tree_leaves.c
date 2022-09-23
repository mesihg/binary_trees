#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: return the count of binary tree, 0 otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;
	size_t left, right;

	if (tree)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaf_count = left + right;
		leaf_count = (!left && !right) ? leaf_count + 1 : leaf_count + 0;
	}
	return (leaf_count);
}
