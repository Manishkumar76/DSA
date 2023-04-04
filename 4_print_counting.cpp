#include<iostream>
using namespace std;

void print_counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the range of counting--> ";
    cin>>n;

    print_counting(n);
}