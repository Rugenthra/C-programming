#include <stdio.h>

int main(){
   int n,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(n%i==0){
           printf("%d ",i);
           sum+=i;
       }
       
   }
   printf("\n%d",sum);
   
    return 0;
}
