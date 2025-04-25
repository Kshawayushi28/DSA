// Merge sort
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[], int low, int low1, int high1, int high);
void merge_sort(int a[], int low, int high);
void output(int a[],int n);

int main(){
    srand(time(0));
    int a[100],i,n;
    printf("\n enter the size");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
        printf("%4d",a[i]);
    }
    merge_sort(a,0,n-1);
    printf("\nSorted array: ");
    output(a,n);

}

void merge(int a[],int low,int high,int low1,int high1){
	int temp[100],i,j,k;
	i=k=low;
	j=low1;
	while(i<=high && j<=high1){
		if(a[i]<a[j])
		temp[k++]=a[i++];
		else
		temp[k++]=a[j++];
	}
	if(i<=high){
		for(;i<=high;i++)
		temp[k++]=a[i];
	}
	if(j<=high1){
		for(;j<=high1;j++)
		temp[k++]=a[j];
	}
	for(int i=low;i<=high1;i++){
		a[i]=temp[i];
	}
}

void merge_sort(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,mid+1,high);
	}
}

void output(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%4d",a[i]);
	}
}


