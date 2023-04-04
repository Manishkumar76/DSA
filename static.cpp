#include<iostream>
using namespace std;

class A{
    public:

    A(){
        cout<<"A's constructor called \n";
    }
};

class B{
  public:
    static A a;

    B(){
        cout<<"B's constructor called\n";
    }

    // static A getA(){
    //     return a;
    // }
};

A B::a;
int main(){
    B b1,b2,b3;
    // A a=b1.getA();

}