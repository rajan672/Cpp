//A particular constructor used for the creation of an existing object. The copy constructor is used to initialize the thing from another of the same type.
#include <iostream>
using namespace std;
class Base{
    public:
    int x;
    Base(int a){ //parameterized constructor.
        x=a;
        cout<<"parameterized constructor..."<<x<<endl;
    }

    Base(Base &cop){ // copy constructor  
        x=cop.x;
        cout<<"copy constructor  ..."<<x<<endl;
    }
};
int main(){
    //Base b1 = Base(20);  // Calling the parameterized constructor.  
    Base b1(40);  // Calling the parameterized constructor.  

    Base b2(b1); //  Calling the copy constructor.  By passing as parameters.
    //Base b2 = b1; //  Calling the copy constructor.  using Operater "=" 
}
