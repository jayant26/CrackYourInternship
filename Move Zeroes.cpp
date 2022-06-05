class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0,end=0,count0=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count0++;
            }

        }
        while(end<nums.size())
        {
            if(nums[end]!=0)
            {
               nums[start]=nums[end];
                start++;
                end++;
            }
            else
            {

                end++;
            }

        }
        int n=0;
        while(n<count0)
        {
            nums[nums.size()-1-n]=0;
            n++;
        }
    }
};
