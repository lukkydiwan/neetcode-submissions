class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto x: strs){
            s+=to_string(x.size())+'#'+x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string a="";
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int l=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+l;
            ans.push_back(s.substr(i,l));
            i=j;
        }
        if(a!="")ans.push_back(a);
        return ans; 
    }
};
