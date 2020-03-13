#include <stdio.h>

typedef struct LinkedListNode {
    struct LinkedListNode *next;
    int value;
} LinkedListNode;

void printList(LinkedListNode *node) {
    if (node != NULL) {
        printf("%d -> ", node->value);
        printList(node->next);
        printf(" <- %d", node->value);
    } else {
        printf("X");
    }
}