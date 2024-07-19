//www.programiz.com/online-compiler/60nKLd10PULoq// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void subsetsum(int arr[], int index, int n,int sum){
    if(index==n){
        cout<< sum<<endl;
        return;
    }
    //no
    subsetsum(arr,index+1,n,sum);
    //yes
    subsetsum(arr,index+1,n,sum+arr[index]);
    
}

int main() {
  int arr[]={3,4,5};
  subsetsum(arr,0,3,0);
  
}