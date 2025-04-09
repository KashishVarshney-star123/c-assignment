//calculator
int Sum(int x, int y){
	return x+y;
}
int Mul(int x, int y){
	return x*y;
}
int Sub(int x, int y){
	return x-y;
}

//perfect
int isPerfect(int n){
	int i,sum=0;
	for(i=1; i<n; i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return (sum==n);
}

//SimpleInterest
float calculateSimpleInterest(int p, int r, int t){
	return(p*r*t)/100;
}

//palindrome
int isPalindrome(int n){
	int org=n, rev=0, rem;

while(n>0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	return (org==rev);
}
