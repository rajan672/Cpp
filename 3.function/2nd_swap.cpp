#include<iostream>
using namespace std;
void swap(){
    int num1=10,num2=20;
    cout<<"Before Swap \n"<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After swap \n"<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl;
}
int main(){
    swap();
}