#include<bits/stdc++.h>
using namespace std;

int largest_inarr(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
   int n;
   cout<<"Enter the size of array: "<<endl;
   cin>>n;
   int arr[n];
   cout<<"Elements:"<<endl;
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   int largest_el=largest_inarr(arr,n);
   cout<<"The largest element is "<<largest_el<<endl;
    return 0;
}
