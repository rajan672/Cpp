#include <iostream>
using namespace std;
int main(){  
    int a[10],n,i;    
    system ("cls");  
    cout<<"Enter the number to convert: ";    
    cin>>n;    
    for(i=0;n>0;i++){    
        a[i]=n%2;    
        n=n/2;   
    }    
    cout<<"Binary of Given Number is=";    
    for(i=i-1;i>=0;i--)    
    {    
        cout<<a[i];    
    }    
    return 0;  
}  