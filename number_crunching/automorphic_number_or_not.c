#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int temp=n;
    int sq=n*n;
    while(n>0){
        if(sq%10!=n%10){
            printf("not automorphic");
            return 0;
        }
        sq/=10;
        n/=10;
    }
    printf("automorphic number");
    


    return 0;
}
