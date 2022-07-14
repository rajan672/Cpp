#include<iostream>
using namespace std;
int main(){
    int num,table;
    cout<<"Enter a number = ";
    cin>>num;
    for (int i=1; i<=10; i++){
        table=i*num;
        cout<<table<<"\n";
    }
    
}