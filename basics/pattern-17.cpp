#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        //spaces
       for(int j=0;j<(n-(i+1));j++){
           cout<<"  ";
       }
       
       //charracters incrementing from A 
       
       for(int j=0;j<(i+1);j++){
           char ch=65+j;
           cout<<ch<<" ";
       }
       //characters dercrementing 
       for(int j=i;j>0;j--){
           char ch=64+j;
           cout<<ch<<" ";
       }
       ///spaces
       for(int j=0;j<(n-(i+1));j++){
           cout<<"  ";
       }
    cout<<endl;
    }
    return 0;
}
