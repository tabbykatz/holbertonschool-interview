#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>



#define MAX(a, b) ((a) > (b) ? (a) : (b))

/* the binary tree they give us */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* max binary heap */
typedef struct binary_tree_s heap_t;
void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
heap_t *heap_insert(heap_t **root, int value);
/* helpers */
void swap(heap_t *n1, heap_t *n2);
int height(heap_t *root);
heap_t *parent(heap_t *root);
void swaps(heap_t *n1, heap_t *n2, int left);

#endif /* BINARY_TREES_H */
