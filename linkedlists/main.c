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
            addAtEnd(data, linkedlist);
            break;
        case 2:
            reverse(linkedlist);
            break;
        case 3:
            printListContents(linkedlist);
        case 4:
            deleteLinkedList(linkedlist);
            return 0;
        default:
            printf("Invalid Option Choose 1, 2, or 3\n");
            break;
        }
    } while (usageOption != 4);
    
}

void printUsage() {
    printf("USAGE:\n");
    printf("1. Add a node\n");
    printf("2. Reverse List\n");
    printf("3. Print List contents\n");
    printf("4. Exit the Program\n");
}

