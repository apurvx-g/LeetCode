class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool ans=true;
        if(nums.size()<2)
        return ans;
            for(int i=1; i<nums.size(); i++)
            {
                if(nums[i]%2==0 && nums[i-1]%2==0)
                {
                    ans=false;
                    break;
                }
                else if(nums[i]%2!=0 && nums[i-1]%2!=0)
                {
                    ans=false;
                    break;
                }
                else
                continue;
            }
        return ans;
    }
};