//linked list initialisation.

#include<stdio.h>
struct node{
	int info;
	struct node* next;
};
int main()
{
	struct node n1,n2,n3,n4;
	struct node* start=NULL;
	start=&n1;
	n1.info=10;
	n1.next=&n2;
	n2.info=20;
	n2.next=&n3;
	n3.info=30;
	n3.next=&n4;
	n4.info=40;
	n4.next=NULL;
	while(start!=NULL)
	{
		printf("%4d",start->info);
		start=start->next;
	}
}
