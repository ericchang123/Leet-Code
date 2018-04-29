class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int arr[256] = {0};
        int count = 0;
        for(int i = 0; i < J.length(); i++){
            if(!arr[J[i]]) arr[J[i]] = 1;
        }

        for(int x = 0; x < S.length(); x++){
            if(arr[S[x]]) count++;
        }
        return count;
    }
};
