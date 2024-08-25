class Solution 
{
 public:
  int majorityElement(vector<int>& nums) 
  {
    int count = 0;
    int element;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            element = nums[i];
        }
        if(nums[i]==element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return element;
  }
  
};