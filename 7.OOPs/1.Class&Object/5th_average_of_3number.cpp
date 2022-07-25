#include<iostream>
using namespace std;
class Average{
    public:
        int num1,num2,num3,avg;
    void Cavg(){
        avg=(num1+num2+num3)/3;
        cout<<"Average of 3 numbers are = "<<avg;
    }
};
int main(){
    Average a1;
    cout<<"Enter Num1 = ";
    cin>>a1.num1;
    cout<<"Enter Num2 = ";
    cin>>a1.num2;
    cout<<"Enter Num3 = ";
    cin>>a1.num3;
    a1.Cavg();
}