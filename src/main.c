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
}

int numOfBits(int num){
  unsigned int uCount;

  uCount = num - ((num >> 1) & 033333333333) - ((num >> 2) & 011111111111);
  return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}