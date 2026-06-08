class Solution {
public:
    bool isPalindrome(string s) {
        string merge;
        for(char ch : s){
            if(isalnum(ch)) merge += tolower(ch);
        }
        int str = 0, end = merge.length()-1;
        while(str<end){
            if(merge[str]!=merge[end]) return false;
            str++,end--;
        }

        return true;
    }
};
