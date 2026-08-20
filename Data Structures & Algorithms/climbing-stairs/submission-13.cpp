class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int first = 1, second = 1, res;
        for(int i = 2; i <= n; i++){
            res = first + second;
            second = first;
            first = res;
        }
        return res;
    }
};
