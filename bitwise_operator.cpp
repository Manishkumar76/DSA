#include<iostream>
using namespace std;

//bitwise operator compares every bit of the elements and the give ans 

int main(){
    int a=7,b=5;
    //Add operattor
    cout<<"a&b --> "<<(a&b)<<endl;

    //or operator
    cout<<"a|b --> "<<(a|b)<<endl;

    //xor operator
    cout<<"a^b --> "<<(a^b)<<endl;

    //not operator
    cout<<"~a -->"<<(~a)<<endl;
    cout<<"~b -->"<<(~b)<<endl;

    //left shift operator
    cout<<(15>>2)<<endl; //it shift bits of 4 in left direction by 1
    
    //right shift operator 
    cout<<(2<<1)<<endl;

    
}