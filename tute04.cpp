

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{ 
int Factorial = 1;
int i;
for (int i=no; i>=1; i--)
  {
    Factorial= Factorial * i;
  }
return Factorial;
  }
 long nCr(int n, int i)
{
  return (Factorial (n)/ (Factorial (i)*Factorial(n-i)));
}
