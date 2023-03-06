/* hello.c */
#include <stdio.h>

void main (void)
{
  int n;
  scanf("%d", &n);
  array = (int*)malloc(n*sizeof(int));
  for(int i = 0; i<n; i++){
    int num;
    printf("Enter %d number in array",n);
    scanf("%d", &num);
    array[i] = num;
  }
  int tmp;
  bool noSwap;
  for (int i = N - 1; i >= 0; i--){
    noSwap = 1;
    for (int j = 0; j < i; j++){
        if (numOfBits(array[j]) > numOfBits(array[j + 1])){
            tmp = mass[j];
            mass[j] = mass[j + 1];
            mass[j + 1] = tmp;
            noSwap = 0;
        }
    }
    if (noSwap == 1)
        break;
  }
  printf("Sorted array:\n");
  for (int i = 0; i < N; i++)
    printf("%d ", array[i]);
  printf("\n");
  free(array);
  return 0;
}

int numOfBits(int num){
  unsigned int uCount;

  uCount = num - ((num >> 1) & 033333333333) - ((num >> 2) & 011111111111);
  return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}