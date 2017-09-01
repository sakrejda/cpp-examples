#include <iostream>
#include <vector>
#include <map>
#include <iomanip>


int n_full_batches(int length, int batch_size) {
  if (length > 0) {
    return length / batch_size;
  } else {
    return 0;
  }
}

int final_batch_size(int length, int batch_size) {
  if (length > 0) {
    return length % batch_size;
  } else {
    return 0;
  }
}



void print_vector(std::vector<double> x) {
  for (int i=0; i < x.size(); ++i) {
    std::cout << x[i] << " ";
  }
  std::cout << std::endl;
}

void pretty_print_vector(std::vector<double> x, int batch_size) {
  int n_batches;
  n_batches = n_full_batches(x.size(), batch_size);
  int final_batch;
  final_batch = final_batch_size(x.size(), batch_size);
  
  for ( int i=0; i < n_batches; ++i) {
    for ( int j=0; j < batch_size; ++j ) {
      std::cout << std::setw(4) << x[i*batch_size+j] << " ";
    }
    std::cout << std::endl;
  }
  for ( int j=0; j < final_batch; ++j ) {
    std::cout << std::setw(4) << x[n_batches*batch_size+j] << " ";
  }
  std::cout << std::endl;
}


int main()
{
  int N = 5;
  int K = 11;
  std::vector<double> x(N);
  for (int i=0; i < x.size(); ++i) {
    x[i] = 2.0*i;
  }
  print_vector(x);
  std::cout << n_full_batches(x.size(), K) << std::endl;
  std::cout << final_batch_size(x.size(), K) << std::endl;
  pretty_print_vector(x,K);
}



