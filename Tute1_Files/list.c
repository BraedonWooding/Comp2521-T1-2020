typedef struct _node_t {
    int value;
    struct _node_t *next;
} Node;

typedef Node *List;

int sumFor(List list) {
    int sum = 0;
    for (List cur = list; cur != NULL; cur = cur->next) {
        sum += cur->value;
    }
    return sum;
}

int sumWhile(List list) {
    int sum = 0;
    List cur = list;
    while (cur != NULL) {
        sum += cur->value;
        cur = cur->next;
    }
    return sum;
}

int sumRec(List list) {
    if (list == NULL) {
        return 0;
    } else {
        sumRec(list->next) + list->value;
    }
}

