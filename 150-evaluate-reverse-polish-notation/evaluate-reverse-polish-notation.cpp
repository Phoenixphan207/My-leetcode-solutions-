class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> res;

        for (auto i : tokens) {
            res.push(i);
            
            if (res.top() == "+") {
                res.pop();
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();

                int t = a+b;
                string s = to_string(t);
                res.push(s);
            }

            if (res.top() == "*"){
                res.pop();
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();

                int t = a*b ;
                string s = to_string(t);
                res.push(s);
            }

            if (res.top() == "-") {
                res.pop();
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();

                int t = b - a;
                string s = to_string(t);
                res.push(s);
            }

            if (res.top() == "/"){
                res.pop();
                int a = stoi(res.top());
                res.pop();
                int b = stoi(res.top());
                res.pop();

                int t = b / a;
                string s = to_string(t);
                res.push(s);
            }

        }

        return stoi(res.top());
        
    }
};
