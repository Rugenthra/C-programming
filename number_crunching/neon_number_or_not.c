#include <stdio.h>

int main() {
	int n,sum=0;
	scanf("%d",&n);
	int temp=n;
	
	int sq=n*n;
	while(sq>0){
	    int rem=sq%10;
	    sum+=rem;
	    sq/=10;
	}
	if(temp==sum){
	    printf("Neon number");
	}
	else{
	    printf("not a Neon number");
	}
	
		return 0;
}
