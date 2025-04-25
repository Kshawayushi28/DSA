//evaluate postfix expression-53+2*697-/-

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define size 5
int stk[size];
int top=-1;
void push(int n)
{
	stk[++top]=n;
}
int pop()
{
	return stk[top--];
}
int main()
{
	char x[]="53+2*697-/-";
	int i,a,b,c;
	for(i=0;x[i];i++)
	{
		if(isdigit(x[i]))
		push(x[i]-48);
		else{
			b=pop();
			a=pop();
			switch(x[i])
			{
				case '+': c=a+b; break;
				case '-': c=a-b; break;
				case '*': c=a*b; break;
				case '/': c=a/b; break;
				case '%': c=a%b; break; 
				case '^': c=pow(a,b); break;
			}
			push(c);
		}
	}
	printf("\nresult=%d",pop());
}
