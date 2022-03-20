#include "prime.h"
#include <stdio.h>

void custom_countdown(int digit) {
    if (digit > 1) {
        custom_countdown(digit - 1);
    } else if (digit < 1) {
        custom_countdown(digit + 1);
    }
    if (digit == 1) {
        printf("%i", digit);
    } else {
        printf(" %i", digit);
    }
}
