#include<iostream>
using namespace std;
int main(){
    int arr[100]={5,10,15,20,25},s,flag=0;
    cout<<"Enter the search value = ";
    cin>>s;
    for(int i=0; i<=4; i++){
        if(s == arr[i]){
            cout<<"item found at position "<<i;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Item not found.";
    }
}