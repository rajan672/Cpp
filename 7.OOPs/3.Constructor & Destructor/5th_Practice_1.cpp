//Write a program to print the names of students by creating a Student class. 
//If no name is passed while creating an object of the Student class, 
//then the name should be "Unknown", otherwise the name should be equal to 
//the String value passed while creating the object of the Student class.

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(string n){ //parameterized constructor
        name = n;
    }
    Student(){ //Default Constructor..
        name = "Unknown";
    }
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    Student s1("Rajan");
    s1.display();

    Student s2;
    s2.display();
}