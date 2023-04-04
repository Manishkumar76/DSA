#include<iostream>

using namespace std;

int linear_search(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            cout<<"Succesfully founded! the location of "<<key<<" is "<<i+1<<endl;
            return 1;
              }   }
     return 0;
}

int main(){
    int n;
    cout<<"enter the size of array--> ";
    cin>>n;

    int arr[n];
    cout<<"enter elements in array--> \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //searching element
    cout<<"enter the element to search --> ";
    int key;
    cin>>key;

    int ans=linear_search(arr,key,n);
    if(ans==0){
        cout<<"The element is not found!"<<endl;
    }
}

