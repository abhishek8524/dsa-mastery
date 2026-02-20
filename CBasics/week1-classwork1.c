/* 
 *Program to read two integer numbers from the keyboard
 *compute the sum, difference, quotient, product and remainder
 *and output these results to the console
*/
#include <stdio.h> /* add code for header file */
int main (void)
{
   /* define data containers to store results*/  
   /* define data containers to store input data*/
   int num1=0, num2=0,sum=0, difference=0, product=0, quotient=0, remainder=0;
   
   /* read first number from the keyboard */
    // prompt the user
    printf("Enter First Number and Second Number: ");
    // read the number
    scanf("%d%d",&num1,&num2);
   
   /* read second number from the keyboard */
    // prompt the user
    // read the number
   
   /* Compute the sum, product, quotient, difference & remainder */
   sum=num1+num2;
   product=num1*num2;
    quotient=num1/num2;
    difference=num1-num2;
    remainder=num1%num2;
   
   
   /* Output the results */
   printf("Sum is %d\n",sum);
   printf("Product is %d\n",product);
   printf("Quotient is %d\n",quotient);
   printf("Difference is %d\n",difference);
   printf("Remainder is %d\n",remainder);
   

}


