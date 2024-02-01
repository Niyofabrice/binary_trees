#include "binary_trees.h"
/**
 * binary_tree_leaves - measures number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, left_count = 0, right_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
		leaf = left_count + right_count;
		return ((!left_count && !right_count) ? leaf + 1 : leaf + 0);
	}
}
