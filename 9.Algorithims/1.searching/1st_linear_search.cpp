#include<iostream>
using namespace std;

//function for Linear Search
//Time Complexity = 0(n).
int linearSearch(int arr[], int n , int search_key){

    for(int j=0; j<n; j++){
        if(arr[j] == search_key){
            return j;
        }
    }
    return -1;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("1st_input.txt","r",stdin);
        freopen("1st_output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int search_key;
    cin>>search_key;

    cout<<linearSearch(arr,n,search_key)<<endl;//Calling the function

    return 0;
}