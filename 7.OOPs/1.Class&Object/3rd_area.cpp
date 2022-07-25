#include<iostream>
using namespace std;
class FArea{
    public:
        int len,breath,area;
    
    void rect(int l , int b){
        area=l*b;
        cout<<"Area of Rectangle = "<<area<<"\n";
    }
};
int main(){
    FArea rec1,rect2;
    //rec1.len=10;
    //rec1.breath=10;
    rec1.rect(10,20);
    rect2.rect(20,30);
}