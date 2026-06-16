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
       for(int j=i+1;j<n;j++){
          if(arr[i][j]!=arr[j][i]){
              printf("the matrix is not symmetric");
              return 0;
          }
       }
   }
       printf("symmetric");
       return 0;
   }
