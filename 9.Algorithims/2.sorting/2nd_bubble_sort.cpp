#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] , int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    bubble_sort(arr,n);

    for(int j=0; j<n; j++){
        cout<<arr[j]<<endl;
    }
}

//Time complexity = order of N -for best case.
//Time complexity = order of N^2 -for worst case.
//Space complexity = order of N.