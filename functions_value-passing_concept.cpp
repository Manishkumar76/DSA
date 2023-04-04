#include <iostream>
using namespace std;

// function of change
void change1(int c) {
  c = c + 1;
  cout << "value of a in change1 function -->" << c << endl;
}

void change2(int &c) { //&c is reference of a it means the c variable point the value of a or on other words c is anouther name of variable a
  c = c + 1;
  cout << "value of a in change2 function -->" << c << endl;
}

// this is implimentation call by reference function according to c-language
void change3(int *c) {
  cout << "value of a in change3 function before updating -->" << c << endl;
  c = c + 1;
  cout << "value of a in change3 function -->" << c << endl;
}

int main() {
  int a;
  cin >> a;
  cout << "value of a before both functions call--> " << a << endl;
  // call by value
  change1(a);
  cout << "value of a after call the function change1 -->" << a << endl;

  // call by reference
  change2(a);
  cout << "value of a after call the function change2 -->" << a << endl;

  // but According to c-language call by reference
  change3(&a); // it will pass the address of a
  cout << "value of a after call the function change3 -->" << a << endl << endl;

  int *ptr = &a;
  change3(ptr);
  cout << "value of a after call the function change4 -->" << a << endl;
}