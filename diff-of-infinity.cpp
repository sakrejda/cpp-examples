#include <cmath>
#include <iostream>
#include <limits>

int main () {
  double x = -1 * std::numeric_limits<double>::infinity();
  double y = -1 * std::numeric_limits<double>::infinity();
  double z = x - y;
  std::cout << "Difference of negative infinities: " << z << std::endl;
  return 0;
}



