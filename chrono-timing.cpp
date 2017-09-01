#include<iostream>
#include<thread>
#include<chrono>

int main() {
  std::chrono::time_point<std::chrono::system_clock> start, end;
  std::chrono::duration<double> e;
  start = std::chrono::system_clock::now();
  std::this_thread::sleep_for(std::chrono::seconds(3));
  end = std::chrono::system_clock::now();
  e = end - start;
  std::cout << "elapsed time: " << e.count() << std::endl;
}
