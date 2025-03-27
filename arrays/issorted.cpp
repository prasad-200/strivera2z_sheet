#include<bits/stdc++.h>
using namespace std;
  int main(){
  int n, flag=0;
  cin>>n;
  vector<int>v(n) ;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=1;i<n;i++) {
     if(v[i]<v[i-1]){
     flag=1;
         break;
     }
     }
     if(flag==0){
     cout<<"sorted";
     }
     else{
     cout<<"not sorted";
     }
     
    return 0;
}
