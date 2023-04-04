#include <iostream>
using namespace std;
int main() {

  int a[]={0,3,4,5,6};
   int *ptr=a;
  
  //int *ptr=&a; it gives error becuase we can not point to the whole array & name of array is also a pointer which points to the first element of array 
  
  //here a==&a are point to same value & *a==a[0] gives same valuse
  cout<<a<<endl;
  cout<<""<<&ptr<<endl;
  cout<<"*ptr gives value at ptr-->"<<*ptr<<endl;
  cout<<a[0]<<endl;

  //retrieves the element by using pointer
  for(int i=0;i<5;i++){
  cout<<*(ptr+i)<<"\t";}
  cout<<endl;

  
  cout<<"sizeof(a) gives--> "<< sizeof(a)<<endl;//it gives size of whole array
  cout<<"sizeof(&ptr) gives--> "<< sizeof(&ptr)<<"\t sizeof(&a) also gives -->"<<sizeof(&a)<<endl;//it gives the size of pointer which point to the first element of array
//it show size of both ptr and &ptr are equal;
  
  cout<<"sizeof(*ptr) gives--> "<<sizeof(*ptr)<<endl; // it give the size of the element or object / a[0] 
  }
