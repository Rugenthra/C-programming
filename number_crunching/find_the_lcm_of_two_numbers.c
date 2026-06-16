#include <stdio.h>

int main()
{
   
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    
    if (a == 0 || b == 0) {
        printf("0");
        return 0;
    }
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("%d",x*y/a);

    return 0;
}
