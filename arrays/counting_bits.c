#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int bits[n];
	bits[0];
	for(int i=1;i<=n;i++){
	    int temp=i;
	    int cnt=0;
	    while(temp>0){
	        if(temp&1){
	            cnt++;
	        }
	        temp=temp>>1;
	    }
	    bits[i]=cnt;
	   
	}
	
	for(int i=1;i<=n;i++){
	    printf("%d ",bits[i]);
	}

}
