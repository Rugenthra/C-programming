#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dr[5] = {0, -1, 0, 1, 0};
    void dfs(int R, int C, int row, int col, vector<vector<int>>& grid) {
        grid[row][col] = 1;
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dr[i + 1];

            if (nr >= 0 &&
                nr < R &&
                nc >= 0 &&
                nc < C &&
                grid[nr][nc] == 0) {

                dfs(R, C, nr, nc, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {

        int R = grid.size();
        int C = grid[0].size();
        for (int col = 0; col < C; col++) {
            if (grid[0][col] == 0)
                dfs(R, C, 0, col, grid);
            if (grid[R - 1][col] == 0)
                dfs(R, C, R - 1, col, grid);
        }
        for (int row = 0; row < R; row++) {

            if (grid[row][0] == 0)
                dfs(R, C, row, 0, grid);

            if (grid[row][C - 1] == 0)
                dfs(R, C, row, C - 1, grid);
        }
        int ans = 0;
        for (int row = 1; row < R - 1; row++) {
            for (int col = 1; col < C - 1; col++) {
                if (grid[row][col] == 0) {
                    ans++;
                    dfs(R, C, row, col, grid);
                }
            }
        }
        return ans;
    }
};
int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<int>> grid(R, vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }
    Solution obj;
    cout << obj.closedIsland(grid);
    return 0;
}
