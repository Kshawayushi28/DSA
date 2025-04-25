//convert decimal to binary.

#include<stdio.h>
#define size 100
int stk[size];
int top=-1;
void push(int c)
{
	stk[++top]=c;
}
int pop()
{
	return stk[top--];
}
int main()
{
	int n;
	printf("enter a no:");
	scanf("%4d",&n);
	while(n)
	{
		push(n%2);
		n=n/2;
	}
	while(top!=-1)
	{
		printf("%d",pop());
	}
}
