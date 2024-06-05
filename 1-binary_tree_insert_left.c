#include "binary_trees.h"

/**
 * binary_tree_insert_left: A node inserted in the left
 *
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: New node or NULL if failed
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (!parent)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return (NULL);

    parent->left = new_node;
    return (new_node);
}
