#include <stdio.h>
int main()
{
  // variables
  char name[]={'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'e', 'r'};

  // calculate length
  int length = sizeof(name)/sizeof(name[0]);
  printf("Array length = %d \n", length);

  // display the array
  printf("Array Elements are, \n");
  for (int i = 0; i < length; ++i)
  {
   printf("%c", name[i]);
  }

  return 0;
}
