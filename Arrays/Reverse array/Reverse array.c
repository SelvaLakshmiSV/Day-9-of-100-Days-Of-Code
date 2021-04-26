#include <stdio.h>
int main()
{
  // original array
  int realArr[] = {15,25,35,40,50};

  // calculate length
  int length = sizeof(realArr)/sizeof(int);
  
  // declare new array
  int reverseArr[length];

  // reverse the array
  int i = 0;
  int j = length-1;
  // loop
  while(j>=0) {
   reverseArr[i] = realArr[j];

   // update i & j
   i++; // increase i
   j--; // decrease j
  }

  // display original array
  printf("Original array: \n");
  for (int i = 0; i < length; ++i)
  {
   printf("%d ", realArr[i]);
  }

  // display new array
  printf("\nReverse of array: \n");
  for (int i = 0; i < length; ++i)
  {
   printf("%d ", reverseArr[i]);
  }

  return 0;
}
