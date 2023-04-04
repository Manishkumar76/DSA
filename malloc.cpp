#include<iostream>
using namespace std;
 
 void print_array(int *a,int c){
for(int i=0;i<c;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
 }

int main(){
   int n;
   cout<<"enter the size of array--> ";
   cin>>n;
    int *arr= (int*)malloc(n*sizeof(int));
    cout<<"enter the element in array--> ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of array--> "<<endl;
    print_array(arr,n);

    delete [] arr;
    // print_array(arr); //----->this will give error because the array arr is deallocated 
}