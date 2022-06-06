class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int Tsum=0,sum=0,ans=0,n=nums.size();
        for(auto&i:nums)
        {
            Tsum = Tsum+i;
        }
        for(int i=0;i<n-k;i++)
        {
            sum=sum +nums[i];
        }
        ans=max(ans,Tsum- sum);
        for(int i=n-k;i<n;i++)
        {
            sum=sum+nums[i]-nums[i-(n-k)];
            ans=max(ans,Tsum- sum);
        }
        return ans;
    }
};
