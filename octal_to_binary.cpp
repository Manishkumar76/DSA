#include <iostream>
#include <bitset>
#include <math.h>
using namespace std;
int main() {
  int n;
  cout << "enter the Octal number to convert --> ";
  cin >> n;
  int i = 0,sum=0;
  while(n!=0){    // here we can use n>0 but we want to calculate the binary conversion of all real numbers
    int dig=n%10;
    sum=sum+dig*pow(8,i);
    n=n/10;
    i++;
  }
   cout<<"decimal number of octal --> "<<sum<<endl;

   bitset <8> binary(sum);   //bitset is a class to convert any number into binary form
   cout<<"The binary form --> "<<binary;
}
//This program first converts the given octal number to its equivalent decimal number using the standard method of arithmetic conversion. Then, the bitset class is used to convert the decimal number to its binary representation, which is stored in a bitset object. Finally, the binary representation is displayed as the output.