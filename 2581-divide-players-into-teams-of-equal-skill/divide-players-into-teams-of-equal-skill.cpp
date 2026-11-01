class Solution {
public:
    void print(vector<int>& a) {
        for (int i : a) cout << i << " " ;
        cout << endl;
    }

    long long dividePlayers(vector<int>& skill) {
        int n = skill.size() / 2;
        if (skill.empty()) return -1;

        int d = 0;
        for (int i : skill){
            d += i;
        }

        int a = d / n;
        vector<int> res;
        for (int i : skill) {
            if (a - i <= 0) return -1;

            res.push_back(a - i);
        }
        sort(res.begin() , res.end());
        sort(skill.begin() , skill.end());
        if (res != skill) return -1;

        reverse(skill.begin() , skill.end());
        print(res);
        print(skill);
        int left = 0;
        int right = 0;
        long long phat = 0;

        while (left < n) {
            phat += res[left] * skill[right];
            left ++ ; 
            right ++;
        }

        return phat;
    }
};