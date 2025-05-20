class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        for(int i=0;i<nums.size();i++)
        {
            xor2=xor2^nums[i];
            xor1=xor1^(i);
        }
        xor1=xor1^(nums.size());
        return (xor1 ^ xor2);

    }
};