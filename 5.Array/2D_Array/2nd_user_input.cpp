#include<iostream>
using namespace std;
int main(){
    int arr[100][100],row,coulmn;
    cout<<"Enter the size of row = ";
    cin>>row;
    cout<<"Enter the size of column = ";
    cin>>coulmn;
    for(int i=0; i<=row; i++){
        for(int j=0; j<=coulmn; j++){
            cout<<"Value of arr["<<i<<" ]"<<"[ "<<j<<" ] = ";
            cin>>arr[i][j];
        }
    }
}