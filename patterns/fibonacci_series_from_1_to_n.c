#include <stdio.h>

int main()
{
   int n;
   int a=0,b=1,next=0;
   scanf("%d",&n);
   if(n==0||n==1){
      return 0;
   }
   
   while(a<=n){
       printf("%d ",a);
       next=a+b;
       a=b;
       b=next;
   }
    return 0;
}
