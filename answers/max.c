#include <stddef.h>

int max(int *array, int lo, int hi) {
    if (lo == hi) return array[lo];

    if (array[lo] > array[hi]) {
        return max(array, lo, hi - 1);
    } else {
        return max(array, lo + 1, hi);
    }
}
