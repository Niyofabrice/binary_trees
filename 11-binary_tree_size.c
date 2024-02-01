#include "binary_trees.h"
/**
 * binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right_count = 0, left_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_count = binary_tree_size(tree->left);
		right_count = binary_tree_size(tree->right);
		size = right_count + left_count + 1;
	}
	return (size);
}
