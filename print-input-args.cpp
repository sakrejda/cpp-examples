#include <iostream>
#include <iomanip>

int main (int argc, const char** argv) {
  for (size_t i=1; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }
  return argc;
}



