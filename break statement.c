#include<stdio.h>
int main()
{
  int number;
  printf("Enter number : ");
  scanf("%d",&number);
  while(number!=0)
  {
     if(number<0)
       break;
     printf("Enter number : ");
     scanf("%d",&number);
  }

return 0;
}
