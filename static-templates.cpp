#include <boost/math/tools/promotion.hpp>
#include <iostream>
#include <limits>



template <>
struct lower_reg_inc_gamma<1> {

  template <int ARG, typename T1, typename T2>
  static 
  typename boost::math::tools::promote_args<T1, T2>::type
  grad(T1 a, T2 z, double precision = 1e-10, int max_steps = 1e5) {
    typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
    TP d = 0.5;
    return d;
  }
   
};
   
int main() {
  double a = 5.0;
  double z = 3;
  double d;
  d = lower_reg_inc_gamma<0>::grad<1>(a, z);
  std::cout << d << std::endl;
  d = lower_reg_inc_gamma<1>::grad<1>(a, z);
  std::cout << d << std::endl;
  d = lower_reg_inc_gamma<>::grad<1>(a, z);
  std::cout << d << std::endl;
  return 0;
}


