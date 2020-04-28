#include <stddef.h>

typedef struct list {
    struct list *next;
    int val;
} *List;

void reverse(List list) {
    if (list == NULL || list->next == NULL) return;

    List head = NULL;
    List tail = NULL;
    List cur;
    for (cur = list->next; cur->next != NULL;) {
        List tmp = cur->next;

        if (head == NULL) tail = cur;

        cur->next = head;
        head = cur;

        cur = cur->next;
    }

    list->next = head;
    tail->next = cur;

    int firstVal = list->val;
    list->val = cur->val;
    cur->val = firstVal;
}
