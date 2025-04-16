class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;long origin=(long)x;
        if(x<0) return false;
        while(x!=0)
        {
            rev=rev*10+(x%10);
            x/=10;
        }
        if(origin==rev) return true;
        else return false;
    }
};
