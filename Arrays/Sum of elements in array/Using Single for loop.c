#include<stdio.h>
int main()
{
     // Array of 5 floating elements
   float arr[5], sum=0.0; 
   int i;

   printf("Enter array elements:\n");

   //  take 5 number
   for(i=0;i<5;i++)
   {
     scanf("%f",&arr[i]);
   }

   // add that 5 number
   for(i=0;i<5;i++)
   {
     sum += arr[i]; //sum=sum+arr[i]
   }

   printf("Sum of Array elements are: %f", sum);
  
  

}
