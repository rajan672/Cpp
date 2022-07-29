#include <bits/stdc++.h>
using namespace std;

int logbase(int A,int B){
    return log(A+B) /log(2);
}
int main(){
    int t,A,B,n,P,M,K;
    cin>>t;
    int count=0;
    while(t!=0){
        cin>>A>>B;
        while(A!=B){
            if(A>B){
                B++;
            }else if(A<B){
                K=A-B;
                n=logbase(A,B);
                P=B-2^n;
                M=2^(n+1)-B;
                if(K<P && K<<M){
                    A++;
                }
            }else{
                A=A|B;
            }
            count++;
        }
        t--;
    }
    cout<<count;

}