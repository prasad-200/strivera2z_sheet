#include<iostream>
using namespace std;

void func(int arr[],int i, int n){
    if(i==n){
      return;
      }
      func(arr,i+1,n);
      cout<<arr[i]<<" ";
      }
int main()
{
    int n;
    cout <<"Enter the number of elements:"<< endl;
    cin >>n;
    int arr[n+2];
    cout<<"Enter the numbers in the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    cout<<"original Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    cout<<"After getting reversed :"<<endl;
    func(arr,0,n);
    return 0;
}