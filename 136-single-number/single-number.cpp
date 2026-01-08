class Solution {
public:
    int count(vector<int>& n, int t) { 
        int s  =n.size();
        int d=0;
        for (int i =0 ; i<s; i++) {
            if (n[i] == t) 
                d++;
        }
        return d;
    }
    int singleNumber(vector<int>& nums) {
        int d=0;
       
        for (int i =0; i< nums.size(); i++) {
            if (count(nums, nums[i]) == 1) {
                d= nums[i];
                
            }
        }
        return d;
       }
};