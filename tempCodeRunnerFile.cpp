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

 int bit[100] = {0};
  int j = 0;
  int l=1;
  while (l<=4) {
    bit[j] = sum% 2;
    sum = sum / 2;
    j++;
    l++;
  }
  cout << "binary--> ";
  for (int k = j - 1; k >= 0; k--) {
    cout << bit[k];
  }
  
  }
