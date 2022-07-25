#include<iostream>
using namespace std;
class Employee{  //class with class name = Employee
    public:
        int id; //data member(also instance variable)
        string name; //data member(also instance variable)

    // Inserting data through method/function.
    //This function is also calles Member function.   The function inside the class are called member function.
    void initialize(int i, string n){
        id=i;
        name=n;
    }

    //displaying the data through method/function.
    //This function is also calles Member function. The function inside the class are called member function.
    void display(){
        cout<<id<<endl<<name<<endl;
    }
};
int main(){
    Employee e1,e2;
    e1.initialize(101,"rajan");
    e1.display();

    e2.initialize(102,"Sonam");
    e2.display();
}