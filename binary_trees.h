#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Basic Binary Tree Structure */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
