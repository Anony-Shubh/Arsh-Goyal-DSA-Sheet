class Solution {
public:
    int maximumProduct(vector<int>& arr) {
       int n = arr.size()-1;
       sort(arr.begin(),arr.end());
       return max(arr[n]*arr[n-1]*arr[n-2],arr[0]*arr[1]*arr[n]); 
    }
};