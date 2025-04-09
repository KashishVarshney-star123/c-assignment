#include <stdio.h>
#include "MyHeader.h"
void main(){
	int n,org,rev;
	printf("Enter a Number:");
	scanf("%d",&n);
	
	
	if(n<0){
		printf("Negative no.s are not considered palindrome.\n");
	}
	else if(isPalindrome(n)){
		printf("%d is a Palindrome. \n",n);
	}
	else{
		printf("%d is not a Palindrome.\n",n);
	}
}
