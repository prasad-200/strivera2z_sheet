#include <iostream>
using namespace std;
int func(int n){
    int last,secondlast;
   if(n==0||n==1){
       return n;
   }
   last=func(n-1);
   secondlast=func(n-2);
   return last+secondlast;
}
int main(){
  int n;
  cout<<"Enter the number upto which you want fibo series:"<<endl;
  cin>>n;
   func(n);
    return 0;
}