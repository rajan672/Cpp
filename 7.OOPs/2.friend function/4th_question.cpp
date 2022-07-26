/* STEP 1:  Start the program.
STEP 2:  Declare the class name as Base with data members and member functions.
STEP 3:  The function get() is used to read the 2 inputs from the user.
STEP 4:  Declare the friend function mean(base ob) inside the class.
STEP 5:  Outside the class to define the friend function and do the following.
STEP 6:  Return the mean value (ob.val1+ob.val2)/2 as a float.
STEP 7:  Stop the program. */

#include<iostream>
using namespace std;
class Base{
    float val1,val2;
    float mean;
    public:
    friend void get(Base);
};

void get(Base b){
    cout<<"Enter the 1st value = ";
    cin>>b.val1;
    cout<<"Enter the 2nd value = ";
    cin>>b.val2;
    b.mean = (b.val1+b.val2)/2;
    cout<<"Mean Value is "<< b.mean;
}
int main(){
    Base ob;
    get(ob);
    //cout<<"Mean Value is "<<get(ob);
}



/* class base {
    int val1, val2;
public:

    void get() {
        cout << "Enter two values:";
        cin >> val1>>val2;
    }
    friend float mean(base ob);
};

float mean(base ob) {
    return float(ob.val1 + ob.val2) / 2;
}

void main() {
    clrscr();
    base obj;
    obj.get();
    cout << "\n Mean value is : " << mean(obj);
    getch();
} */