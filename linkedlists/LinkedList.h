#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct linkedlist {
    int size;
    struct node* head;
    struct node* tail;
};

typedef struct linkedlist LinkedList;
typedef struct node Node;

/* NODE RELATED FUNCTIONALITY */
Node* createNode(int data);
void deleteNode(Node* node);

/* LINKED LIST FUNCTIONALITY */
LinkedList* createLinkedList();
void addAtBegining(int data, LinkedList* list);
void addAtEnd(int data, LinkedList* list);
void addAtPosition(int data, int position, LinkedList* list);
void deleteFromBegining(LinkedList* list);
void deleteFromEnd(LinkedList* list);
void getFirst(LinkedList* list);
void getLast(LinkedList* list);
// traversal functionality
void print(LinkedList* list);
void print_reverse(LinkedList* list);
void reverse(LinkedList* list);

#endif

