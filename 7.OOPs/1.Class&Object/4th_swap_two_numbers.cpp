#include<iostream>
using namespace std;
class Swap{
    public:
        int num1,num2,temp;
    void swapp(){
        cout<<"Before Swap."<<endl<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl; 
        temp=num1;
        num1= num2;
        num2=temp;
        cout<<"After swap."<<endl<<"Num1 = "<<num1<<endl<<"Num2 = "<<num2<<endl;
    }
};
int main(){
    Swap s1;
    s1.num1=20;
    s1.num2=30;
    s1.swapp();
}