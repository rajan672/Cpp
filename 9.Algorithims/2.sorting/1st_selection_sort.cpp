#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    selection_sort(arr,n);

    for(int j=0; j<n; j++){
        cout<<arr[j]<<endl;
    }
}

//Time complexity = order of N^2.
//Space complexity = order of N.