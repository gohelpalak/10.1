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
