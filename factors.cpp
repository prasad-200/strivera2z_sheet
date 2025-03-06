#include <bits/stdc++.h>
using namespace std;

int main() {
   int a[50];
   int n;
   cout<<"Enter the number:"<<endl;
   cin>>n;
   int k=0;
   for(int i=1;i<=n;i++){
       if(n%i==0){
           a[k]=i;
           k++;
       }
   }
   cout<<"The factors of "<<n<<" are:"<<endl;
   cout<<"[";
   for(int i=0;i<k;i++){
       if(i==k-1){
           cout<<a[i];
           break;
       }
       cout<<a[i]<<", ";
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
         v.push_back(i);
         if(n/i!=i){
             v.push_back(n/i);
         }
      }
 }
 sort(v.begin(),v.end());
 for(auto it:v){
     cout<<(it)<<" ";
 }
  
    return 0;
}
   cout<<"]"<<endl;
    return 0;
}
