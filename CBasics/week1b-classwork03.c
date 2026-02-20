/*
  Student Grade Application :

  Description: write a program that reads a series of numbers that 
  represent student marks for the PROG20799 course. Your program  
  should inform the user of the corresponding student grade for each 
  mark. Ensure that only valid marks are processed (between 0 -100). Additionally,   compute the average mark for all the students and determine the overall average grade for the class (if students were processed). Use the following test data to test your program:

  80 - 100 : A
  70 - 79  : B
  60 - 69  : C
  50 - 59  : D
   0 - 49  : F
  test values 84, 67, 364, 91, -45, 55, 43, 77, 61, 70
*/
#include <stdio.h>
int main(void)
{
      float mark, totalMark = 0.0, averageMark = 0.0;
      unsigned int count = 0;
      char classGrade = 'F';

      printf("Enter Student Mark (-1 to quit): ");
      scanf("%f", &mark);
      while(mark != -1)
      {
         if(mark < 0 || mark > 100){
            printf("Invalid Mark, Please try again\n");
         } else {
            if(mark >= 80 && mark <= 100){
               printf("Student Grade is A\n");
            } else if(mark >= 70 && mark <= 79){
               printf("Student Grade is B\n");
            } else if(mark >= 60 && mark <= 69){
               printf("Student Grade is C\n");
            } else if(mark >= 50 && mark <= 59){
               printf("Student Grade is D\n");
            } else {
               printf("Student Grade is F\n");
            }
            totalMark += mark;
            count++;
         }
         printf("Enter Student Mark (-1 to quit): ");
         scanf("%f", &mark);
      }

      if (count == 0)
      {
       printf("No Student Processed\n");
      }
      else 
      {
       averageMark = totalMark / count;
       // determine average grade of class
       if(averageMark >= 80 && averageMark <= 100){
          classGrade = 'A';
       } else if(averageMark >= 70 && averageMark < 80){
          classGrade = 'B';
       } else if(averageMark >= 60 && averageMark < 70){
          classGrade = 'C';
       } else if(averageMark >= 50 && averageMark < 60){
          classGrade = 'D';
       } else {
          classGrade = 'F';
       }
       printf("\nTotal Mark: %.2f\n", totalMark);
       printf("Average Mark: %.2f\n", averageMark);
       printf("Number of Students: %u\n", count);
       printf("Class Average Grade: %c\n", classGrade);
      }
}// End of main















