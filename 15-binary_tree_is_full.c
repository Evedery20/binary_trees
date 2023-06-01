#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full, meaning all nodes
 * have either 0 or 2 children
 * @tree: root node below which to check
 * Return: 1 if `tree` and all nodes below it each have 0 or 2 children, 0 if
 * not or if `tree` is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == 0 || right == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

