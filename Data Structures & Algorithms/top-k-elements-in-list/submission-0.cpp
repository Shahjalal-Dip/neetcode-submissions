class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> frq;
        for(int num : nums){
            frq[num]++;
        }

        vector<pair<int,int>> vec(frq.begin(), frq.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second > b.second; 
    });

     vector<int> top;
     for(int i=0; i<k; i++){
       top.push_back(vec[i].first);
     }

     return top;
    }
};
