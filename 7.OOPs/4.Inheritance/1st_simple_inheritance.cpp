//Single Inheritance
//Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
//when visibility mode is public, then only public members of base class are accessible with the object of derivrd class... But not the private one.
//when visibility mode is private, thenBase class can only be accessed by the member function of derived class. 
#include <iostream>
using namespace std;
class A{
    int len,bre;
    public:
    int Area;
    int input(){
        cout<<"Enter value of Length = ";
        cin>>len;
        cout<<"Enter value of Breath = ";
        cin>>bre;
        Area = len * bre;
        return Area;
    }
};
class Rectangle : public A{
    public:
    void area(){
        //cout<<"Area = "<<Area;
        int value = input();
        cout<<"Area = "<<value;
    }
};
int main(){
    Rectangle r1;
    //r1.input();
    r1.area();
}