
#include <bits/stdc++.h>
using namespace std;

int bs(int arr[],int n,int target,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=floor((low+high)/2);
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        return bs(arr,n,target,mid+1,high);
    }
    else if(target<arr[mid]){
       return bs(arr,n,target,low,mid-1);
    }
    return -1;
}

    int main(){
        int n,target;
        cout<<"Enter the size of array:"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array:"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Enter the target element:"<<endl;
        cin>>target;
        int found_index=bs(arr,n,target,0,n-1);
        if(found_index==-1){
            cout<<"the target element was not found in array "<<endl;
        }
        else{
            cout<<"the target element was found at index "<<found_index<<endl;
        }
        return 0;
    }
    