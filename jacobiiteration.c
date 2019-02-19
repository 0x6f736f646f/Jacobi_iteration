#include <stdio.h>

float find_x(float coeff_x, float coeff_y, float coeff_z, float value, float x, float y, float z)
{
	return ((value/coeff_x) - ((1/coeff_x)*((coeff_y*y) + (coeff_z*z)))); 
}

float find_y(float coeff_x, float coeff_y, float coeff_z, float value, float x, float y, float z)
{
	return ((value/coeff_y) - ((1/coeff_y)*((coeff_x*x) + (coeff_z*z)))); 
}

float find_z(float coeff_x, float coeff_y, float coeff_z, float value, float x, float y, float z)
{
	return ((value/coeff_z) - ((1/coeff_z)*((coeff_x*x) + (coeff_y*y)))); 
}

int main(){
	int iteration, i;
	float coeff_x, coeff_y, coeff_z, value, coeff_x1, coeff_y1, coeff_z1, value1, coeff_x2, coeff_y2, coeff_z2, value2, x,y,z,x1,y1,z1;
	printf("This is a program to find the Jacobi iteration method");
	printf("\nEnter the coefficient of x: ");
	scanf("%f", &coeff_x);
	printf("\nEnter the coefficient of y: ");
	scanf("%f", &coeff_y);
	printf("\nEnter the coefficient of z: ");
	scanf("%f", &coeff_z);
	printf("\nEnter the value: ");
	scanf("%f", &value);
	printf("Your equation is %fx + %fy + %fz = %f\n", coeff_x, coeff_y, coeff_z, value);

	printf("\nEnter the coefficient of x: ");
	scanf("%f", &coeff_x1);
	printf("\nEnter the coefficient of y: ");
	scanf("%f", &coeff_y1);
	printf("\nEnter the coefficient of z: ");
	scanf("%f", &coeff_z1);
	printf("\nEnter the value: ");
	scanf("%f", &value1);
	printf("Your equation is %fx + %fy + %fz = %f\n", coeff_x1, coeff_y1, coeff_z1, value1);

	printf("\nEnter the coefficient of x: ");
	scanf("%f", &coeff_x2);
	printf("\nEnter the coefficient of y: ");
	scanf("%f", &coeff_y2);
	printf("\nEnter the coefficient of z: ");
	scanf("%f", &coeff_z2);
	printf("\nEnter the value: ");
	scanf("%f", &value2);
	printf("Your equation is %fx + %fy + %fz = %f\n", coeff_x2, coeff_y2, coeff_z2, value2);

	printf("How many iterations do you want: ");
	scanf("%d", &iteration);
	x = 0, y = 0, z = 0;
	for(i=0;i<=iteration;i++)
	{
		x1=find_x(coeff_x, coeff_y, coeff_z, value, x, y, z);
		y1=find_y(coeff_x1, coeff_y1, coeff_z1, value1, x, y, z);
		z1=find_z(coeff_x2, coeff_y2, coeff_z2, value2, x, y, z);
		printf("x%d = %f\ny%d = %f\nz%d = %f\n", i+1,x1,i+1,y1,i+1,z1);
		x = x1;
		y = y1;
		z = z1;
	}
	return 0;
}
