class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> prev(n);
        for(int i=0;i<n;i++)
        {
            prev[i]=matrix[0][i];
        }
        for(int i=1;i<m;i++)
        {
            vector<int> curr(n);
            for(int j=0;j<n;j++)
            {
                int s = prev[j];
                int l = INT_MAX;
                int r = INT_MAX;
                if (j-1>=0) l = prev[j-1];
                if (j+1<n) r = prev[j+1];
                curr[j] = matrix[i][j] + min(s,min(l,r));
            }
            prev = curr;
        }
        int minimum = prev[0];
        for(int i=0;i<n;i++)
        {
            minimum = min(prev[i],minimum);
        }
        return minimum;
    }
};
