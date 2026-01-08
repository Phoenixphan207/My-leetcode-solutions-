class Solution {
public:
    int maxArea(vector<int>& heights) {
        // set<int> res;
        int n = heights.size();
        int left = 0;
        int ans = 0;
        int right = n-1;
        while (left < right) {
            // res.insert((right - left) * min(heights[left] , heights[right]));
            int s = (right - left) * min(heights[left] , heights[right]);
            ans = max(ans , s);
            if (heights[left] < heights[right]) {
                left ++;
            }
            else  {
                right --;
            }
        }
        return ans;
    }
};
