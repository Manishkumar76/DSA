#include<iostream>
#include<bitset>
using namespace std;

int main(){

 int n;
 cout<<"enter the integer value--> ";
 cin>>n;
 int m=n;
   
   int mask=0;
                      
   while(n!=0){
    mask=(mask<<1)|1;  // mask use to comapre (&) with n integer 
    n=n>>1;
   }
//    bitset<8> binary(n);
    int ans = (~m)&mask;
    cout<<"Compliment--> "<<ans;

//    cout<<binary<<endl;
}