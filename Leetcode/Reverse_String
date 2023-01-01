class Solution {
public:
    void reverseString(vector<char>& s) {
    //Solution 1
    
        // int i=0,e=s.size()-1;
        // while(i<e){
        //     swap(s[i++],s[e--]);
        // }
        
    //Solution 2
        vector<char> rev;
        for(int i=s.size()-1;i>=0;i--){
            rev.push_back(s[i]);
        }
        s.clear();
        int j=0;
        while(j<rev.size()) s.push_back(rev[j++]);
    }
};
