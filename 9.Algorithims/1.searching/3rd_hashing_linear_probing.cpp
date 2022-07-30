#include <bits/stdc++.h>
using namespace std;

int insert(int arr[] , int key , int size){
    int hash_value= key%size;
    int index=hash_value;

    while(arr[index] != -1){
        index=(index+1)%size;
        if(index == hash_value){
            cout<<"Hash Table is Full"<<endl;
            return 0;
        }
    }
    arr[index] = key;
    return 1;
}

/* int delet(int arr[] , int key , int size){
    int hash_value = key%size;
    int index= hash_value;

    while(arr[index] != key){
        index=(index+1)%size;
        if(index == key){
            cout<<"key is not present."<<endl;
            return 0;
        }
    }
    arr[index]=-1;
    return 1;
} */

int search(int arr[], int key, int size){
    int hash_value=key%size;
    int index = hash_value;

    while(arr[index] != key){
        index=(index+1)%size;
        if(index == hash_value){
            cout<<"search not found.";
            return 0;
        }
    }
    cout<<"search found.";
    return 1;
}
int main(){
    //Array
    int arr[5];
    for(int i=0; i<5; i++){
        arr[i]=-1;
    }

    //Inserting the data i.e Key
    int key;
    for(int i=0; i<5; i++){
        cin>>key;
        insert(arr,key,5);
    }
    
    //printing the Array
    cout<<endl<<endl;
    for(int j=0; j<5; j++){
        cout<<arr[j]<<endl;
    }
    cout<<endl<<endl;

    //Deleting the key in Array
    /* int del_key;
    cin>>del_key;
    delet(arr,del_key,5);

    //Printing after deletion of del_key.
    cout<<endl<<endl;
    for(int j=0; j<5; j++){
        cout<<arr[j]<<endl;
    } */

    //Searching the key in Array
    int search_key;
    cin>>search_key;
    search(arr,search_key,5);

    return 0;
}