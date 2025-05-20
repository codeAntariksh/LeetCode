class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int ct=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ct++;
            }
            if(ct>max)
            {
                max=ct;
            }
            if(nums[i]==0)
            {
                ct=0;
            }
        }
        return max;
    }
};