//Method - 1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    void rotateone(int arr[], int n){
        int i,temp;
        temp=arr[0];
        for(i=0; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[i]=temp;
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        for(int i=0; i<d; i++){
            rotateone(arr,n);
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends



// Method - 2
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
     
        else
            return gcd(b, a % b);
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        d = d % n;
        int g_c_d = gcd(d, n);
        for (int i = 0; i < g_c_d; i++) {
            /* move i-th values of blocks */
            int temp = arr[i];
            int j = i;
     
            while (1) {
                int k = j + d;
                if (k >= n)
                    k = k - n;
     
                if (k == i)
                    break;
     
                arr[j] = arr[k];
                j = k;
            }
            arr[j] = temp;
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends