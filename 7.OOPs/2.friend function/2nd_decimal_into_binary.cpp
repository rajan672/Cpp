#include<iostream>
using namespace std;
class convert{
    //int arr[100];
    friend int dec(convert);
};
int dec(convert c){
    int re,n,arr[100];
    cout<<"enter the value of N = ";
    cin>>n;
    for(int i=0; n>0; i++){
        arr[i]= n%2;
        n = n/2;
    }
    cout<<"Binary of Given Number is =";  
    for(int i=0; i>=0; i++){
        cout<<arr[i];
    }
    return 0;
}
int main(){
    convert c1;
    cout<<"......Decimal to Binary....\n";
    dec(c1);
}