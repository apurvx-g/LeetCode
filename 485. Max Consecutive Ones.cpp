class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma=0,count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            count++;
            else count=0;
            if(count>ma)
            ma=count;
        }
        return ma;
    }
};