//brute force:
tc-0(n2) sc-o(n)
class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){//if any valid character found 
                int k=i;
                while(k<s.size() && s[k]!=' '){//store the word till we encounter spcae 
                    temp+=s[k];
                    k++;
                }
                i=k;
                v.push_back(temp);
                temp="";
            }
        }

       for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(i!=0){
                ans+=" ";
            }
       }
             return ans;
        }
    };


    //better tc-o(n)
    sc-o(n)

    class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++){
             if(s[i]==' '){//push it as soon as we encounter space 
                if(temp!=""){
                v.push_back(temp);
                temp="";
             }
             }
             else{
                temp+=s[i];//store the word one by one character
             }
             }
         if(temp!=""){
                v.push_back(temp);
                temp="";
             }
       for(int i=v.size()-1;i>=0;i--){
            if(v[i]!=""){
            ans+=v[i];
            if(i!=0){
            ans+=" ";
            }
            }
       }
             return ans;
        }
};

//optimal tc-0(n) tc-o(1)

class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string temp="";
        string ans="";
        for(int i=0;i<s.size();i++){
             if(s[i]==' '){
                if(temp!=""){
                if(ans!=""){
                ans=temp+" "+ans;//stores irectly in ans as we find the space
                }
                else{
                    ans=temp;
                }
                temp="";
             }
             }
             else{
                temp+=s[i];
             }
             }
         if(temp!=""){
                if(ans!=""){
                ans=temp+" "+ans;
                }
                else{
                    ans=temp;
                }
                temp="";
             }
                return ans;
       }
};