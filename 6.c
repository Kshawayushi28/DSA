//queue using array.

#include<stdio.h>
#include<stdlib.h>
#define size 5
int rear=-1,front=0;
int arr[size];
void insert(int n)
{
	if(rear==size-1)
	{
		printf("queue overflow");
		return;
	}
	rear++;
	arr[rear]=n;
}
int Delete()
{
	if (rear<front)
	{
		printf("\n queue underflow");
		return 0;
	}
	int n=arr[front];
	front++;
	return n;
}
void show()
{
	int i;
	for(i=0;i<=rear;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int n,ch;
	do{
		printf("\n1...INSERT\n2...DELETE\n0...EXIT");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\n enter a no.");
				scanf("%d",&n);
				insert(n);
				show();
				break;
			case 2:n=Delete();
				printf("\ndeleted item:%d",n);
				show();
				break;
			case 0:exit(0);
				break;
		}
	}while(1);
}
