#include "binary_trees.h"

/**
 * binary_tree_is_full - checks whether binary tree is full
 * @tree: pointer to head node of tree
 * Return: 1 if tree is full, zero if tree is null or if tree is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) || (tree->left->left && tree->left->right))
		if ((tree->right == NULL) || (tree->right->left &&
					      tree->right->right))
			return (1);

	return (binary_tree_is_full(tree->left) &&
	       binary_tree_is_full(tree->right));
}
