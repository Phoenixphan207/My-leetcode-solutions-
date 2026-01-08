class Solution {
public:
    void in(stack<string> &s) {
        while (!s.empty()) {
            std::cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
    int calPoints(vector<string>& ops) {
        stack<string> phat;
        
        for (string i : ops) {
            phat.push(i);

            if (i == "D") {
                phat.pop();
                string res = phat.top();
                int a = std::stoi(res) * 2;
                string t = to_string(a);
                phat.push(t);
                // in(phat);
                // return std::stoi(phat.top());
            }

            if (i == "C") {
                phat.pop();
                phat.pop();
            }

            if (i == "+") {
                phat.pop();
                string s1 = phat.top();
                int t1 = std::stoi(s1);
                phat.pop();
                string s2 = phat.top();
                int t2 = std::stoi(s2);
                phat.pop(); 

                int a = t1 + t2;
                string s = to_string(a);
                phat.push(s2) ;
                phat.push(s1); 
                phat.push(s);

            }
        }
        
        int d = 0;
        while (!phat.empty()) {
            d += std::stoi(phat.top());
            phat.pop();
        }
        return d;
        // return 0;
    }
};