class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0,end=1,count=0;
        while(end<(nums.size()))
        {
            if(nums[start]==nums[end])
            {
                end++;
            }
            else
            {
                int j=start+1;

                nums[j]=nums[end];
                start++;
                count++;
            }
        }
        return count+1;
    }
};
