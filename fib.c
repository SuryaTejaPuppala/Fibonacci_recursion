//Fibonacci Series using recursion
#include<stdio.h>
void main()
{
	int num,i,Fibo;
	printf("Enter the limit:");
	scanf("%d",&num);
	
	printf("The fibonacci series are:");
	for(i=0; i<num; i++)
	{ 
	Fibo=fibonacci(i);
	printf(" %d\t",Fibo);
	}
}
int fibonacci(int n)
{
	if(n<=1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}
