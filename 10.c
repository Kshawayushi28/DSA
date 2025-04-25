//create a linked listband display it.

#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*start=NULL;
void create(int n)
{
	struct node *tmp,*i;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=n;
	tmp->next=NULL;
	if(start==NULL)
	start=tmp;
	else{
		i=start;
		while(i->next!=NULL)
		{
			i=i->next;
		}
		i->next=tmp;
	}
}
void show()
{
	struct node *i=start;
	while(i!=NULL)
	{
		printf("%4d",i->info);
		i=i->next;
	}
}
int main()
{
	int n;
	char ans;
	do{
		printf("\n enter a no.");
		scanf("%d",&n);
		create(n);
		fflush(stdin);
		printf("\n press y to cont...");
		scanf("%c",&ans);
	}while(ans=='y');
	printf("\n list is:");
	show();
}

