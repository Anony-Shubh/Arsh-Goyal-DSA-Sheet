class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        unordered_map<int,int>mp;
        int sum = 0;
        mp[0]++;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            
        int prefixSum = mp[(sum%k+k)%k];
            if(prefixSum>0)
            {
                count += prefixSum;
            }
            prefixSum++;
        }
        return count;
    }
};