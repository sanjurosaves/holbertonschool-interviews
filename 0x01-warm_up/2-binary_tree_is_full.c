#include "binary_trees.h"

/**
 * btf - checks if a binary tree is full
 * @tree: pointer to tree to check
 * Return: 1 if full, 0 if not
 */
int btf(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (btf(tree->left) &&
			btf(tree->right));

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree to check
 * Return: 1 if full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (btf(tree->left) &&
			btf(tree->right));

	return (0);
}
