#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stddef.h>

typedef struct _doubly_node DoublyNode, Node;
typedef struct _doubly_linked_list DoublyLinkedList, List;

Node *Node_create(int val);

List *List_create();
void List_destroy(List **L_ref);
bool List_is_empty(const List *L);
size_t List_size(const List *L);
void List_add_first(List *L, int val);
void List_add_last(List *L, int val);
void List_print(const List *L);
void List_inverted_print(const List *L);
void List_remove(List *L, int val);
void List_remove_last(List *L);

int List_get_last_val(const List *L);

#endif