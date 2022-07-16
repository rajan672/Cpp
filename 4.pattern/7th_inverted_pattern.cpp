#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("7th_input.txt","r",stdin);
        freopen("7th_output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}