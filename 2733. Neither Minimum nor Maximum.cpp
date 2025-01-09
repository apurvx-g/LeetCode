class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2)
        return -1;
        int m=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=m && nums[i]!=mi)
            {
                ans=nums[i];
                break;
            }
        }
        if(ans==0)
        return -1;
        else
        return ans;
    }
};