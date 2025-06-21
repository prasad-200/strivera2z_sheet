//brute force 
//tc-o(n) sc-o(n)
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>si;
        string ans;
        int i=0;
        for(auto it:s){
            if(it=='('){
                if(!si.empty()){//prints only when its not a outer bracket 
                   ans+='(';
                }
                si.push('(');
            }
            else if(it==')'){
                si.pop();
                if(!si.empty()){//prints only when there are more than one open brackets in the stack
                     ans+=')';
                }
            }
        }
   return ans;
    }
};
lass Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>si;
        string ans;
        int i=0;
        for(auto it:s){
            if(it=='('){
                if(!si.empty()){
                   ans+='(';
                }
                si.push('(');
            }
            else if(it==')'){
                si.pop();
                if(!si.empty()){
                     ans+=')';
                }
            }
        }
   return ans;
    }
};
//optimal approch
//tc-o(n) sc-o(1)
#include<bits/stdc++.h>
using namespace std;

string outerparenthesisremoval(string s){
    string ansstr;
    int i=0;
    int depth=0;
    while(s[i]!='\0'){  //TC ---O(String lenght)
        if(s[i]=='('){
            if(depth>0){ //makes sure outer parenthesis doesnt get printed   
                ansstr+=s[i]; //stores as soon as we encounter (
            }
            depth++;
        }
        else if(s[i]==')'){
            if(depth>1){
                ansstr+=s[i];
            }
            depth--;
        }
        i++;
    }
    return ansstr;
}

int main(){
    string s,ansstr;
    cout<<"Enter the valid balanced parenthesis string(only '(' or ')' ):"<<endl;
    cin>>s;
    ansstr=outerparenthesisremoval(s);
    cout<<"string after removing outer parenthesis is: "<<ansstr<<endl;
   return 0;
}

