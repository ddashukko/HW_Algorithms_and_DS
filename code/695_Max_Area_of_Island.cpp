#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
        int rows = grid.size(), cols = grid[0].size();
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 1) {
                    max_area = max(max_area, dfs(grid, r, c, rows, cols));
                }
            }
        }
        return max_area;
    }
    
    int dfs(vector<vector<int>>& grid, int r, int c, int rows, int cols) {
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0) return 0;
        grid[r][c] = 0;
        return 1 + dfs(grid, r + 1, c, rows, cols) + dfs(grid, r - 1, c, rows, cols) 
                 + dfs(grid, r, c + 1, rows, cols) + dfs(grid, r, c - 1, rows, cols);
    }
};

int main() {
    return 0;
}