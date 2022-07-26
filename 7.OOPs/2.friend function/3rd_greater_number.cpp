#include <iostream>
using namespace std;
class Greater{
    int num1,num2;
    public:
    friend void compare(Greater);
};
void compare(Greater g){
    cin>>g.num1;
    cin>>g.num2;
    if(g.num1>g.num2){
        cout<<g.num1<<" is Greater.";
    }else{
        cout<<g.num2<<" is Greater.";
    }
}
int main(){
    Greater g1;
    compare(g1);
}