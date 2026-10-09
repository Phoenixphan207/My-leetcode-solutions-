class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> c(n + 1, 0);
        vector<int> res;

        int left = 0;
        int right = 0;
        while (left < A.size() && right < B.size()) {
            int d = 0;
            c[A[left]] ++;
            c[B[right]] ++;

            for (int i : c) {
                if (i == 2) d ++;
            }
            res.push_back(d);
            left ++;
            right ++;
        }

       
        return res;

        
        return c;
    }
};