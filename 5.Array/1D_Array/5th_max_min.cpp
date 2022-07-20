#include<iostream>
using namespace std;
int main(){
    int arr[100],n,max=0,min;
    cout<<"Enter the size of array = ";
    cin>>n;
    for(int i=0; i<=n; i++){
        cout<<"Values of arr[ "<<i<<" ] = ";
        cin>>arr[i];
    }
    for(int j=0; j<=n; j++){
        if(max < arr[j]){
            max= arr[j];
        }
        if(min > arr[j]){
            min= arr[j];
        }
    }
    cout<<"Max value is "<<max<<endl;
    cout<<"Min value is "<<min;
}