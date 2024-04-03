#include<stdio.h>
int main(){
	int num;
	long long factorial=1;
	printf("Enter a positive integer:");
	scanf("%d",&num);
	if(num<0){
		printf("ERROR! factorial does not exist for a negative number");
	}else{
		int i=1;
		while(i<=num){
			factorial*=1;
			i++;
			printf("factorial of %d is %lld\n",num,factorial);
		}
	
	}
	
	return 0;
}
