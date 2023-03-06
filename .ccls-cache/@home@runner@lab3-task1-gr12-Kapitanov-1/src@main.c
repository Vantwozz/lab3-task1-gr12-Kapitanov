/* hello.c */
#include <stdio.h>

void main (void)
{
	printf ("Hello World\n");
	printf ("Goodbye World\n");
}

int numOfBits(int num){
  unsigned int uCount;

  uCount = num - ((num >> 1) & 033333333333) - ((num >> 2) & 011111111111);
  return ((uCount + (uCount >> 3)) & 030707070707) % 63;
}