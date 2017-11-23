#include <iostream>
#include <vector>
#include <string>


void f(std::string x) {
  std::cout << x << std::endl;
}

int main()
{
  int N = 100000;
  for (int i=0; i < N; ++i) {
    std::string x("BOB");
    f(x);
  }
  return 0;
}



