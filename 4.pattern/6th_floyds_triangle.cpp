#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("6th_input.txt","r",stdin);
        freopen("6th_output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int count=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" "<<count << " ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}