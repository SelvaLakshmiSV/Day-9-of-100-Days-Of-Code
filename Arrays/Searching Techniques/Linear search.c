#include <stdio.h>
// function for linear search
/* if match found then return index of search key
   else return -1 */
int linearSearch(int arr[], int n, int key) 
{
  for(int i=0; i<n; i++) 
  {
    if(key == arr[i])
      return i;
  }
  return -1;
}
// main function
int main()
{
  int array[] = {50, 90, 30, 70, 60};
  int key = 0;

  printf("Enter Search Element: ");
  scanf("%d", &key);

  // find the size array
  int size = sizeof(array)/sizeof(array[0]);

  // search key
  int index = linearSearch(array, size, key);
  
  if(index == -1)
    printf("%d Not Found\n", key);
  else
    printf("%d Found at Index = %d\n", key, index);

  return 0;
}
