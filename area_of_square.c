#include<stdio.h>

int main()
{
	int length, breadth;
	printf("Enter length of a rectangle: ");
	scanf("%d",&length);
	printf("Enter breadth of a rectangle: ");
	scanf("%d",&breadth);
	printf("Area: %d", length*breadth);
	printf("\n");
	return 0;
}