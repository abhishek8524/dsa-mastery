/*
   Write a program that accepts a series of numbers from the user, 
   totals and averages the numbers and then outputs the 
   total and average.
*/
#include <stdio.h>
int main(void)
{
  int number, total = 0;
  unsigned int counter = 0;
  float average = 0.0f;

  printf("Enter Number... -1 to quit: ");
  while(1) // use a sentinel loop
  {
    scanf("%d", &number);
    if(number == -1){
      break;
    }
    total += number;
    counter++;
  }
  if(counter > 0) {
    average = (float)total / counter;
  }
  printf("Total: %d\n", total);
  printf("Average: %.2f\n", average);
  printf("Numbers entered: %u\n", counter);
}



