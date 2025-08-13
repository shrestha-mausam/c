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
            deleteFromBegining(linkedlist);
            break;
        case 3:
            deleteFromEnd(linkedlist);
            break;
        case 4:
            getFirst(linkedlist);
            break;
        case 5:
            getLast(linkedlist);
            break;
        case 6:
            reverse(linkedlist);
            break;
        case 7:
            printListContents(linkedlist);
            break;
        case 8:
            deleteLinkedList(linkedlist);
            return 0;
        default:
            printf("Invalid Option Choose, please choose from the options below:\n");
            printUsage();
            break;
        }
    } while (usageOption != 8);
    
}

void printUsage() {
    printf("USAGE:\n");
    printf("1. Add a node\n");
    printf("2. Delete First Node\n");
    printf("3. Delete Last Node\n");
    printf("4. Get First Node\n");
    printf("5. Get Last Node\n");
    printf("6. Reverse List\n");
    printf("7. Print List contents\n");
    printf("8. Exit the Program\n");
}

