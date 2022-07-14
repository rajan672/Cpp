#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int reverse=0;

    while(n>0){
        //get the last digit of the number
        int lastdigit=n%10;//123%10= 12.3 i.e. 3
        reverse = reverse*10 + lastdigit; // 0*10+3 = 3 & 3*10+2 = 32 & 32*10+1= 321

        //To remove the lastdigit from number
        n=n/10; // 123/10=12 & 12/10=1 & 1/10=0
    }
    cout<<reverse;

    return 0 ; 
}