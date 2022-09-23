#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: return the height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftBHeight = 0;
	size_t rightBHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		leftBHeight = binary_tree_height(tree->left);
		rightBHeight = binary_tree_height(tree->right);

		if (leftBHeight > rightBHeight)
			return (leftBHeight + 1);
		else
			return (rightBHeight + 1);
	}
}
