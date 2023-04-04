  /*       program for check the string is rotation about another string  
              coditions->1.length of both string must be equal
                              */

#include<iostream>
using namespace std;

int main(){
     string s1,s2;
     cout<<"enter first string--> ";
     cin>>s1;
     cout<<"enter second string--> ";
     cin>>s2;
      
      if(s1.length()!=s2.length()){
        cout<<"no rotation is possible ";
      }
      else{
        string temp=s1+s2;
        if(temp.find(s2)!=string::npos){ //here string::npos gives the nonexisting position in the string
           cout<<"yes";
        }
        else{
            cout<<"No";
        }
      }
      return 0;

}