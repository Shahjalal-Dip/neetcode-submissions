class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
           for(string s : strs){
             encode+=to_string(s.length());
             encode+="#";
             encode+=s;
           }
           return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode_strings;
         string tracker="";
         int x=0;
         while(x<s.length()){
           int len = 0;
           while(s[x]!='#'){
            len = len * 10 + (s[x]-'0');
            x++;
           }

            tracker = s.substr(x+1, len);
            decode_strings.push_back(tracker);
            tracker="";
            x+=len;
            x++;
        }
        return decode_strings;
    }
};
