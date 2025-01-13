class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>m;
        for(int i=0; i<nums.size(); i++)
        m[nums[i]]++;
        int ma=0;
        for(auto i: m)
        {
            if(i.second>ma)
            ma=i.second;
        }
        int sum=0;
        for(auto i: m)
        {
            if(i.second==ma)
            sum+=i.second;
        }
        return sum;
    }
};