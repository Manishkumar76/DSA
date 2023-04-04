#include<iostream>
using namespace std;

//fuction to calculate factorial 
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

//function to calulate nCr
int nCr(int n,int r){
    int ans=(factorial(n)/(factorial(n-r)*factorial(r)));
    return ans;
}

int main(){

    int n;
    cout<<"enter the value of n--> ";
    cin>>n;
    int r;
    cout<<"enter the value of r--> ";
    cin>>r;
   int res= nCr(n,r);
   cout<<"the ans of "<<n<<"C"<<r<<" is "<<res;

}