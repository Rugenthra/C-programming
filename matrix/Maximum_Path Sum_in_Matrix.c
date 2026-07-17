#include <stdio.h>

int r,c;

void findmax(int arr[],int row,int dp[][c]){
    int fmax=dp[row][0],smax=-1,ind=0;

    for(int j=1;j<c;j++){
        if(dp[row][j]>fmax){
            smax=fmax;
            fmax=dp[row][j];
            ind=j;
        }
        else if(dp[row][j]>smax){
            smax=dp[row][j];
        }
    }

    arr[0]=fmax;
    arr[1]=smax;
    arr[2]=ind;
}

int main(){

    scanf("%d%d",&r,&c);

    int mat[r][c],dp[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
            if(i==0)
                dp[i][j]=mat[i][j];
        }
    }

    int arr[3];

    for(int i=1;i<r;i++){
        findmax(arr,i-1,dp);

        for(int j=0;j<c;j++){
            if(j==arr[2])
                dp[i][j]=mat[i][j]+arr[1];
            else
                dp[i][j]=mat[i][j]+arr[0];
        }
    }

    findmax(arr,r-1,dp);
    printf("%d",arr[0]);

    return 0;
}
