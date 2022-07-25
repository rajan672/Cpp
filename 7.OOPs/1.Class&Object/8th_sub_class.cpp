#include<iostream>
using namespace std;
class parent{
    public:
    void funparent(){
        cout<<"This is parent class."<<endl;
    }
};
class child : public parent{
    public:
        void funchild(){
            cout<<"This is child class.";
        }
    };
int main(){
    parent p1;
    p1.funparent(); //function of the parent class by the object of the parent class
    child c1;
    c1.funchild(); //function of the child class by the object of the child class
    c1.funparent(); //function of the parent class by the object of the child class
}