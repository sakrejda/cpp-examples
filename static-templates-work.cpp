#include <boost/math/tools/promotion.hpp>
#include <iostream>
#include <limits>


  template <int IMPL, int ARG>
  struct lower_reg_inc_gamma {

    template <typename T1, typename T2>
    static 
    typename boost::math::tools::promote_args<T1, T2>::type
    grad(T1 a, T2 z, double precision, int max_steps) {
      typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
      TP d = 0.3;
      return d;
    }
    
  };


  template <>
  struct lower_reg_inc_gamma<0,1> {

    template <typename T1, typename T2>
    static 
    typename boost::math::tools::promote_args<T1, T2>::type
    grad(T1 a, T2 z, double precision = 1e-10, int max_steps = 1e5) {
      typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
      TP d = 0.5;
      return d;
    }
    
  };
    template <int IMPL=0, int ARG=1, typename T1=double, typename T2=double>
    typename boost::math::tools::promote_args<T1, T2>::type
    grad_lower_reg_inc_gamma(T1 a, T2 z, double precision = 1e-10,
                               int max_steps = 1e5) {
      typedef typename boost::math::tools::promote_args<T1, T2>::type TP;
      TP d = lower_reg_inc_gamma<IMPL, ARG>::grad(a, z, precision, max_steps);
      return d;
    }
   
int main() {
  double a = 5.0;
  double z = 3;
  double d;
  d = grad_lower_reg_inc_gamma<0,2>(a, z);
  std::cout << d << std::endl;
  d = lower_reg_inc_gamma<0,1>::grad(a, z);
  std::cout << d << std::endl;
  return 0;
}


