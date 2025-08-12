#include<stdio.h>
#include<stdlib.h>
#include "LinkedList.h"

void printUsage();

int main() {
    LinkedList* linkedlist = createLinkedList();

    int usageOption, data;
    do {
        printUsage();
        scanf("%d", &usageOption);
        switch (usageOption)
        {
        case 1: // Add a node
            while(1){
                printf("Enter a Node value or -1 to exit:\n");
                scanf("%d", &data);
                if(data == -1){
                    break;
                } else {
                    addAtEnd(data, linkedlist);
                }
            }
            break;
        case 2:
            getFirst(linkedlist);
            break;
        case 3:
            getLast(linkedlist);
            break;
        case 4:
            reverse(linkedlist);
            break;
        case 5:
            printListContents(linkedlist);
        case 6:
            deleteLinkedList(linkedlist);
            return 0;
        default:
            printf("Invalid Option Choose, please choose from the options below:\n");
            printUsage();
            break;
        }
    } while (usageOption != 6);
    
}

void printUsage() {
    printf("USAGE:\n");
    printf("1. Add a node\n");
    printf("2. Get First Node\n");
    printf("3. Get Last Node\n");
    printf("4. Reverse List\n");
    printf("5. Print List contents\n");
    printf("6. Exit the Program\n");
}

