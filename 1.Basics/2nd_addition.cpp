#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("2nd_input.txt","r",stdin);
        freopen("2nd_output.txt","w",stdout);
    #endif
    int num1,num2,sum;
    //cout<<"Enter the 1st number = ";
    cin>>num1;
    //cout<<"Enter the 2nd number = ";
    cin>>num2;
    sum=num1+num2;
    cout<<"Sum = "<<sum;
}