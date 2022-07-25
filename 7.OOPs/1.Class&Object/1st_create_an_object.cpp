#include<iostream>
using namespace std;
class student{ //class with class name = student
    public:
    
        int id; //data member(also instance variable)
        string name; //data member(also instance variable) 
};

int main(){
    student s1; //creating an object of Student   
    s1.id=101; //Initializing the value of id in the student class with the help of object.
    s1.name= "Rajan"; //Initializing the value of name in the student class with the help of object.
    cout<<s1.id<<endl<<s1.name<<endl;

    student s2,s3; //creating 2nd & 3rd object of Student class respectively.
    s2.id= 102;
    s2.name="Raju";

    s3.id=103;
    s3.name="sonam";
    cout<<s2.id<<endl<<s3.id<<endl;  
    cout<<s2.name<<endl<<s3.name<<endl;
}