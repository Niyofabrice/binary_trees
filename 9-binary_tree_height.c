#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to go through
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0;
	size_t right_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_count = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right_count = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left_count > right_count) ? left_count : right_count);
	}
}
