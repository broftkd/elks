/* Double-linked list with near pointers */

#ifndef _LIST_H
#define _LIST_H

#include <types.h>


struct list_node_s
	{
	struct list_node_s * prev;
	struct list_node_s * next;
	};

typedef struct list_node_s list_node_t;


struct list_root_s
	{
	list_node_t node;
	u16_t count;
	};

typedef struct list_root_s list_root_t;


void list_init (list_root_t * root);

void list_add_tail (list_root_t * root, list_node_t * node);
void list_add_head (list_root_t * root, list_node_t * node);

void list_remove (list_root_t * root, list_node_t * node);

#endif /* !_LIST_H */
