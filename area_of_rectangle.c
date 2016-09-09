#include<stdio.h>

void area_of_rectangle(int length, int breadth)
{
	printf("Area: %d", length*breadth);
}

int main()
{
	int length, breadth;
	printf("Enter length of a rectangle: ");
	scanf("%d",&length);
	printf("Enter breadth of a rectangle: ");
	scanf("%d",&breadth);
	area_of_rectangle(length,breadth);
	printf("\n");
	return 0;
}