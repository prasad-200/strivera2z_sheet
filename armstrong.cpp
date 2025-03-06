#include <bits/stdc++.h>
using namespace std;
int isArmstrong(int n,int c){
    int rem,n1,sum=0;
    n1=n;
    while(n!=0){
        rem=n % 10;
        sum=sum+pow(rem,c);
        n=n/10;
    }
    if(sum==n1){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n,m,n1,c=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    n1=n;
    while(n1!=0){
        c++;
        n1=n1/10;
    }
    m=isArmstrong(n,c);
    if(m==1){
        cout<<n<<" is a armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not a armstrong number"<<endl;
    }
    return 0;
}
