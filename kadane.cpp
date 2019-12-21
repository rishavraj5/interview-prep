class Solution {
public:
    long inf=(-1)*1e11;
    int maxSubArray(vector<int>& nums) {
        long currMax=inf,currSum=0;
        for(int i=0;i<nums.size();i++)
        {
            currSum+=nums[i];
            currMax=max(currSum,currMax);
            
            if(currSum<0)
                currSum=0;
        }  
        return currMax;
    }
};
