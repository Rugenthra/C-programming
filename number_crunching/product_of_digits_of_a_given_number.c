#include <stdio.h>

int main()
{
    int n,mul=1;
    scanf("%d",&n);
    
    if(n==0){
        mul=0;
    }
    else{
    while(n!=0){
        int rem=n%10;
        mul=mul*rem;
        n/=10;
    }
    }
    printf("%d",mul);
        
    
    return 0;
}
