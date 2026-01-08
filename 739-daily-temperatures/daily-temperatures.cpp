class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> idx;
        vector<int> res(n , 0);

        for (int i = 0 ; i < temp.size(); i++) {
           while (!idx.empty() && temp[i] > temp[idx.top()]) {
                res[idx.top()] = i - idx.top();
                idx.pop();
           }
           idx.push(i);
        }
        return res;
    }
};