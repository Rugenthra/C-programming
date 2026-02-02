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
    
    for(int i=0;i<row;i++){
        int min=arr[i][0];
        for(int j=1;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
            
        }
        printf("%d/n",min);
    }
    

    return 0;
}
