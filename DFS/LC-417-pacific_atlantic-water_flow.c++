class Solution {
public:
      int dr[5] = {0, -1, 0, 1, 0};

    void dfs(int R, int C,
             int row, int col,
             vector<vector<int>>& heights,
             vector<vector<bool>>& vis)
    {
        vis[row][col] = true;
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dr[i + 1];
            if (nr >= 0 && nr < R &&nc >= 0 &&nc < C &&!vis[nr][nc] &&heights[nr][nc] >= heights[row][col])
            {
                dfs(R, C, nr, nc, heights, vis);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int R = heights.size();
        int C = heights[0].size();

        vector<vector<bool>> pac(R, vector<bool>(C, false));
        vector<vector<bool>> atl(R, vector<bool>(C, false));
        for (int col = 0; col < C; col++)
            dfs(R, C, 0, col, heights, pac);
        for (int row = 0; row < R; row++)
            dfs(R, C, row, 0, heights, pac);
        for (int col = 0; col < C; col++)
            dfs(R, C, R - 1, col, heights, atl);
        for (int row = 0; row < R; row++)
            dfs(R, C, row, C - 1, heights, atl);
        vector<vector<int>> ans;
        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                if (pac[row][col] && atl[row][col]) {
                    ans.push_back({row, col});
                }
            }
        }
        return ans;
    }
    
};


int main(){
    int R,C;
    cin>>R>>C;
    vector<vector<int>> heights(R,vector<int>(C));
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            cin>>heights[i][j];
    Solution obj;
    vector<vector<int>> ans=obj.pacificAtlantic(heights);
    for(auto v:ans){
        cout<<v[0]<<" "<<v[1]<<endl;
    }
    return 0;
}
