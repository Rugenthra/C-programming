class Solution {
public:
    

    void dfs(vector<vector<char>>&grid,int row,int col,int R,int C){
        grid[row][col]='0';
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};
        for(int k=0;k<4;k++){
            int nr=row+dr[k];
            int nc=col+dc[k];
            if(nr>=0&&nr<R&&nc>=0&&nc<C&&grid[nr][nc]=='1'){
                dfs(grid,nr,nc,R,C);
            }
        }
    }


    int numIslands(vector<vector<char>>& grid) {
        int R=grid.size();
        int C=grid[0].size();
        int islcnt=0;
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                if(grid[row][col]=='1'){
                    islcnt++;
                    dfs(grid,row,col,R,C);
                }
            }
        }
        return islcnt;
    }
};
