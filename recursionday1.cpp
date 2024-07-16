// #include <iostream>
// using namespace std;
//int main(){
// void fun3(int n){
//     cout<<n<<" "<<"days left for birthday"<<" "<<endl;
// }
// void fun2(int n){
//     cout<<n <<" "<<"days left for birthday"<<" "<<endl;
// }
// void fun1(int n){
//     cout<<n<<" "<<"days left for birthday"<<endl;
// }
// void fun0(int n){
//     cout<<n<<" "<<"HAPPY  birthday!";
// }

// int main() {
//     fun3(3);
//    fun2(2);
//    fun1(1);
//    fun0(0);

//     return 0;
// }
// for(int i=5;i>0;i--){
//     cout<<i<<" days left for birthday!"<<" ";
// }
// cout<<"happy birthday"<<" "<<"/n";
//}
#include<iostream>
using namespace std;
// void fun50(int n){

//     if(n==0){
//         cout<<"Happy birthday!"<<" "<<endl;
//         return;
//     }
//     cout<<n<<"Days left for birthday!"<<" "<<endl;
//     fun50(n-1);
// }
// int main(){
//     fun50(50);
// }
void print(int n){
    //base case
    if(n==2){
        cout<<2<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-2);

}
int main(){
    print(50);
}