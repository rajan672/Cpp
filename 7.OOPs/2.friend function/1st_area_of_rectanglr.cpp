#include<iostream>
using namespace std;
class Rect{ //class rectangle
    protected: //all data member and data function are under protectio.
    int len=10,bre=4,area;
    friend int funrect(Rect);  //declaring the friend function...inside class.
};
int funrect(Rect r){  //defining the friend function outside the  class...'r' is an object to access the data member and data function outside the class.
        //cin>>r.len;
        //cin>>r.bre;
        r.area = r.len*r.bre; //acessing the data members which is under protected specifier..
        return r.area;
    }
int main(){
    Rect r1;
    //r1.len=10;
    //r1.bre=5;
    cout<<"Area = "<<funrect(r1); //passing the 'r1' object and calling the friend function.
}