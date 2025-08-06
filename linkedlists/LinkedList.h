#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct linkedlist LinkedList;
typedef struct node Node;

// NODE RELATED FUNCTIONALITY //////////
/**
 * Creates a new node with the specified data value.
 *
 * @param data The integer value to store in the new node.
 * @return A pointer to the newly created Node, or NULL if memory allocation fails.
 */
Node* createNode(int data);

/**
 * Deletes a node and frees its memory.
 *
 * @param node A pointer to the Node to be deleted. If node is NULL, no action is taken.
 */

void deleteNode(Node* node);

// LINKED LIST RELATED FUNCTIONALITY ///////////

/**
 * Creates and initializes a new, empty linked list.
 *
 * Allocates memory for a LinkedList structure, sets its size to 0,
 * and initializes head and tail pointers to NULL.
 *
 * @return A pointer to the newly created LinkedList, or NULL if memory allocation fails.
 */
LinkedList* createLinkedList();

/**
 * Adds a new node with the specified data at the beginning of the linked list.
 *
 * This function creates a new node containing the given data and inserts it at the head
 * of the provided linked list. If the list is empty, the new node becomes both the head and tail.
 *
 * @param data The integer value to store in the new node.
 * @param list A pointer to the LinkedList to which the node will be added.
 * @return 0 on success, or -1 if the list is NULL or memory allocation for the new node fails.
 */
int addAtBeginning(int data, LinkedList* list);
int addAtEnd(int data, LinkedList* list);
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

