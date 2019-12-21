class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int res=0;
        vector<vector<int>> dp;
        dp.resize(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=matrix[i][j];
                if(i&&j&&dp[i][j])
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                res+=dp[i][j];
            }
        }
        return res;
    }
};
