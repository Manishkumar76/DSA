#include<iostream>
using namespace std;

//definition of function
int odd_even(int n){
    if(n&1){ //for odd
        return 1;
    }
    else{ //for even
        return 0;
    }
}

int main(){

    int n;
    cout<<"enter any number--> ";
     cin>>n;
   int ans= odd_even(n); //calling function
   if(ans==1){
    cout<<n<<" is a odd number"<<endl;
   }
   else{
    cout<<n<<" is a even number"<<endl;
   }
}