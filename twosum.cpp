class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out(2);
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            int c = target - nums.at(i);
            if(hash.find(c) != hash.end()){
                out[0] = hash[c];
                out[1] = i;
                return out;
            }
            hash[nums[i]] = i;
        }
        return out;
    }
};
