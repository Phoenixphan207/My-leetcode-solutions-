    class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.length();
            int curr = 0;
            int ans = k;
            string res = "";
            for (int right  = 0 ; right <  n; right ++) {
                if (blocks[right] == 'W') {
                    curr ++ ;
                }

                if (right >= k ) {
                    if (blocks[right - k] == 'W'){
                        curr --;
                    }
                }

                if (right >= k-1)
                    ans = min(curr, ans);
            }
            return ans;
        }
    };