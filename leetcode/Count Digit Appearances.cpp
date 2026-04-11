class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int>sol=nums;
        int tot=0;
        for(int x: sol){
            if(x==0){
                if(digit==0) tot++;
                continue;
            }
            while(x){
                if(x%10==digit) tot++;
                x/=10;
            }
        }
        return tot;
    }
};©leetcode
