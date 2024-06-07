#include "binary_trees.h"

/**
 * helper - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @min: Lower bound for the node that being checked.
 * @max: Upper bound for the node that being checked.
 *
 * Return: 1 or 0 if tree is NULL or BST
 */
int helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (helper(tree->left, min, tree->n - 1) &&
			helper(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst: checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 or 0  if tree is a valid BST or not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (helper(tree, INT_MIN, INT_MAX));
}
