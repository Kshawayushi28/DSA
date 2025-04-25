//infix to postfix-A+(B*C-(D/E^F)*G)*H.

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define size 100
char stk[size];
int top=-1;
void push(char n)
{
	stk[++top]=n;
}
char pop()
{
	return stk[top--];
}
char peep()
{
	return stk[top];
}
int prec(char c)
{
	int v=0;
	switch(c)
	{
		case '+': 
		case '-': v=1; break;
		case '%': v=2; break;
		case '*': 
		case '/': v=3; break; 
		case '^': v=4; break;
	}
	return v;
}
int main()
{
	char y[size];
	char x[size]="A+(B*C-(D/E^F)*G)*H";
	push('(');
	strcat(x,")");
	int i,j=0;
	char ch;
	for(i=0;x[i];i++)
	{
		if(isalpha(x[i]))
		y[j++]=x[i];
		else
		{
			if(x[i]=='(')
			push(x[i]);
			else if(x[i]==')')
			{
				while(1)
				{
					ch=pop();
					if(ch=='(')
					break;
					y[j++]=ch;
				}
			}
			else
			{
				if(prec(peep())>=prec(x[i]))
				y[j++]=pop();
				push(x[i]);
			}
		}
	}
	y[j]='\0';
	puts(y);
}
