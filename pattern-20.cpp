#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
     //for upper pattern 
    
    //stars
    for(int i=0;i<n;i++){
       for(int j=0;j<(i+1);j++){
           cout<<"* ";
       }
       //spaces
       for(int j=0;j<(2*n-(2*(i+1)));j++){
           cout<<"  ";
       }
       //stars
       for(int j=0;j<(i+1);j++){
           cout<<"* ";
       }
    cout<<endl;
    }
    
   // for lower pattern 
   
    for(int i=1;i<n;i++){
        //stars
      for(int j=0;j<n-i;j++){
          cout<<"* ";
      }
      //spaces
      for(int j=0;j<2*i;j++){
          cout<<"  ";
      }
      //stars
      for(int j=0;j<n-i;j++){
          cout<<"* ";
      }
    cout<<endl;
    }
    return 0;
}
