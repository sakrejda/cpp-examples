#include <cmath>
#include <iostream>

int main() {
  for (int i = -10; i < 11; ++i) {
    std::cout << "i+.1: " << i+.1 << ", std::floor(i): " 
              << std::floor(i+.1) << std::endl;
  }
  return 0;
}



