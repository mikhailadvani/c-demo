#include<stdio.h>

int area_of_rectangle(int length, int breadth)
{
	return length*breadth;
}

int main()
{
	char shape;
	int length, breadth;
	printf("Enter shape whose are is to be calculated[(S)quare, (R)ectangle]:\n");
	scanf("%c",&shape);
	if(shape == 'S')
	{
		printf("Enter side of square: ");
		scanf("%d",&length);
		printf("Area of quadrilateral: %d", area_of_rectangle(length,length));
		printf("\n");
	}
	else if(shape == 'R')
	{
		printf("Enter length of a rectangle: ");
		scanf("%d",&length);
		printf("Enter breadth of a rectangle: ");
		scanf("%d",&breadth);
		printf("Area of quadrilateral: %d", area_of_rectangle(length,breadth));
		printf("\n");
	}
	else
	{
		printf("Invalid shape\n");
	}
	return 0;
}