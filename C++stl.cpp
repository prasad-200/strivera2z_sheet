    C++ STL
//self practise
Pairs:
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    pair<string,int>arr[60];
    for(int i=0;i<3;i++){
    cout<<"Enter the name of student "<<i+1<<": ";
    cin>>arr[i].first;
    cout<<endl;
    cout<<"Enter the marks of "<<arr[i].first<<": ";
    cin>>arr[i].second;
    cout<<endl;
    }
    
    cout<<"Name\tMarks"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<"\t"<<arr[i].second<<endl;
    }
    
    return 0;
}
