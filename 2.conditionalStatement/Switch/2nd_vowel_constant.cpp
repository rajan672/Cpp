#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character = ";
    cin>>ch;
    switch (ch){
        case 'a':
            cout<<"Vowel.";
            break;
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Constant.";
            break;
    }
}