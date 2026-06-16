#include <stdio.h>
#include<math.h>

int main(){
    int n,sum=0,fact=1;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int rem=n%10;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
        fact=1;
        n/=10;
    }
    if(temp==sum){
        printf("it's a strong number");
    }
    else{
        printf("not a strong number");
    }
    

   
    return 0;
}
