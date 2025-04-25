//input a string and display it in reverse order using stack.

#include<stdio.h>
#define size 100
char stk[size];
int top=-1;
void push(char c){
	stk[++top]=c;
}
char pop(){
	return stk[top--];
}
void show(){
	int i;
	for(i=top;i>=0;i--){
		printf("%c",stk[i]);
	}
}
int main(){
	int i;
	char s[size];
	printf("\nenter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		push(s[i]);
	}
	while(top!=-1){
		printf("%c",pop());
	}
	show();
}
