class Solution {
public:
    bool isPalindrome(string s) {
        string S="";
        int i=0;
        while(i<s.size()){
            if(isalpha(s[i])){
                S+=tolower(s[i]);
            }
            else if(isdigit(s[i])){
                S+=char(s[i]);
            }
            i++;
        }
        int l=0,r=S.size()-1;
        while(l<r){
            if(S[l]!=S[r])return false;
            l++;r--;
        }
        return true;
    }
};
