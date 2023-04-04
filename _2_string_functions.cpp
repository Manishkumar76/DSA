#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){

//     function 1-->append two strings 
//     string str;
//     string s1,s2;
//     cout<<"enter the some letter of a word--> ";
//     cin>>s1;
//     cout<<"enter the next letter of that words--> ";
//     cin>>s2;
//     //
//     str=s1.append(s2);
//     cout<<"The complete word is --> "<<str<<endl;  
//     cout<<"update values of s1 and s2 after append function--> "<<endl<<"s1--> "<<s1<<"\t s2--> "<<s2<<endl;
//     //by above function the real value of s1 get updated but s2 remain same


//     //another way to append two string but without changing the real value of previous string
//     string s3,s4;
//     cout<<"enter the some letter of a word--> ";
//     cin>>s3;
//     cout<<"enter the next letter of that words--> ";
//     cin>>s4;   
//     cout<<"second way-->"<<s3+s4<<endl;
//     cout<<"values of s3 and s4 after + operation-->" <<endl<<"s3--> "<<s3<<"\t s4--> "<<s4<<endl;
  

//   fuction 2--> 
//   string str;
//   cout<<"enter your friend's name--> ";
//   cin>>str;
//   cout<<"friend--> "<<str<<endl;
//   str.clear();
//   cout<<"after clear function--> "<<str<<endl;
  


  // function 3--> comapre two strings-->
//   string s5,s6;
//    cout<<"enter the frist word--> ";
//     cin>>s5;
//     cout<<"enter the second word--> ";
//     cin>>s6;
//     cout<<"difrence in "<<s5<<" and "<<s6<<" is equal to "<<s6.compare(s5)<<endl;

//     if(s5.compare(s6)==0){
//         cout<<"strings are equal"<<endl;
//     }



//function 4-->check either the string empty or not
//    string str2;
//    cout<<"enter any word--> ";
//    cin>>str2;
//    cout<<"the word is--> "<<str2<<endl;
//    str2.clear();
//    if(str2.empty()){
//     cout<<"str2 is empty "<<endl;  
//    }



  //function 5--> erase elements from a string
     string str3;
    
     cout<<"enter any word--> ";
     cin>>str3;
     cout<<"the word--> "<< str3 <<endl;
      str3.erase(3,6);
      
      cout<<"after erase string--> "<<str3<<endl;



    //function 6--> find another string from a given string
  //   string s1="range";
  //   string s2="ang";
  //  cout<<"find s2 in s1--> "<<s1.find(s2)<<endl;



  //    //function 7--> insert a  string in given string at any position
  //      cout<<"before insertion the s1 string is--> "<<s1<<endl;
  //       s1.insert(2,s2);
  //      cout<<"after insertion the s1 string is-->"<<s1<<endl;
      


     //function 8-->convert a numeric string into integer
    //  string s="786";
    //  int x= stoi(s);
    //  x=x+34;
    //  cout<<x<<endl;



    //function 9-->convert a integer into a string
    // cout<<"in string--> "<<to_string(x)+"2";


    //function 10--> gives starting itreter and end itreter of string
    // string s1= "manishkumar";
    // char x=*s1.begin();
    // cout<<"firts itreter--> "<<x<<endl;
    // char y=*s1.end();
    // cout<<"last letter --> "<<y<<endl;
    
    // cout<<"before sorting -->"<<s1<<endl;
    // sort(s1.begin(),s1.end());
    // cout<<"after sorting -->"<<s1<<endl;

}