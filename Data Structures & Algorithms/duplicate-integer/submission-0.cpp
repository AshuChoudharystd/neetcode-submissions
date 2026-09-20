class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            if(mp.count(a)) return true;
            mp[a]++;
        }
        return false;
    }
};