#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    int original_n=n;
    while(n>0){
        int lastdigit=n%10;
        sum += pow(lastdigit,3);
        n=n/10;
        cout<<sum<<endl;
    }

    if(sum == original_n){
        cout<<"Number is Armastron.";
    }else{
        cout<<"Number is not Armastron.";
    }

    return 0;
}