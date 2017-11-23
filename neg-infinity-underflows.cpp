#include <limits>
#include <cmath>
#include <iostream>

int main() {
  double x = std::numeric_limits<double>::infinity();
  double y = exp(-1 * x);
  std::cout << "exp(-Inf): " << y << std::endl;
}




