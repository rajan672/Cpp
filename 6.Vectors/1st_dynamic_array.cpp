#include "iostream"
#include "vector"
using namespace std;

int main(){

    //Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is 
    //inserted or deleted, with their storage being handled automatically by the container
    vector<int> arr1;
    //push_back() – It push the elements into a vector from the back.
    arr1.push_back(10);
    arr1.push_back(20);
    arr1.push_back(30);
    arr1.push_back(40);

    //size() – Returns the number of elements in the vector.
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<endl;
    }
    cout<<endl;

    //REVERSE THE VECTOR.
    //rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    //rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    for(auto i=arr1.rbegin(); i != arr1.rend(); i++){
        cout<<*i<<endl;
    }
    

    return 0;
}