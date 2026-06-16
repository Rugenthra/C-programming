#include <stdio.h>
int main(){
    
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int isToeplitz=1;
    
    for(int i=0;i<row-1;i++){
        for(int j=0;j<col-1;j++){
            if(arr[i][j]!=arr[i+1][j+1]){
                isToeplitz=0;
                break;
            }
        }
        if(!isToeplitz)break;
    }
    
    if(isToeplitz)
        printf("The matrix is toeplitz\n");
        
        else{
            printf("the matrix is not toeplits");
        }


    return 0;
}

