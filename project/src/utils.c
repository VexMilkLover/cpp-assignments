#include "utils.h"
#include <stdio.h>

int timer_from(int from) {
    int counter = 0;
    for (int i = from; i >= 0; --i) {
        ++counter;
        printf("%i", i);
        if (i > 0) {
          printf(" ");
        } else {
          printf("\n");
        }
    }
    return counter;
}


int custom_pow(int base, int power) {
    int ans = 1;
    for (int i = 0; i < power; ++i) {
      ans *= base;
    }
    return ans;
}
