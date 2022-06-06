class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       /* BINARY SEARCH APPROACH

       vector<int>ans;
        int mini=nums.size(),maxi= -1;
        sort(nums.begin(),nums.end());
        int  l=0, r=nums.size()-1,m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                mini=m;
                r=m-1;

            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        l=0;
        r=nums.size()-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                maxi=m;
                l=m+1;

            }
            else if(nums[m]>target)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        for(int i=mini;i<=maxi;i++)
        {
            ans.push_back(i);
        }
        return ans;*/

        /* COUNTING SORT APPROACH*/
        vector<int>ans;
        int count=0,less=0;
        for(auto& i:nums)
        {
            if(i==target)
            {
                count++;
            }
            if(i<target)
            {
                less++;
            }
        }
        int i=less;
        while(count!=0)
        {
            ans.push_back(i);
            count--;
            i++;
        }
        return ans;
    }
};
