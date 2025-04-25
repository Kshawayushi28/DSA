// Binary search
#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int n,int key){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
	if(arr[mid]==key)
		return mid;
	else if(arr[mid]<key)
		low=mid+1;
	else
		high=mid-1;
	}
	return -1;
}
int main(){
	int n,key,result;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d sorted elements:",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the key to search:");
	scanf("%d",&key);
	result=binary_search(arr,n,key);
	if(result!=-1)
		printf("key %d found at the index %d.\n",key,result);
	else
		printf("key %d not found.\n",key);
	return 0;
}
