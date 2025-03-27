#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(int a[],int n){
    int pos;
    for(int i=0;i<=n-2;i++){
         int min=a[i];
          pos=i;
        for(int j=i;j<=n-1;j++){
         if(a[j]<min){
             min=a[j];
             pos=j;
         }
        }
        int temp=a[i];
          a[i]=min;
          a[pos]=temp;
          print(a,n);
    }
}

int main() {
    // Write C++ code here
    int n,a[30];
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array before sorting:"<<endl;
    print(a,n);
    sort(a,n);
    cout<<"Array after sorting:"<<endl;
    print(a,n);
    return 0;
}
