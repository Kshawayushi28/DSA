// Stack

#include<stdio.h>
#include<stdlib.h>
#define size 4

int stk[size];
int top=-1;

void push(int value){
	if(top==size-1){
		printf("\n stack overflow");
		return;
	}
	top++;
	stk[top]=value;
}

int pop(){
	if(top==-1){
		printf("\n stack underflow");
		return 0;
	}
	int value=stk[top];
	top--;
	return value;
}

int main(){
	push(10);
	push(20);
	printf("\n%d",pop());
	push(1);
	push(3);
	push(5);
	push(7);
	printf("\n%d",pop());
	printf("\n%d",pop());
}
