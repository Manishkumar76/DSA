#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the integer number--> ";
    cin>>n;
    int ans=0;
    while(n>0){
        int dig=n%10;
        ans=(ans*10)+dig;
        n=n/10;
    }
    cout<<"reverse number is--> "<<ans<<endl;

    if((ans>INT_MAX/10) || (ans<INT_MIN/10)){ 
         //INT_MAX gives maximum limit of int datatype in c++
      cout<<0;
      
    }
    else{
    cout<<1;}
    return 0;

}