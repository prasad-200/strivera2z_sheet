#include<iostream>
using namespace std;
int main(){
    int i,sum,n;
    cout<<"enter the limit:"<<endl;
    cin>>n;
    cout<<"limit:"<<n<<endl;
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"sum is:"<<sum<<endl;
}
