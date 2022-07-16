#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("5th_input.txt","r",stdin);
        freopen("5th_output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"   ";
            }else{
                cout<<" "<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}