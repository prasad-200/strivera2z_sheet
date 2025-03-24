#include <bits/stdc++.h>
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
    int smallest=mp[arr[0]],largest=mp[arr[0]],smallest_el=arr[0],largest_el=arr[0];
   for(auto it:mp){
    if(it.second < smallest){
        smallest_el=it.first;
        smallest=it.second;
    }
     if(it.second > largest){
        largest_el=it.first;
        largest=it.second;
    }
   }
   
   cout<<"smallest frequency: "<<smallest_el<<" largest frequency: "<<largest_el;
   return 0;
}