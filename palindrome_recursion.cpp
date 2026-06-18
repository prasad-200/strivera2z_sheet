#include<bits/stdc++.h>
using namespace std;

void func(int i,string &ori){
   int len=ori.length();
   if(i==len){
    return;
   }
   func(i+1,ori);
   ori[(len-1)-i]=ori[i];
}

int main(){
    string ori,rev,ori1;
    cout<<"Enter the string : "<<endl;
    cin>>ori;
    ori1=ori;
    func(0,ori);
    if(ori1==ori){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}
