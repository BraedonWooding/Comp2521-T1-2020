#include <stdio.h>
#include <stdlib.h>

typedef struct LLNode *LList;
typedef struct LLNode {
  LList next;
  int value;
} LLNode;

void print_reverse(LList list);

int main(int argc, char *argv[]) {
  LList head = NULL;

  // Q: Why do it backwards?
  for (int i = argc - 1; i >= 1; i--) {
    LList new = malloc(sizeof *new);
    new->next = head;
    new->value = atoi(argv[i]);
    head = new;
  }
  print_reverse(head);
  putchar('\n');
  return 0;
}

// 1 -> 2 -> 3 -> X
// X <- 3 <- 2 <- 1

// Don't include the '\n' at the end, it's better practice to avoid printing newlines
// if you may want to do it multiple times in a single line in the future
void print_reverse(LList list) {
    if (list == NULL) {
        printf("X");
    } else {
        print_reverse(list->next);
        printf(" <- %d", list->value);
    }
}
