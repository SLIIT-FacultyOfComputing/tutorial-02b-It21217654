
#include <iostream>
using namespace std;
int main(void)
{
    int no;
    long fac;

    cout<<"Enter a Number : ";
    cin>>no;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    cout<<"Factorial of is "; cout << "int: " << no<<"\n";
    cout << "long: " << fac <<"\n"; 
  
    return 0;
}
