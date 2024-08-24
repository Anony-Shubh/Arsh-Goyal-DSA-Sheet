class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp[n];
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
            if(nums[i]==nums[j])
                {
                    temp[n] = nums[j];
                }
            }
        }
        return temp;
        
    }
};