#include <stdio.h>
#include "MyHeader.h"
void main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	
	if(isPerfect(n)){
		printf("%d is a Perfect Number.\n",n);
	}
	else{
		printf("%d is not a Perfect Number.\n",n);
	}
}
