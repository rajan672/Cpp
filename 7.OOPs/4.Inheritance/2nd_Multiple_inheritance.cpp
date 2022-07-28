//Multiple inheritance is the process of deriving a new class that inherits the attributes from two or more classes.
#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void getA(int x){
        a=x;
    }
};
class Base2{
    protected:
    int b;
    public:
    void getB(int y){
        b=y;
    }
};

class Derived : public Base1 , public Base2{
    int sum;
    public:
    void display(){
        cout<<"Value of A = "<<a<<endl;
        cout<<"Value of B = "<<b<<endl;
        sum = a + b;
        cout<<"Sum = "<<sum;
    }
};
int main(){
    Derived d1;
    d1.getA(10);
    d1.getB(20);
    d1.display();
}