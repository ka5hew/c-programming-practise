#include <stdio.h>
#include <stdbool.h>

int main() {
  int x = 10;
  int y = 10;

  bool isGreater = x > y;
  bool isLesser = x < y;

  if (isGreater) {
    printf("x is greater than y");
  }
  else if (isLesser){
    printf("x is lesser than y");
  }
  else {
    printf("x is equal to y");
  }

  return 0;
}
