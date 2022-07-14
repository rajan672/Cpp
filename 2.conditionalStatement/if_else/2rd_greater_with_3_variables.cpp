#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the 1st number = ";
    cin>>num1;
    cout<<"Enter the 2nd number =";
    cin>>num2;
    cout<<"Enter the 3rd number = ";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"Greater value is "<<num1;
    }else if(num2>num1 && num2>num3){
        cout<<"Greater value is "<<num2;
    }else{
        cout<<"Greater value is "<<num3;
    }
}