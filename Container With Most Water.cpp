class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int area=(end-start)*(min(height[end],height[start]));


        while(start<end)
        {
            int t=min(height[end],height[start]);
            area=max(area,(end-start)*(t));
           while (height[start] <= t && start < end) start++;
        while (height[end] <= t && start < end) end--;



        }
        return area;
    }
};
