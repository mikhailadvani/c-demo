#include<stdio.h>

int area_of_rectangle(int length, int breadth)
{
	return length*breadth;
}

void display_area(int area)
{
	printf("Area of quadrilateral: %d", area);
	printf("\n");
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
		display_area(area_of_rectangle(length,length));
	}
	else if(shape == 'R')
	{
		printf("Enter length of a rectangle: ");
		scanf("%d",&length);
		printf("Enter breadth of a rectangle: ");
		scanf("%d",&breadth);
		display_area(area_of_rectangle(length,breadth));
	}
	else
	{
		printf("Invalid shape\n");
	}
	return 0;
}