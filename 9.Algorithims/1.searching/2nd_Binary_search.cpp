#include "iostream"
using namespace std;

//function for Binary Search
//Time Complexity = 0(log n)base2.
int BinarySearch(int arr[] , int n , int search_key){

    int start=0;
    int end=n;

    while(start <=end){
        int mid=(start+end)/2;

        if(arr[mid] == search_key){
            return mid;
        }else if(arr[mid] > search_key){
            end=mid-1;
        }else{
            start= mid+1;
        }
    }

    return -1;
}
int main(){

    #ifndef ONLINE_JUDGE
        freopen("2nd_input.txt","r",stdin);
        freopen("2nd_output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int search_key;
    cin>>search_key;

    cout<<BinarySearch(arr,n,search_key)<<endl;
    return 0;
}