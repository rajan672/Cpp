//Destructors have the same class name preceded by (~) tilde symbol. It removes and destroys the memory of the object, which the constructor allocated during the creation of an object.
#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"From Constructor."<<endl;
    }
    ~Base(){
        cout<<"This is Destructure."<<endl;
    }
};
int main(){
    Base b,c,d;
}