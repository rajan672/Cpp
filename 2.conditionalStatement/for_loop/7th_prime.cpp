#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool flag=true;

    for(int i =2; i<=n; i++){
        if(n%i==0){
            flag=false;
            break;
        }else{
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"Prime Number.";
    }else{
        cout<<"Non Prime Number.";
    }
    return 0;
}