//bfs

#include<stdio.h>
#define size 20
int rear=-1;
int front=0;
int arr[size];
void enque(int n){
	arr[++rear]=n;
}
int deque(){
	return arr[front++];
}
void bfs(int a[][9],int s){
	int visited[9]={0,0,0,0,0,0,0,0,0};
	enque(s);
	while(rear>=front){
		s=deque();
		if(visited[s]==0){
			printf("%4d",s);
			visited[s]=1;
		}else{
			continue;
		}
		for(int i=0;i<9;i++){
			if(a[s][i]==1 && visited[i]==0){
				enque(i);
			}
		}
	}
}
int main(){
	int a[][9]={{0,1,0,1,1,0,0,0,0},{0,0,1,0,1,0,0,0,0},{0,0,0,0,0,1,0,0,0},{0,0,0,0,0,0,1,0,0},{0,0,0,0,0,1,0,1,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,1,0,0,1,0},{0,0,0,0,0,0,0,0,1},{0,0,0,0,0,0,0,0,0}};
	bfs(a,1);
}
