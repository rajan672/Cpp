//A constructor which has parameters is called parameterized constructor. It is used to provide different values to distinct objects.
#include<iostream>
using namespace std;
class Base{
    public:
    int a,b,sum;
    Base(int num1 , int num2){ //parameterized constructor
        a=num1;
        b=num2;
        //cin>>a;
        //cin>>b;
        sum = a+b;
        cout<<sum<<endl;
    }
};
int main(){
    Base b1 = Base(5 , 6); //creating an object of Base and Passing the parameter for parameterized constructor.
    Base b2 = Base(5 , 5); //Passing differtent values.
}