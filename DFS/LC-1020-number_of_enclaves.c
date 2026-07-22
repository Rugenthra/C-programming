#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dr[5] = {0, -1, 0, 1, 0};
    void dfs(int R, int C, int row, int col, vector<vector<int>>& grid) {
        grid[row][col] = 0;
        for (int i = 0; i < 4; i++) {
            int nr = row + dr[i];
            int nc = col + dr[i + 1];
            if (nr >= 0 &&
                nr < R &&
                nc >= 0 &&
                nc < C &&
                grid[nr][nc] == 1) {

                dfs(R, C, nr, nc, grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int R = grid.size();
        int C = grid[0].size();
        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                if ((row == 0 || row == R - 1 ||
                     col == 0 || col == C - 1) &&
                    grid[row][col] == 1) {
                    dfs(R, C, row, col, grid);
                }
            }
        }
        int ans = 0;
        for (int row = 0; row < R; row++) {
            for (int col = 0; col < C; col++) {
                ans += grid[row][col];
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
    cout << obj.numEnclaves(grid);
    return 0;
}
