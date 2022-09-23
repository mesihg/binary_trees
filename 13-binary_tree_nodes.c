#include "binary_trees.h"

/**
 * binary_tree_nodes - count the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: return the count of binary tree, 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree)
	{
		node_count += (tree->left || tree->right) ? 1 : 0;
		node_count += binary_tree_nodes(tree->left);
		node_count += binary_tree_nodes(tree->right);
	}
	return (node_count);
}
