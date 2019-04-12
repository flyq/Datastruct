#include <stdio.h>

void PrintN(int N);

int main() {
  PrintN(300000);
  return 0;
}

void PrintN(int N) {
  if(N) {
    PrintN(N - 1);
    printf("%d\n", N);
  }

  return;
}
