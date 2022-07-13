#include<iostream>
using namespace std;
int main(){
    int num1=10,num2=20;
    cout<<"Before swap."<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    num1= num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After swap."<<endl<<"num1 = "<<num1<<endl<<"num2 = "<<num2;
}