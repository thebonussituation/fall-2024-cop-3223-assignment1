//********************************************************
// assignment1.c
// Author: Adrian Ruiz
// Class: COP 3223, Professor Parra
// Purpose: This program takes in x and y coordinates, and calculates a circle with them under different circumstances. 
// Input: Two sets of cartesian coordinates in an x-y plane.
//
// Output: Distance (diameter), Width (diameter), Height (diameter), Perimeter (circumference), Area (area, obviously).
//********************************************************

//Need this for input-output functions

#include <stdio.h>
#include <math.h>

// Here we define PI as 3.14159. This is not a global variable, like float PI = 3.14 (and the assignment asks for this).

#define PI 3.14159

// Here is our helper function. It will perform the actual calculations for the distance (diameter between the two points), 
// which will be used later in other functions.

double calculateFoundational()
{
	double x1, y1, x2, y2, diameter;
	
		printf("Enter the first point's x-value: ");
		scanf("%lf", &x1);
	
		printf("Enter the first point's y-value: ");
		scanf("%lf", &y1);
	
		printf("Enter the second point's x-value: ");
		scanf("%lf", &x2);
	
		printf("Enter the second point's y-value: ");
		scanf("%lf", &y2);

		printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
		printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	
		diameter = (sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y2)));
	
		return diameter;
}
	
// Now we create this first function.

double calculateHeight()
{
	double diameter = calculateFoundational()
	printf("The height is = %.1lf", diameter);
}





int main(int argc, char **argv)
{
	calculateHeight();
    
	return 0;
}

    