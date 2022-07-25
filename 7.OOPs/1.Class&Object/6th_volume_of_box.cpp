#include<iostream>
using namespace std;
class Volume{
    public:
    int length,breath,height,vol;
    
    void insert(int l, int b, int h){
        length=l;
        breath=b;
        height=h;
    }
    void display(){
        vol=length*breath*height;
        cout<<"Volume = "<<vol<<endl;
    }
};
int main(){
    Volume v1,v2;
    v1.insert(10,20,15);
    v1.display();
    v2.insert(5,5,5);
    v2.display();
}