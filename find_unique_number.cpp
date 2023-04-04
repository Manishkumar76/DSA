#include<iostream>
#include<algorithm>
using namespace std;

void print_array(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter the size of array--> ";
    cin>>n;

   int arr[n];
//    int flag[100000001]={0};
   cout<<"enter the elements in array--> ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
    // flag[arr[i]]++;
   }
   cout<<"before alternate swap--> ";
   print_array(arr,n);
   
//    for(int i=0;i<n;i++){
//     if(flag[arr[i]]==1){
//         cout<<"the unique number --> "<<arr[i]<<endl;
//     }
//    }
int ans=0;
for(int i=0;i<n;i++){
  ans=ans^arr[i];
}
cout<<"unique number --> "<<ans;
}