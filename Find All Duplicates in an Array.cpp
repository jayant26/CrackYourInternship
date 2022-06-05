class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

    /* vector<int>ans;
        unordered_map<int,int>m;
        for(auto&i:nums)
        {
            m[i]++;
        }
        for(auto&i:nums)
        {
            if(m[i]==2)
            {
                ans.push_back(i);
                m[i]=1;
            }
        }
        return ans;*/
        //above method use extra space as we are using unordered_map;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans.push_back(abs(nums[i]));
            }
            else
            {
                nums[abs(nums[i])-1]= -nums[abs(nums[i])-1];
            }
        }
        return ans;
    }
};
