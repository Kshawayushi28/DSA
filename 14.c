//write a function that accept linked list as an argument and calculate sum of its first and last node.

#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*start=NULL;
void create(int n)
{
    struct node *tmp, *i;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = n;
    tmp->next = NULL;
    if (start == NULL) {
        start = tmp;
    } else {
        i = start;
        while (i->next != NULL) {
            i = i->next;
        }
        i->next = tmp;
    }
}

void sum()
{
	struct node *i,*tmp;
	tmp=start;
	while(i->next>=NULL)
	{
		if(i->next==NULL)
		{
			tmp=tmp+i->info;
			printf("%d",tmp);
		}
		i=i->next;
	}
	i->next=tmp;
}
int main()
{
	create(1);
    create(2);
    create(3);
    create(4);
    create(5);

    // Calculate and print the sum of the first and last node
    sum();

    return 0;
}
