#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("2nd_input.txt","r",stdin);
        freopen("2nd_output.txt","w",stdout);
    #endif

    int row,col;

    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row){
                cout<<" * ";
            }else if(j==1 || j==col){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}