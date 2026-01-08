class Solution {
public:
     bool check(char s1, char s2) {
        switch (s1) {
            case '{':
                return (s2 == '}');
            case '[':
                if (s2 == ']') 
                    return true;
            case '(':
                return (s2 == ')');
            default :
                return false;
        }
    }
    bool isValid(string s) {
        stack<char> res;
        for (int i = 0 ; i <s.length() ; i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                res.push(s[i]);
            }
            else {
                if (res.empty() == true) {
                    return false;
                }
                if (check(res.top() , s[i]) == false) return false;
                res.pop();
            }
        }
        if (res.empty())
            return true;
        return false;
    }
};