#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Method - 1 :- Using Auto keyword
    vector<int> arr2;
    for(int i=1; i<5; i++){
        arr2.push_back(i);
    }

    //auto keyword: The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer.
    /* for(auto j=arr2.begin(); j != arr2.end(); j++){
        cout<<*j<<" ";
    } */
    //OUTPUT :- 1 2 3 4 5

    //Method - 2 :- Using Iterator keyword
    vector<int>::iterator it;
    for(it=arr2.begin(); it != arr2.end(); it++){
        cout<<*it<<" ";
    }
    //OUTPUT :- 1 2 3 4 5

    return 0 ;
}