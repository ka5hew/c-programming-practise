#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 2;
  int y = 10;

  bool isGreater = x > y;

  if (isGreater) {
    printf("x is greater than y");
  }
  else {
    printf("x is lesser than y");
  }

  return 0;
}
