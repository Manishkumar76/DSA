#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n--> ";
    cin>>n;

    int row=1;
    while(row<=n){

        int col1=1;
        while(col1<=n-row+1){
            cout<<col1<<" ";
            col1++;
        }

        int star=col1;
        while(star<=n+row-1){
            cout<<"* ";
        }
            star++;

        int col3=n-row+1;
        while(col3){
            cout<<col3<<" ";
            col3--;
        }
        row++;
        cout<<endl;
    }
}