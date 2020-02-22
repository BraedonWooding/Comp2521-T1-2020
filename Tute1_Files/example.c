// my_prog.c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%s", argv[1]);
    putchar(getchar());
    putchar('\n');
    return 0;
}
