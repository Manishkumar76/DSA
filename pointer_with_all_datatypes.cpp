#include <iostream>
using namespace std;
int main() {

  int a=0;
  float b=0.0;
  char c='a';
  double d=0.0;

  int *ptr=&a;
  float *ptr1=&b;
  char *ptr2=&c;
  double *ptr3=&d;

  //* is a dereference operator
  //& is a reference operator
  
  cout<<"value of a is "<<*ptr<<endl;
  cout<<"value of b is "<<*ptr1<<endl;
  cout<<"value of c is "<<*ptr2<<endl;
  cout<<"value of d is "<<*ptr3<<endl;

  cout<<"size of pointer ptr--> "<<sizeof(ptr)<<endl;
  // this function will give the size of the ptr pointer 

  
  cout<< "size of value which pointed by ptr--> "<<sizeof(*ptr)<<endl;
  //it will give the size of that object which is pointed by the pointer ptr

  
  //similarly
  cout<<"size of value at ptr --> "<<sizeof(*ptr)<<"\t size of ptr --> "<<sizeof(ptr)<<endl;
  cout<<"size of value at ptr1--> "<<sizeof(*ptr1)<<"\t size of ptr1--> "<<sizeof(ptr1)<<endl;
  cout<<"size of value at ptr2--> "<<sizeof(*ptr2)<<"\t size of ptr2--> "<<sizeof(ptr2)<<endl;
  cout<<"size of value at ptr3--> "<<sizeof(*ptr3)<<"\t size of ptr3--> "<<sizeof(ptr3)<<endl;
  
}