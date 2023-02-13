#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter the Decimal Number to convert--> ";
  cin >> n;

  // method 1 --> by using array
  int bit[100] = {0};
  int i = 0;
  while (n > 0) {
    bit[i] = n % 2;
    n = n / 2;
    i++;
  }
  cout << "decimal to binary--> ";
  for (int j = i - 1; j >= 0; j--) {
    cout << bit[j];
  }
 
 int dig;
    while(n>0){
      
         int digit= n%10;

         while(digit>0){
             
         }

    }

}