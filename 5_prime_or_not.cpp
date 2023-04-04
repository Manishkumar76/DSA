#include<iostream>
using namespace std;

int is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
     return 0;
}

int main(){
    int n;
    cout<<"enter any number--> ";
    cin>>n;

    if(is_prime(n)){
        cout<<n<<" is not a prime number."<<endl;
    }
    else{
         cout<<n<<" is a prime number."<<endl;
    }

}