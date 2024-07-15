class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // int maxi=INT_MIN;
        int maxprofit=0;
        int mini=INT_MAX;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        mini=min(mini,nums[i]);
        maxprofit=max(maxprofit,nums[i]-mini);
       }
       return maxprofit;
    }
};