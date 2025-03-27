#include<bits/stdc++.h>
using namespace std;

string outerparenthesisremoval(string s){
    string ansstr;
    int i=0;
    int depth=0;
    while(s[i]!='\0'){  //TC ---O(String lenght)
        if(s[i]=='('){
            if(depth>0){   
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

