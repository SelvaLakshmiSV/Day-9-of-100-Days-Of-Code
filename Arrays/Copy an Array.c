#include <stdio.h>
// function to copy an array
void copyArray(int arr[], int copy[], int size)
{
  // loop to iterate through array
  for (int i = 0; i < size; ++i)
  {
    copy[i] = arr[i];
  }
}
// function to display an array
void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ",arr[i]);
  }
}
// main function
int main()
{
  // original array
  int arr[] = {10, 20, 30, 40, 50};

  // calculate size
  int size = sizeof(arr)/sizeof(arr[0]);
      
  // create new array
  int newArr[size];

  // copy array
  copyArray(arr, newArr, size);
      
  // display array
  printf("Original array = ");
  displayArray(arr, size);
  printf("\nCopied array = ");
  displayArray(newArr, size);

  return 0;
}
