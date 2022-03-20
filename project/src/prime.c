#include "prime.h"
#include <stdio.h>

int custom_prime(int digit) {
  if (digit == 2 || digit == 3)
      return 1;

  if (digit <= 1 || digit % 2 == 0 || digit % 3 == 0)
      return 0;

  for (int i = 5; i * i <= digit; i += 6) {
      if (digit % i == 0 || digit % (i + 2) == 0)
          return 0;
  }

  return 1;
}
