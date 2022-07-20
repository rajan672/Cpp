#include<iostream>
using namespace std;
int main(){
    int arr[100],n,sum=0;
    cout<<"Enter the size of array = ";
    cin>>n;
    for(int i=0; i<=n; i++){
        cout<<"Value for the arr[ "<<i<<" ] = ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum = "<<sum;
}