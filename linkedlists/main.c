#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"

void printUsage();

int main() {
    LinkedList* linkedlist = createLinkedList();

    printUsage();

    int usageOption, data;
    do {
        printUsage();
        scanf("%d", &usageOption);
        switch (usageOption)
        {
        case 1: // Add a node
            printf("Enter the node value:\n");
            scanf("%d", &data);
            addAtBeginning(data, linkedlist);
            break;
        case 2:
            printListContents(linkedlist);
            break;
        case 3:
            deleteLinkedList(linkedlist);
            return 0;
        default:
            printf("Invalid Option Choose 1, 2, or 3\n");
            break;
        }
    } while (usageOption != 3);
    
}

void printUsage() {
    printf("USAGE:\n");
    printf("1. Add a node\n");
    printf("2. Print list contents\n");
    printf("3. Exit the Program\n");
}

