#include <stdio.h>

void PrintN(int N);

int main() {
  PrintN(1000000);
  return 0;
}

void PrintN(int N) {
  int i;
  for(i = 1; i <= N; ++i)
    printf("%d\n", i);

  return;
}
