#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid BST
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (isBST(tree, INT_MIN, INT_MAX));
}

/**
 * isBST - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @min: Lower bound of checked nored
 * @max: Upper bound of checked nodes
 *
 * Return: 1 or 0 if tree is a valid BST or not
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max));
