#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("8th_input.txt","r",stdin);
        freopen("8th_output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }else{
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}