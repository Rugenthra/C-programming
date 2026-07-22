#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dr[5] = {0, -1, 0, 1, 0};
    bool dfs(int R,int C,int row,int col,
             vector<vector<int>>& grid1,
             vector<vector<int>>& grid2){
        grid2[row][col]=0;
        bool isSubIsland=true;
        if(grid1[row][col]==0)
            isSubIsland=false;
        for(int i=0;i<4;i++){
            int nr=row+dr[i];
            int nc=col+dr[i+1];
            if(nr>=0&&nr<R&&
               nc>=0&&nc<C&&
               grid2[nr][nc]==1){
                isSubIsland &= dfs(R,C,nr,nc,grid1,grid2);
            }
        }
        return isSubIsland;
    }
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2){
        int R=grid1.size();
        int C=grid1[0].size();
        int ans=0;
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid2[row][col]==1){
                    if(dfs(R,C,row,col,grid1,grid2))
                        ans++;
                }
            }
        }
        return ans;
    }
};
int main(){
    int R,C;
    cin>>R>>C;
    vector<vector<int>> grid1(R,vector<int>(C));
    vector<vector<int>> grid2(R,vector<int>(C));
    cout<<"Enter Grid1:\n";
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>grid1[i][j];
    cout<<"Enter Grid2:\n";
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>grid2[i][j];
    Solution obj;
    cout<<obj.countSubIslands(grid1,grid2);
    return 0;
}
