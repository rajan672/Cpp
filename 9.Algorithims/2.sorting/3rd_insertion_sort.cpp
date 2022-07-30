#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){

    for(int j=1; j<n; j++){
        int value=arr[j];
        while(j>0 && arr[j-1]>value){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=value;
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

//Time complexity = order of N -for best case.
//Time complexity = order of N^2 -for worst case.
//Space complexity = order of N.