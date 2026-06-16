#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sumdiag1=0,sumdiag2=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(i==j){
             sumdiag1+=arr[i][j];
           }
        
          if(j==row-i-1){
             sumdiag2+=arr[i][j];
         }
            
        }
        
    }
    printf("%d",sumdiag1+sumdiag2);
    

    return 0;
}
