#include <iostream>
#include <iomanip>

void print(const char** arg, unsigned int c) {
  std::cout << arg[0] << std::endl;
  if (c != 0) print(arg+1, c-1);
}


int main (int argc, const char** argv) {
  print(argv, argc);
  return argc;
}



