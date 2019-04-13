#include <stdio.h>
#include <time.h>

clock_t start, stop;

double duration;

int main() {
  start = clock(); // from main() to here, clock tick's number;
  MyFunction();
  stop = clock(); // from main() to here, clock tick's number;
  duration = ((double)(stop - start)) / CLK_TCK;

  printf("%f\n", duration);

  return 0;
}
  
void MyFunction() {
}
