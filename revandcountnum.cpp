#include<iostream>
using namespace std;

int main(){
    int rem;
    int num;
    int res=0;
    int c=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    while(num!=0){
        rem=num%10;
        c++;
        res=res*10+rem;
        num=num/10;
    }
    cout<<res<<" "<<c;
    return 0;
}
