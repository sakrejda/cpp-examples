#include <iostream>
#include <vector>

void print_vector(std::vector<double> x) {
  for (int i=0; i < x.size(); ++i) {
    std::cout << x[i] << " ";
  }
  std::cout << std::endl;
}


int main()
{
  int N = 103;
  std::vector<double> x(N);
  for (int i=0; i < x.size(); ++i) {
    x[i] = 2.0*i;
  }
  print_vector(x);
}



