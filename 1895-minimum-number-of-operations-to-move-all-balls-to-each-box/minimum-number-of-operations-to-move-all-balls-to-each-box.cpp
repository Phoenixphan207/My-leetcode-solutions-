class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> a; 

        for (int i = 0; i < boxes.length() ; i++) {
            int t = 0;
            for (int j = 0; j < boxes.length() ; j++) {
                if (boxes[j] == '1') {
                    t += abs(i-j);
                }
            }
            a.push_back(t);
        }
        return a;
    }
};