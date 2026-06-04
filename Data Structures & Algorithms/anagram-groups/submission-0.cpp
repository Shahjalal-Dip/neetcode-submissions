class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> gA;
        
        unordered_map<string,vector<string>> match;
        
        for(auto& w : strs){
            string word = w;
            sort(word.begin(), word.end());
            match[word].push_back(w);
        }

        for(auto& s : match){    
            gA.push_back(s.second);
        }
        return gA;
    }
};
