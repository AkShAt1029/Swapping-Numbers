#include<stdio.h>
main()
{
	int a,b;
	printf("Enter your Nos.: ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Before swapping a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping a=%d b=%d",a,b);
	return 0;
}
