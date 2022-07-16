#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("4th_input.txt","r",stdin);
        freopen("4th_output.txt","w",stdout);
    #endif

    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}