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

// Following this is the setup for the inputs, separated as to avoid a print issue when called by the other functions.
// I have made my best attempt, and it is within the parameters of the PDF instructions. 

double calculatex1()
{
	double x1;
	
		printf("Enter the first point's x-value: ");
		scanf("%lf", &x1);
		return x1;
}

double calculatey1()
{
	double y1;
	
		printf("Enter the first point's y-value: ");
		scanf("%lf", &y1);
		return y1;
}

double calculatex2()
{
	double x2;

		printf("Enter the second point's x-value: ");
		scanf("%lf", &x2);
		return x2;
}

double calculatey2()
{
	double y2;
	
		printf("Enter the second point's y-value: ");
		scanf("%lf", &y2);
		return y2;
}

double calculateFoundational(double x1, double y1, double x2, double y2)
{
	double squaredx = (x2 - x1) * (x2 - x1);
	double squaredy = (y2 - y1) * (y2 - y1);
	
	double diameter = sqrt(squaredx + squaredy);
	
	return diameter;
}
	
// Now we create the functions asked for. First, distance.

double calculateDistance()
{
	double x1 = calculatex1();
	double y1 = calculatey1();
	double x2 = calculatex2();
	double y2 = calculatey2();
	double diameter = calculateFoundational(x1,y1,x2,y2);

	printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
	printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	printf("The distance between the two points is = %.1lf\n", diameter);
	return diameter;
}

// If I have grossly misunderstood the assignment, I apologize, but as it stands this seems at best confusing
// because the height and width of a circle is the same as its diameter.

double calculateHeight()
{
	double x1 = calculatex1();
	double y1 = calculatey1();
	double x2 = calculatex2();
	double y2 = calculatey2();
	double diameter = calculateFoundational(x1,y1,x2,y2);

	printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
	printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	printf("The height of the city encompassed by your request is = %.1lf\n", diameter);
	return 1;
}

double calculateWidth()
{
	double x1 = calculatex1();
	double y1 = calculatey1();
	double x2 = calculatex2();
	double y2 = calculatey2();
	double diameter = calculateFoundational(x1,y1,x2,y2);

	printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
	printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	printf("The width of the city encompassed by your request is = %.1lf\n", diameter);
	return 1;
}

double calculateArea()
{
	double x1 = calculatex1();
	double y1 = calculatey1();
	double x2 = calculatex2();
	double y2 = calculatey2();
	double diameter = calculateFoundational(x1,y1,x2,y2);
	double picalculation = PI * pow(diameter,2);
	double area = picalculation/4;

	printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
	printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	printf("The area of the city encompassed by your request is = %.1lf\n", area);
	return 3;
}

double calculatePerimeter()
{
	double x1 = calculatex1();
	double y1 = calculatey1();
	double x2 = calculatex2();
	double y2 = calculatey2();
	double diameter = calculateFoundational(x1,y1,x2,y2);
	double perimeter = PI * diameter;

	printf("Point #1 entered: x1 = %.1lf; y1 = %.1lf\n", x1, y1);
	printf("Point #2 entered: x2 = %.1lf; y2 = %.1lf\n", x2, y2);
	printf("The perimeter of the city encompassed by your request is = %.1lf\n", perimeter);
	return 3;
}





int main(int argc, char **argv)
{
	calculateDistance();
	calculatePerimeter();
	calculateArea();
	calculateWidth();
	calculateHeight();

	return 0;
}
    