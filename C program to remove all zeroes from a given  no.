#include <stdio.h>

int main()
{
    int n,result=0,place=1;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    
    while(n>0){
        int digit=n%10;
        if(digit!=0){
        result+=digit*place;
        place=place*10;
        }
        n/=10;
    }
    printf("%d",result);


    return 0;
}
