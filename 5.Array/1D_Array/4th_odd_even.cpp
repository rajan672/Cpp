#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"Enter the size of number = ";
    cin>>n;
    for(int i=0; i<=n; i++){
        if(i%2 == 0){
            cout<<i<<" is Even number."<<"\n";
        }else{
            cout<<i<<" is Odd number."<<"\n";
        }
    }
}