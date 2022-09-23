#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: return the height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftBHeight, rightBHeight;

	if (tree)
	{
		leftBHeight = tree->left ? binary_tree_height(tree->left) : 0;
		rightBHeight = tree->right ? binary_tree_height(tree->right) : 0;

		if (leftBHeight > rightBHeight)
			return (leftBHeight + 1);
		else
			return (rightBHeight + 1);
	}
	return (0);
}
