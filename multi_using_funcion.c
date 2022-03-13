#include<stdio.h>
#include<conio.h>
void main()
{	
	int a,b,product;
	printf("Enter two numbers to get product of :");
	scanf("%d%d", &a, &b);
	product=a*b;
	printf("Product of %d and %d is %d", a, b, product);
	getch();
}
	int mul(int x, int y)
{
int p;
p=x*y;
return(p);
}
