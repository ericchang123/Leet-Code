class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = flowerbed.size();
        int count = 0;
        if(!flowerbed[0] && !flowerbed[1]){
            flowerbed[0] = 1;
            count++;
        }
        for(int i = 1; i < sz - 1; i++){
            if(!flowerbed[i-1] && !flowerbed[i] && !flowerbed[i+1]){
                flowerbed[i] = 1;
                count++;
            }
        }
        if(!flowerbed[sz - 1] && !flowerbed[sz - 2]){
            flowerbed[sz - 1] = 1;
            count++;
        }
        return count >= n;
    }
};
