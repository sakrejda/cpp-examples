#include <boost/math/tools/promotion.hpp>
#include <iostream>
#include <limits>


    template <int IMPL=0, int ARG=1, typename T1=double, typename T2=double>
    typename boost::math::tools::promote_args<T1, T2>::type
    grad_lower_reg_inc_gamma(T1 a, T2 z, double precision = 1e-10,
                               int max_steps = 1e5) {
      typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
      static_assert(false, "Automatic method selection not implemented yet for"
        "grad_lower_reg_inc_gamma");
      return std::numeric_limits<TP>::quiet_NaN();
    }
   
    template <1, int ARG, typename T1, typename T2>
    typename boost::math::tools::promote_args<T1, T2>::type
    grad_lower_reg_inc_gamma(T1 a, T2 z, double precision = 1e-10,
                               int max_steps = 1e5) {
      typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
      return std::numeric_limits<TP>::quiet_NaN();
    }


int main() {
  double a, z, d;
  double precision = 1e-5;
  int max_steps = 5;
  d = grad_lower_reg_inc_gamma<1,1>(a, z, precision, max_steps);
  std::cout << d << std::endl;
  return 0;
}


