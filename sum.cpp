#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    int sum=0;

    cout << "Value of n:" << endl;
    cin >> n;

    

while(i<=n){
        if(i%2==0){
            sum=sum+i; 
        }
      i++;}
    cout << "Sum of n no.:" << sum << endl;
    return 0;
}