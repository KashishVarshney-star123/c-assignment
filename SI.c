#include <stdio.h>
#include "MyHeader.h"
void main(){
	int p,r,t;
	printf("Enter principal:");
	scanf("%d",&p);
	printf("Enter rate of Interest:");
	scanf("%d",&r);
	printf("Enter time:");
	scanf("%d",&t);
	float interest=calculateSimpleInterest(p,r,t);
	printf("Simple Interest is %.2f\n",interest);
}
