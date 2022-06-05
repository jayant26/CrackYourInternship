class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int>mp;
        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if((mp[target-nums[i]]))
               {
                    if(target-nums[i]==nums[i])
                    {
                        if(mp[nums[i]]>1)
                        {
                            ans.push_back(i);
                        }
                    }
                    else
                    {
                        if(ans.size()==2)
                            break;
                        else
                            ans.push_back(i);
                    }
                }




        }
        return ans;

    }
};
