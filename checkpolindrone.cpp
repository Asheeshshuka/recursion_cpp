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
//iterative way using 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
        cin>>n;
    int rev=0;
    while(n!=0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;
        }
        if(n==rev)
       cout<< "polindrone"<<endl;
       else
       cout<<"not polindrone"<<endl;
        return 0;
}
