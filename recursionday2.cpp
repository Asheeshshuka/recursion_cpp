#include<iostream>
using namespace std;//print 1ton
// void print(int num,int N){
//     if(num==N)
//     {
//         cout<<num<<endl;
//              return;
//     }
//      cout<<num<<endl;
//      print (num+1,N);
     
// }

// int main(){
//     int N=6;
//     int num;
//     print (1,N);
// }
//print nto 1;
// void print(int n){
//     if(n==1){
//         cout<<1;
//         return;
//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n=5;
//     print(5);
// }
//print even
void printeven(int num,int N){
if(num>N){
    cout<<num;
    return;
}
cout<<num<<endl;
printeven(num+2,N);

}
int main(){
    
    int N;
    cin>>N;
    if(N%2==1)
        N--;
    printeven(2,N);
}