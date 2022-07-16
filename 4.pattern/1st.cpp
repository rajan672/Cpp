#include<iostream>
using namespace std;
int main(){
    int row,col;

    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;

    /* for(int i=0; i<=5; i++){
        for(int j=0; j<=5; j++){
            cout<<"* ";
        }
        cout<<endl;
    } */
}