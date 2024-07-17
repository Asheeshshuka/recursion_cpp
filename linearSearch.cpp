#include<iostream>
using namespace std;
bool linearSearch(int arr[],int X,int index,int N){
    if(arr[index]==N)
        return 1;
    
if(arr[index]==X)
    return 1;
    else
     return linearSearch (arr,X,index+1,N);
  
}
int main(){
int arr[]={2,4,7,3,11,8,12};
int X=8;
cout<<linearSearch(arr,X,0,7)<<endl;
}