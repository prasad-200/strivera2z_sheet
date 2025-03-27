#include<bits/stdc++>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
   cout<<"frequencies are:"<<endl;
   for(auto it:mp){
      cout<it.first<<" -> "
   }
}