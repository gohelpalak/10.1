//TNRS
//Q.1 Write a Program to find the cube of a given number using UDF.
#include<stdio.h>
sum()
{
	int a,cube;
	printf("Enter value A =  ");
	scanf("%d",&a);
	
	cube=a*a*a;
	return cube;
	
	
}
void main()
{	
//	int cube;
//	cube=sum();
	printf("sum = %d ",sum());
}