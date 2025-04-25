//circular queue.

#include<stdio.h>
#include<stdlib.h>
#define size 5
int arr[size];
int rear=-1,front=-1;
void insert(int n)
{
	if(front==0 && rear==size-1 || rear+1==front)
	{
		printf("\queue overflow");
		return;
	}
	if(rear==-1)
	rear=front=0;
	else if(rear==size-1)
	rear=0;
	else
	rear=rear+1;
	arr[rear]=n;
}
int Delete()
{
	if(front==-1)
	{
		printf("\n queue is empty");
		return 0;
	}
	int value=arr[front];
	if(front==rear)
	rear=front=-1;
	else if(front==size-1)
	front=0;
	else
	front++;
	return value;
}
void show()
{
	int i;
	printf("\n queue status:");
	if(rear>=front)
	{
		for(i=front;i<=rear;i++)
		{
			printf("%4d",arr[i]);
		}
	}
	else
	{
		for(i=front;i<size;i++)
		{
			printf("%4d",arr[i]);
			for(i=0;i<=rear;i++)
			{
				printf("%4d",arr[i]);
			}
		}
	}
}
int main()
{
	int n,ch;
	while(1)
	{
		printf("\n1...INSERT\n2...DELETE\n0...EXIT");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n enter a no.");
				scanf("%d",&n);
				insert(n);
				show();
				break;
			case 2: n=Delete();
				if(n!=0)
				{
					show();
				}
				break;
			case 0: exit(0);
		}
	}
}
