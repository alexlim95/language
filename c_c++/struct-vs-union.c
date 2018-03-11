#include <stdio.h>
#include <stdlib.h>

/*
*  Creates a struct for a binary tree data structure where each leaf
*  node has a double data value, while each internal node has pointers
*  to two children, but no data.
*
*  Using a struct --> requires 16-bytes
*  Half of the bytes are wasted because interior node only has pointers and
*  no data, while the leaf nodes only have data and no pointers.
*/
struct NODE_S {
  struct NODE_S *left;
  struct NODE_S *right;
  double data;
};

/*
*  Utilizing a union requires just 8 bytes.
*  If n is a pointer to a node of type union NODE_U *:
*  n->data for leafs
*  n->internal.left or n->internal.right for interior nodes
*/
union NODE_U {
  struct {
    union NODE_U *left;
    union NODE_U *right;
  } internal;
  double data;
}

/*
*  Using a enumerated type to detemrine if lead or internal node.
*  Requires 12 bytes: 4 for type, and either 4 each for info.internal.left
*  and info.internal.right, or 8 for info.data.
*/
typedef enum { N_LEAF, N_INTERNAL } nodetype_t;

struct NODE_T {
  nodetype_t type;
  union {
    struct {
      struct NODE_T *left;
      struct NODE_T *right;
    } internal;
    double data;
  } info;
};
