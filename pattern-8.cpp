#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
     for(int j=1;j<=(2*n-1);j++){
         if(j<=i-1){
             cout<<"  ";
         }
         if(j>i-1 && j<=(2*n-1)-(i-1)){
             cout<<"* ";
         }
        if(j>(2*n-1)-(i-1)){
           cout<<"  ";
     }
    }
    cout<<endl;
    }
    return 0;
}
