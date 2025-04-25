// you have to given a adjacency matrix display all the connected paths

#include<stdio.h>
int main(){
	int m[][5]={{0,1,0,0,1},{1,0,0,1,1},{0,0,0,1,0},{1,1,1,0,1},{1,1,1,0,1}};
	char c[]={'A','B','C','D','E'};	
	for(int i=0;i<5;i++){
		printf("%c->",c[i]);
		for(int j=0;j<5;j++){
			if(m[i][j]){
				printf("%c->",c[j]);
			}
		}
		printf("\n");
	}	  
}
