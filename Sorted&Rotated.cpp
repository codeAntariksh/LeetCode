bool sorted(vector<int>& nums)
{
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            return false;
        }
    }
    return true;
}
void rotate(vector<int>& nums)
{
    int temp=nums[nums.size()-1];
    for(int i=nums.size()-1;i>=1;i--)
    {
        nums[i]=nums[i-1];
    }
    nums[0]=temp;
}
class Solution {
public:
    bool check(vector<int>& nums) {
        int rotation=0;
        while(rotation<=nums.size())
        {
            if(sorted(nums)==true)
            {
                return true;
            }
            else
            {
                rotate(nums);
                rotation++;
            }
        }
        return false;
    }
};
