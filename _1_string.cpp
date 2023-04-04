#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //method 1 to declare a string as character-array 
    // char ch[20]; 

    // cout<<"enter your name--> ";
    // cin>>ch;
    // cout<<ch<<endl;
    
    //  cout<<"size of ch is -->"<<sizeof(ch)<<endl;
     

//method 2 to declare a string 
    // string s;
    // cout<<"enter the name2--> ";
    // cin>>s;
    // cout<<s<<endl;
    // cout<<"size of s -->"<<sizeof(s)<<endl;

 //method 3 to declare the string 
    string str(5,'m');
    cout<<str<<endl;

//method 4 to declare the string
    string str1="manishkumar";
    cout<<str1<<endl;

// Method 5 to declare a string which is use to store a line of number of word with spaces.
    string str2;
    getline(cin,str2);
    cout<<str2<<endl;

    
}