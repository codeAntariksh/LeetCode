class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> temp(m);
	    for(int i = 0; i < m ; i++)
	    {
	    	temp[i] = triangle[m-1][i];
	    }
	    for(int i=m-2;i>=0;i--)
	    {
	      vector<int> cur(i+1);
	      for(int j = 0; j <= i ; j++){
	      	cur[j] = triangle[i][j] + min(temp[j],temp[j+1]);
	      }
	      temp = cur;
	    }
	    cout<<temp[0]<<endl;
        return temp[0];
    }
};
