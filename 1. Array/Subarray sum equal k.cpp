class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0)
        {
            return 0;
        }

        unordered_map<int,int> mymap;
        int currSum=0;
        int i = 0;
        int count = 0;

        while(i<n)
        {
            currSum += nums[i];
            if(currSum==k)
            {
                count += 1;
            } if (mymap.find(currSum-k)!=mymap.end())
            {
                count += mymap[currSum-k];
            }
            mymap[currSum] += 1;
            i += 1;
        }
        return count;
    }
};