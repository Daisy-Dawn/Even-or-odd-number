#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
  int i;
  printf("Please enetr a number:\t");
  scanf("%d", &i);

  if (i % 2 == 0)
    printf("The number you entered is an even number\n");

  else
    printf("The number you entered is an odd number\n");

  printf("\nEnd of program\n");
  sleep (5);
  system("clear");
  printf("Welcome user");
  
  return 0;
}