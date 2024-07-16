#include<iostream>
using namespace std;
//using recursion
bool checkpal(string str,int start,int end){
    if(start>=end)//base condition
        return 1;

     if(str[start]!=str[end])//not matched
        return 0;
    
     else
        return checkpal(str,start+1,end-1);//matched
    
}
int main(){
string str=" naman";
cout<<checkpal(str,0,4)<<endl;
}