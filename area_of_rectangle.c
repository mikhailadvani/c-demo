#include<stdio.h>

int area_of_rectangle(int length, int breadth)
{
	return length*breadth;
}

int main()
{
	int length, breadth;
	printf("Enter length of a rectangle: ");
	scanf("%d",&length);
	printf("Enter breadth of a rectangle: ");
	scanf("%d",&breadth);
	printf("Area: %d", area_of_rectangle(length,breadth));
	printf("\n");
	return 0;
}