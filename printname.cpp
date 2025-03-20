#include<bits/stdc++.h>
using namespace std;

void func(int n){
   if(n==0){
    return;
   }
   cout<<"Placement chaiye"<<endl;
   func(n-1);
}

int main(){
    int n;
    cout<<"Enter the number of times : ";
    cin>>n;
    func(n);
    return 0;
}