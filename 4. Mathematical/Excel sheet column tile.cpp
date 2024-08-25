class Solution {
public:
    string convertToTitle(int CN) {
       string res;
       while(CN>0)
       {
        CN--;
        int rem = CN%26;
        char ch = rem+'A';
        res.push_back(ch);
        CN /= 26;
       } 
    reverse(begin(res),end(res));   
    return res;
    }
};