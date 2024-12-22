class Solution {
public:
    string reverseWords(string s) {
        string st="";
        vector<string> v;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                st = st + s[i];
            }
            else{
                count++;
                if(count==1 && st!=""){
                    v.push_back(st);
                    st = "";
                }
                count=0;
            }
        }
        if(st!="")
        v.push_back(st);
        st = "";
        count=0;
        for(int i=v.size()-1; i>=0; i--){
            if(count<v.size()-1)
            st = st + v[i] + " ";
            else
            st = st + v[i];
            count++;
        }
        return st;
    }
};
