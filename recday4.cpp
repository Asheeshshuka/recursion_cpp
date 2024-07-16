#include<iostream>
using namespace std;
// void print(int arr[],int index,int n)
// {
//     if(index==n){
//         return n;
//     }
// cout<<arr[index]<<" ";
// print(arr,index+1,n);
// }

// int main(){
// int arr[]={1,2,3,4,5};
// print(arr,0,5);
// }
//print arr in reverse
// void print(int arr[],int index)
// {
//     if(index==-1){
//         return ;
//     }
// cout<<arr[index]<<" ";
// print(arr,index-1);
// }

// int main(){
// int arr[]={1,2,3,4,5};
// print(arr,4);
// }
//sum of all element
// int sum(int arr[],int index,int n)
// {
//     if(index==n){
//         return 0 ;
//     }
//     return arr[index]+sum(arr,index+1,n);

// }

// int main(){
// int arr[]={1,2,3,4,5};
// cout<<sum(arr,0,5);
// }
//find min in array;
int mini(int arr[],int index,int n)
{
    if(index==n-1){
        return arr[index] ;
    }
    return min(arr[index],mini(arr,index+1,n));

}

int main(){
int arr[]={1,2,3,4,5};
cout<<mini(arr,0,5);
}