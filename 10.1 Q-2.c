//Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
//TNRS

#include<stdio.h>

ans(int x)
{
	
	if ((x % 3 == 0) && (x % 5 == 0))
	 {
        printf("Number is divisible by 3 and 5");
    }
	 else
	  {
        printf("Number is not divisible by 3 and 5");
    }	
}
void main()
{	
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    ans(a);
}
