#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n--> ";
    cin>>n;
    
    int row=1;
    int count=1;
    
    while(row<=n){
        int space=0;
        // loop for space 
        while(space<n-row){
            cout<<" ";
          space++;
        }
             int col=space;
        while(col<n){
            cout<<count;
            count++;
            col++;
        }
       
        cout<<endl;
         row++;

    }

}