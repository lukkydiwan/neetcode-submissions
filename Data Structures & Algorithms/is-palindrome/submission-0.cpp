class Solution {
public:
    bool isalpha(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
            return 1;
        }
        return 0;
    }
    bool isPalindrome(string s) {
        for(auto &x:s){
            if(x>='A' && x<='Z'){
                x+='a'-'A';
            }
        }
        int st=0,end=s.size()-1;
        while(st<=end){
            while(st<end && !isalpha(s[st])){
                st++;
            }
            while(st<end  && !isalpha(s[end])){
                end--;
            }
            if(s[st]!=s[end])return 0;
            st++;
            end--;
        }
        return 1;

    }
};
