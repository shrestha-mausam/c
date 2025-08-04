#include <stdlib.h>
#include "LinkedList.h"

Node* createNode (int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));

    *newNode = (Node) {
        .data = data,
        .prev = NULL,
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

    *newLinkedList = (LinkedList) {
        .size = 0,
        .head = NULL,
        .tail = NULL
    };

    return newLinkedList;
}

void addAtBegining(int data, LinkedList* list) {
    if(list == NULL) {
        return;
    }

    
}




