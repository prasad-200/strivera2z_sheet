#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,c=0;
   cout<<"Enter the number: "<<endl;
   cin>>n;
   for(int i=1;i<=n;i++){
       if(n % i==0){
           c++;
       }
   }
   if(c>2){
       cout<<n<<" is not a prime number"<<endl;
   }
   else{
       cout<<n<<" is a prime number"<<endl; 
   }
    return 0;
}
//optimal
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,c=0;
   cout<<"Enter the number: "<<endl;
   cin>>n;
  vector<int>v;
  for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
          c++;
         if(n/i!=i){
             c++;
         }
      }
 }
 if(c>2){
     cout<<"not prime";
 }
 else{
     cout<<"prime";
 }
  
    return 0;
}
