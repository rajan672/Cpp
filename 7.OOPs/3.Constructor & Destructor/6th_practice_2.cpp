//Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. 
//The class has three constructors which are :
//1 - having no parameter - values of both length and breadth are assigned zero.
//2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
//3 - having one number as parameter - both length and breadth are assigned that number.
//Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include<iostream>
using namespace std;
class Rectangle{
    int length, breadth; //two data members
    public:
    Rectangle(){ //Default Constructor..
        length = 4;
        breadth = 5;
    }

    Rectangle(int r , int b){ //parameterized constructor ...having two numbers as parameters .
        length = r;
        breadth = b;
    }

    Rectangle(int s){ //parameterized constructor ...having one numbers as parameters .
        length = s;
        breadth = s;
    }
    void area(){ //function to calculate the area
        int areas= length * breadth;
        cout<<"Area = "<<areas<<endl;
    }
};
int main(){
    Rectangle r1; //Default Constructor..
    r1.area();

    Rectangle r2(6,6); //parameterized constructor
    r2.area();

    Rectangle r3(7);
    r3.area();
}