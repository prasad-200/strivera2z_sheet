#include<iostream>
using namespace std;

int main(){
    int rem,num,num1,res=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    num1=num;
    while(num1!=0){
        rem=num1 % 10;
        res=res*10+rem;
        num1=num1/10;
    }
    if(res==num){
        cout<<"palindrome"<<endl;
    }
     else{
         cout<<"not palindrome";
     }
    return 0;
}
