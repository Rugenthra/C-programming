#include <stdio.h>

int main()
{
   
   int n;
   scanf("%d",&n);
   int arr[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           scanf("%d",&arr[i][j]);
       }
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
          if(i==j&&arr[i][j]!=1){
              printf("not an identity matric");
              return 0;
          }
          if(i != j && arr[i][j] != 0){
                printf("not an identity matrix");
               return 0;
          }
       }
   }
       printf("identity matrix");
       return 0;
   }
