#include<iostream>
#include<algorithm>
using namespace std;

void print_array(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alternate_swap(int *arr,int n){
    for(int i=0;i<n;i+=2){
        if(i+1!=n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array--> ";
    cin>>n;

   int arr[n];
   cout<<"enter the elements in array--> ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"before alternate swap--> ";
   print_array(arr,n);
  alternate_swap(arr,n);
cout<<"after alternate swap--> ";
   print_array(arr,n);
}

