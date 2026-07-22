#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int const dr[5]={0,-1,0,1,0};

    int dfs(int R,int C,int row,int col,vector<vector<int>>&grid){
        grid[row][col]=0;
        int isl=1;
        for(int k=0;k<4;k++){
            int nr=row+dr[k];
            int nc=col+dr[k+1];
            if(nr>=0&&nr<R&&nc>=0&&nc<C&&grid[nr][nc]==1){
                
               isl += dfs(R,C,nr,nc,grid);
            }
        }
        return isl;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int R=grid.size(),C=grid[0].size();
        int ans=0;
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid[row][col]==1){
                    ans=max(ans,dfs(R,C,row,col,grid));
                }
            }
        }
        return ans;
    }
    
};

int main() {
    int R,C;
    cin>> R >>C;
    vector<vector<int>>grid(R,vector<int>(C));
    
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
           cin>> grid[row][col];
            }
        }
    
    Solution obj;
    cout << obj.maxAreaOfIsland(grid);
    return 0;
    

}
