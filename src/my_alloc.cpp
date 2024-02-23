#include "../include/my_alloc.h"

#include <iostream>

int my_alloc(int n) {
    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr) {
        free(ptr);
        return 1; // Allocation succeeded
    }
    return 0; // Allocation failed
}
