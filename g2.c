//dfs

#include<stdio.h>
#define size 20
int top=-1;
int stack[size];
void push(int n){
	stack[++top]=n;
}
int pop(){
	return stack[top--];
}
void dfs(int a[][9],int s){
	int visited[9]={0,0,0,0,0,0,0,0,0};
	push(s);
	while(top!=-1){
		s=pop();
		if(visited[s]==0){
			printf("%4d",s);
			visited[s]=1;
		}else{
			continue;
		}
		for(int i=0;i<9;i++){
			if(a[s][i]==1 && visited[i]==0){
				push(i);
			}
		}
	}
}
int main(){
	int a[][9]={{0,1,0,1,1,0,0,0,0},{0,0,1,0,1,0,0,0,0},{0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,1,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,1,0},{0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0}};
	dfs(a,1);
}
