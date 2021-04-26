#include <stdio.h>
int main()
{
  // original array
  int arr[] = {15,25,35,40,50};

  // calculate length of array
  int length = sizeof(arr)/sizeof(int);

  // display original array
  printf("Original array: \n");
  for (int i = 0; i < length; ++i)
  {
     printf("%d ", arr[i]);
  }
  
  // variables
  int i = 0;
  int j = length-1;
  int temp;

  // reverse the array
  // loop
  while(i <= length/2) {
     // swap
     temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;

     // update i & j
     i++; // increase i
     j--; // decrease j
  }

  // display new array
  printf("\nReverse of array: \n");
  for (int i = 0; i < length; ++i)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}
