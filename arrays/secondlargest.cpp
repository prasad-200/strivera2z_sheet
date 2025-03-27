#include<bits/stdc++.h>
using namespace std;

int secondsmallest_el(int arr[],int n){
    int smallest=arr[0];
    int secondsmallest=arr[1];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }
    if(smallest==secondsmallest){
        return -1;
    }
    return secondsmallest;
}

int secondlargest_el(int arr[],int n){
    int largest=arr[0];
    int secondlargest=arr[1];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
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
   int largest_el=secondlargest_el(arr,n);
   int smallest_el=secondsmallest_el(arr,n);
   cout<<"The second largest element is "<<largest_el<<endl;
   cout<<"The second smallest element is "<<smallest_el<<endl;
    return 0;
}
