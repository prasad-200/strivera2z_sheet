#include <bits/stdc++.h>
using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(int a[],int n){
   for(int i=0;i<=n-1;i++){
       int j=i;
       while(j>0 && a[j-1]>a[j]){
           int temp=a[j];
           a[j]=a[j-1];
           a[j-1]=temp;
           j--;
       }
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
