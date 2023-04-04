#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the value:";
    cin >> ch;

    if('0'<=ch && ch<='9'){
        cout << "Value is numerical" << endl;
    }
    else if(65<=int(ch) && int(ch)<=90){
        cout << "Value is uppercase " << endl;
    }
    else if(97<=int(ch) && int(ch)<=122){
        cout << "Value is lowercase" << endl;
    }

}