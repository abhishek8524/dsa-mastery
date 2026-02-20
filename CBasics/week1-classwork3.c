//Program to read 2 numbers and determine if one is larger or if they are equal
#include <stdio.h>
int main (void)
{
   
   int number1, number2;
   
   printf("Enter First Integer: ");
   scanf("%d", &number1);
   
   printf("Enter Second Integer: ");
   scanf("%d", &number2);

   /* determine if first number is greater */
   if(number1>number2){
    printf("%d is Greater than %d",number1,number2);
   }
   
   /* determine if second number is greater*/
    if(number1<number2){
    printf("%d is less than %d",number1,number2);
   }
   
   /* determine both numbers are equal     */  
    if(number1==number2){
    printf("%d is equal= %d",number1,number2);
   }
   
 } // main function ends here
