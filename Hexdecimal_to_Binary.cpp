#include <iostream>
#include <math.h>
#include<bitset>

using namespace std;
int main() {

  int n;
  cout << "Enter the Hexadecimal to Decimal --> ";
  cin >> n;
  int i = 0, sum = 0;
  while (n > 0) {
    int dig = n % 10;
    n = n / 10;
    sum = sum + dig * pow(16, i);
    i++;
  }
  cout << "Decimal --> " << sum<<endl;
  bitset <16> binary(sum);
   cout << "Binary --> " << binary;

}