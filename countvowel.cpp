#include<iostream>
using namespace std;
//using recursion
int count(string str,int index){
    if(index==-1)//base condition
        return 0;

     if(str[index]=='a'|| str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')//
        return 1+count(str,index-1);
    
     else
        return count(str,index-1);//matched
    
}
int main(){
string str=" naman";
cout<<count(str,4)<<endl;
}