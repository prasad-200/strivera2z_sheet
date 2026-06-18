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
   int s=func(n);
   cout<<s;
    return 0;
}
