//Program to compute the diameter, area, circumference of a circle

#include <stdio.h>

int main (void)
{
   /* define data container to store floating point value radius*/
   float radius=0.0;
   
   /* define read-only data container (constant) value PI with 3.14159 */
      const float PI=3.14159;

   /* read radius from the keyboard */
     // prompt user 
     printf("Enter Radius: ");
     // get keyboard input
     scanf("%f",&radius);

   /* compute and output diameter, circumference and area */
   float diameter = 2*radius;
   float circumference = 2*PI*radius;
   float area=PI*(radius*radius);
   printf("Diameter is %.2f\nCircumference if %.2f\nArea is %.2f",diameter,circumference,area);

   
} 
