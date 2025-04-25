//calculate the average of a linked list: 1 -> 2 -> 3 -> 4 -> 5

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int info;
    struct Node *next;
}*start=NULL;
struct Node* create(int n) {
    struct Node *tmp,*i;
	tmp=(struct Node *)malloc(sizeof(struct Node));
    tmp->info=n;
    tmp->next= NULL;
    if(start==NULL){
    	start=tmp;
	}
    else{
    	i=start;
    	while(i->next!=NULL)
    	{
    		i=i->next;
		}
		i->next=tmp;
	}
}
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->info);
        current = current->next;
    }
    printf("NULL\n");
}
float calculateAverage(struct Node*head) {
    if (head== NULL) {
        return 0; 
    }
    
    int sum = 0;
    int count = 0;
    struct Node* current=head;
    
    while (current != NULL) {
        sum += current->info;
        count++;
        current = current->next;
    }
    
    return (float)sum/count;
}
int main() {
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    printList(start);
    float average = calculateAverage(start);
    printf("Average: %.2f\n", average);
    return 0;
}

