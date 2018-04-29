class Solution {
public:
    int arrangeCoins(int n) {
        return sqrt(((long long)n * 2) + .25) - .5;
    }
};
