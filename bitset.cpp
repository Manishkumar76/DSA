#include<iostream>
#include<bitset>
#include<string.h>

using namespace std;

int main(){

    char a='A';
     cout<<"Ascii value of A--> "<<(int) a<<endl;
    bitset <16> binary(a);
    cout<<binary<<endl;

    bitset <16> binary1(65);
    cout<<binary1<<endl;


for(int i=0;i<26;i++){
    bitset <8> binary4((i+65));
   cout<<(char)(i+65)<<" --> "<<binary4<<" \n ";
}
 return 0;
}