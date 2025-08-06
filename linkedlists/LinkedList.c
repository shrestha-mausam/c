#include <stdlib.h>
#include "LinkedList.h"

struct node {
    int data;
    struct node* next;
};

struct linkedlist {
    int size;
    struct node* head;
    struct node* tail;
};

Node* createNode (int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    if(newNode == NULL){
        printf("ERROR: Failed to create Node with data %d\n", data);
        return NULL; // indicates mem allocation failure
    }

    *newNode = (Node) {
        .data = data,
        .next = NULL
    };

    return newNode;
}

void deleteNode (Node* node) {
    if(node != NULL){
        free(node);
    }
}

LinkedList* createLinkedList(){
    LinkedList* newLinkedList = (LinkedList*) malloc(sizeof(LinkedList));
    // Should check if malloc failed
    if(newLinkedList == NULL) {
        printf("ERROR: Failed to create linked list\n");
        return NULL;
    }

    *newLinkedList = (LinkedList) {
        .size = 0,
        .head = NULL,
        .tail = NULL
    };

    return newLinkedList;
}

int addAtBeginning(int data, LinkedList* list) {
    if(list == NULL) {
        printf("ERROR: Cannot add Node to a NULL linked list");
        return -1; // Nothing to do the linked list needs to be created first
    }
    // create the node
    Node* newNode = createNode(data);
    if(newNode == NULL) { // Node creation failed
        printf("ERROR: Failed to create Node with data: %d\n", data);
        return -1;
    }

    if(list->size <= 0) { // Case: List is empty
        list->head = newNode;
        list->tail = newNode;
    } else { // Case: List not empty
        newNode->next = list->head;
        list->head = newNode;
    }
    list->size++;

    return 0;
}

int addAtEnd(int data, LinkedList* list) {
    if(list == NULL) {
        printf("ERROR: Cannot add Node to a NULL linked list");
        return -1; // Nothing to do the linked list needs to be created first
    }
    // create the node
    Node* newNode = createNode(data);
    if(newNode == NULL) { // Node creation failed
        printf("ERROR: Failed to create Node with data: %d\n", data);
        return -1;
    }

    if(list->size <= 0) { // Case: List is empty
        list->head = newNode;
        list->tail = newNode;
    } else {
        // get the node in the current tail
        Node* currTail = list->tail;
        currTail->next = newNode;
        list->tail = newNode;
    }
    list->size++;

    return 0;
}


