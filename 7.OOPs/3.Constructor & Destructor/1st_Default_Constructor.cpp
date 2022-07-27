//A constructor is a class which accepts no parameter and is called a default constructor. If there is no constructor for a class, the compiler implicitly creates a default constructor.
#include<iostream>
using namespace std;
class Base{
    public:
    Base(){ //Default Constructor..
        cout<<"from Constructor ...Hello Rajan \n";
    }
};
int main(){
    Base b; //creating an object of Base...And Constructor Invoke itself when object is created.
    Base b1; //Invoking the constructor for the 2nd time.
}