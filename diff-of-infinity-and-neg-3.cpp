#include <cmath>
#include <iostream>
#include <limits>

int main () {
  double x = -1 * std::numeric_limits<double>::infinity();
  double y = -3;
  double z = x - y;
  std::cout << "negative infinity - 3: " << z << std::endl;
  return 0;
}



