#include <stdio.h>


int MaxSubSeqSum(int arr[], int N);

int main() {
  int a[100];
  for(int i = 0; i < 100; ++i)
    a[i] = i*(-1);
  MaxSubSeqSum(a, 100);

  return 0;    
}

int MaxSubSeqSum(int a[], int N) {
  int max, tempSum;
  max = tempSum = 0;

  for(int i = 0; i < N; ++i) {
    tempSum += a[i];
    if(tempSum > max)
      max = tempSum;
    if(tempSum < 0)
      tempSum = 0;
  }

  printf("%d\n", max);
}
