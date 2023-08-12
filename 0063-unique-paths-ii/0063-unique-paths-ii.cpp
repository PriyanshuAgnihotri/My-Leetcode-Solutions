class Solution {
public:
    vector<vector<int>> dp;
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        dp = vector<vector<int>>(m + 1, vector<int>(n + 1, -1));
        return solve(0, 0, obstacleGrid, m, n);
    }
    
    int solve(int i, int j, vector<vector<int>>& matrix, int m, int n) {
        if (i < 0 || j < 0 || i >= m || j >= n || matrix[i][j] == 1) return 0;
        if (i == m - 1 && j == n - 1) return 1;
        if (dp[i][j] != -1) return dp[i][j];
        matrix[i][j] = 1;
        int ans = solve(i, j + 1, matrix, m, n) + solve(i + 1, j, matrix, m, n);
        matrix[i][j] = 0;
        return dp[i][j] = ans;
    }
};