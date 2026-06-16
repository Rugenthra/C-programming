#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int res[col][row];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            res[j][row-1-i]=arr[i][j];
        }
    }
    
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
