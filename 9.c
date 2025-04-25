//

#include<stdio.h>
#include<string.h>
struct node{
	char info[20];
	struct node *next;
};
int main()
{
	struct node n1,n2,n3,n4,n5;
	struct node*start=NULL;
	start=&n1;
	strcpy(n1.info,"ram");
	n1.next=&n2;
	strcpy(n2.info,"shyam");
	n2.next=&n3;
	strcpy(n3.info,"rohan");
	n3.next=&n4;
	strcpy(n4.info,"sohan");
	n4.next=&n5;
	strcpy(n5.info,"mohan");
	n5.next=NULL;
	printf("\n list is\n");
	while(start!=NULL)
	{
		puts(start->info);
		start=start->next;
	}
}
