// factorial of a no. using recursion

/*
#include<stdio.h>
#include<stdlib.h>
long long factorial(int n){
	if(n==0 || n==1)
		return 1;
	return n*factorial(n-1);	
}
int main(){
	int n;
	printf("enter a no.");
	scanf("%d",&n);
	if(n<0){
		printf("factorial is not defined for negative nos.");
	}
	else{
		printf("factorial of %d id %lld\n",n,factorial(n));
	}
}
*/

//count no. of zeros 

/*
#include<stdio.h>
#include<stdlib.h>
long long countzero(int n){
	if(n==0)
		return 1;
	else if(n<10)
		return 0;
	else 
		return (n%10==0)+countzero(n/10);
}
int main(){
	int n;
	printf("enter a no.");
	scanf("%d",&n);
	if(n==0){
		printf("no.of zeros:1\n");
	}
	else{
		printf("no.of zeros:%d\n",countzero(n));
	}
	return 0;
}
*/

//calculate LCM of two nos.

/*
#include <stdio.h>
int lcm(int a, int b) {
    static int multiple = 0;
    multiple += (a > b) ? a : b; 
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return lcm(a, b); 
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
*/




