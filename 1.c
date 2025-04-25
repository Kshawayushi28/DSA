//implement stack using array

#include<stdio.h>
#include<stdlib.h>
#define size 5
int stk[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("\n stack overflow");
		return;
	}
	top++;
	stk[top]=value;
}
int pop()
{
	if(top==-1)
	{
		printf("\stack underflow");
		return 0;
	}
	int value=stk[top];
	top--;
	return value;
}
void show()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%4d",stk[i]);
	}
}
int main()
{
	int n,ch;
	do{
		printf("\n1...PUSH\n2...POP\n0...EXIT");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:exit(0);
				break;
			case 1:printf("\nenter a no.");
				scanf("%d",&n);
				push(n);
				printf("\nstack status:");
				show();
				break;
			case 2:n=pop();
				if(n!=0)
				{
					printf("remove item=%d",n);
					printf("\nstack status:");
					show();
				}
				break;
		}
	}while(1);
}
