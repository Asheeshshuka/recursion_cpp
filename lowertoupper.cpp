#include<iostream>
using namespace std;
//using recursion
void lowertoupper(string &str,int index){
    if(index==-1){
        
        return ;
    }
        str[index]='A'+str[index]-'a';
        lowertoupper(str,index-1);//mai to change ho gya ab ange wale ko change kro
 }
 int main()
 {  //lowercase to  upper
string str="rohit";
lowertoupper(str,4);
cout<<str<<endl;
}