//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution {
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int BinarySearch(int arr[],int start,int end,int X ){
        // for(int i=0;i<N;i++){
    
        //   if(arr[i]==K)
        //      return 1;
         
        // }
        // return -1;
        if(start>end)
         return -1;
       int mid=start+(end-start)/2;
    
       if(arr[mid]==X)
        return 1;

    else if(arr[mid]<X)
      return BinarySearch(arr, mid+1,end,X);
     else 
       return  BinarySearch(arr, start,mid-1,X);
  }
  

int searchInSorted(int arr[], int N, int K){
    return BinarySearch(arr,0,N-1,K);
 }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends
