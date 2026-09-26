#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 6; i++) {
    if (i == 2) {
      continue; //skips the value
    }
    if (i == 4) {
      break; //stops the code
    }
    printf("%d\n", i);
  }

  return 0;
}
