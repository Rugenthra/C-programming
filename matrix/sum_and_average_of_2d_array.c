#include <stdio.h>

int main()
{
    int row,col,sum=0;
    float average;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    
printf("%d\n",sum);
average=(float)sum/(row*col);
printf("%.2f",average);
    return 0;
}
