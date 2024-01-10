#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    printf("%d\n", tree->n);
    if (tree->left != NULL || tree->right != NULL)
    {
        printf("Left ");
        binary_tree_print(tree->left);
        printf("Right ");
        binary_tree_print(tree->right);
    }
}

