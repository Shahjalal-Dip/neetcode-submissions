class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> occu;
        for(int x=0; x<nums.size(); x++){
            occu[nums[x]]++;
        }
        for(auto o : occu){
            if(o.second>1) return true;
        }

        return false;
    }
};