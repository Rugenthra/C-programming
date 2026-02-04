
#include <stdio.h>
#include<math.h>

int main()
{
    int n,cnt=0,sum=0;
    scanf("%d",&n);
    int temp=n;
    int temp1=n;
    while(n!=0){
        n/=10;
        cnt++;
    }
    
    while(temp>0){
        int rem=temp%10;
        sum+=pow(rem,cnt);
        temp/=10;
    }
    if(temp1==sum){
        printf("amstrong number");
    }
    else{printf("not amstrong");}
    
    

    return 0;
}
