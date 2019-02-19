#include <stdio.h>

double find_x(double coeff_x, double coeff_y, double coeff_z, double value, double x, double y, double z)
{
	return ((value/coeff_x) - ((1/coeff_x)*((coeff_y*y) + (coeff_z*z)))); 
}

double find_y(double coeff_x, double coeff_y, double coeff_z, double value, double x, double y, double z)
{
	return ((value/coeff_y) - ((1/coeff_y)*((coeff_x*x) + (coeff_z*z)))); 
}

double find_z(double coeff_x, double coeff_y, double coeff_z, double value, double x, double y, double z)
{
	return ((value/coeff_z) - ((1/coeff_z)*((coeff_x*x) + (coeff_y*y)))); 
}

int main(){
	int iteration, i;
	double coeff_x, coeff_y, coeff_z, value, coeff_x1, coeff_y1, coeff_z1, value1, coeff_x2, coeff_y2, coeff_z2, value2, x,y,z,x1,y1,z1;
	printf("This is a program to find the Jacobi iteration method");
	printf("\nEnter the coefficient of x: ");
	scanf("%lf", &coeff_x);
	printf("\nEnter the coefficient of y: ");
	scanf("%lf", &coeff_y);
	printf("\nEnter the coefficient of z: ");
	scanf("%lf", &coeff_z);
	printf("\nEnter the value: ");
	scanf("%lf", &value);
	printf("Your equation is %lfx + %lfy + %lfz = %lf\n", coeff_x, coeff_y, coeff_z, value);

	printf("\nEnter the coefficient of x: ");
	scanf("%lf", &coeff_x1);
	printf("\nEnter the coefficient of y: ");
	scanf("%lf", &coeff_y1);
	printf("\nEnter the coefficient of z: ");
	scanf("%lf", &coeff_z1);
	printf("\nEnter the value: ");
	scanf("%lf", &value1);
	printf("Your equation is %lfx + %lfy + %lfz = %lf\n", coeff_x1, coeff_y1, coeff_z1, value1);

	printf("\nEnter the coefficient of x: ");
	scanf("%lf", &coeff_x2);
	printf("\nEnter the coefficient of y: ");
	scanf("%lf", &coeff_y2);
	printf("\nEnter the coefficient of z: ");
	scanf("%lf", &coeff_z2);
	printf("\nEnter the value: ");
	scanf("%lf", &value2);
	printf("Your equation is %lfx + %lfy + %lfz = %lf\n", coeff_x2, coeff_y2, coeff_z2, value2);

	printf("How many iterations do you want: ");
	scanf("%d", &iteration);
	x = 0, y = 0, z = 0;
	for(i=0;i<=iteration;i++)
	{
		x1=find_x(coeff_x, coeff_y, coeff_z, value, x, y, z);
		y1=find_y(coeff_x1, coeff_y1, coeff_z1, value1, x, y, z);
		z1=find_z(coeff_x2, coeff_y2, coeff_z2, value2, x, y, z);
		printf("x%d = %lf\ny%d = %lf\nz%d = %lf\n", i,x1,i,y1,i,z1);
		x = x1;
		y = y1;
		z = z1;
	}
	return 0;
}
