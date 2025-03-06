#include <iostream>
using namespace std;
int main() {
    int n1,n2,gcd=0;
    cout<<"Enter the number 1:"<<endl;
    cin>>n1;
    cout<<"Enter the number 2:"<<endl;
    cin>>n2;
    for(int i=1;i<min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<"The gcd of "<<n1<<" and "<<n2<<" is: "<<gcd<<endl;

    return 0;
}
