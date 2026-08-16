class Solution {
public:
    // int common(int x , int y) {
    //     string s1 = to_string(x);
    //     string s2 = to_string(y);
    //     int left = 0;
    //     int right = 0;

    //     string res = "";

    //     while (left < s1.length() && right < s2.length()) {
    //         if (s1[left] == s2[right])  
    //             res += s1[left];
    //         else break;

    //         left ++;
    //         right ++;
    //     }

    //     if (res == "") return 0;
    //     int phat = 0;
    //     for (int i = 0 ; i < res.length() ; i++) {
    //         phat += (res[i] - '0') * pow(10 , res.length() - i - 1);
    //     }

        
    //     return (to_string(phat)).length();
    // }

    
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        if (arr1.empty() || arr2.empty()) return 0;

        unordered_set<string> prefix1;

        for (int num : arr1) {
            string s = to_string(num);
            string prefix = "";
            for (char c : s) {
                prefix += c;         
                prefix1.insert(prefix); 
            }
        }

        int max_ans = 0;
        for (int i : arr2) {
            string s = to_string(i);
            string prefix = "";
            for (char c: s) {
                prefix += c;
                auto it = prefix1.find(prefix);

                if (it != prefix1.end()) {
                    max_ans = max(max_ans , (int)prefix.size());
                }
                else continue;
            }
        }

        return max_ans;
    }
};