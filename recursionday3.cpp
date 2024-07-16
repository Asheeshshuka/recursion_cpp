#include<iostream>
using namespace std;
//recursion
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//    return n*fact(n-1);
// }
// int main(){
//     int n=5;
//     cout<<fact(n);
// }

// }int main(){
//     int n=5;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact<<endl;
//sum of n natural number

// int main(){
//     int n=5;
//     int sum=0;
//     for(int i=0;i<=n;i++){//itearative way
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }
//sum of n number using recursion
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }
// int main(){
//     int n=10;
//     cout<<sum(n)<<endl;
// }
//power of 2 using recursion
// int pow(int num,int n){
//     if(n==0)
//         return 1;
    
//     if(n==1)
//         return num;
    
//     return num*pow(num,n-1);
// }
// int main(){
//     int n=5;
//     cout<<pow(2,n)<<endl;
// }

//sum of square of n numbers
int sqsum(int n){
    if(n==0)
        return 1;
    
    return n*n+sqsum(n-1);
}
int main(){
    int n=5;
    cout<<sqsum(n)<<endl;
}