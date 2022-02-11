/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1, mark2;
   printf("Enter marks 1 : ");
   scanf("%d",&mark1);
   printf("Enter marks 2 : ");
   scanf("%d", &mark2);
   
   printf("Total marks : %d", mark1 + mark2);
  
  return 0;
}

