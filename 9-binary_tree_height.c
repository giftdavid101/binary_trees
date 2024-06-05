#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree, If tree is NULL return 0.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lD = 0, rD = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lD = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rD = binary_tree_height(tree->right) + 1;

	return (lD > rD ? lD : rD);
}
