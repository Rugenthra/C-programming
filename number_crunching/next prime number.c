#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    n++;
    while(1){
        int prime=1;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        if(prime&&n>=2){
            printf("%d",n);
            break;
        }
        n++;
    }

    return 0;
}
