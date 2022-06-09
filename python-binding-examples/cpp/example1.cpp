// cppimport
#include <pybind11/pybind11.h>

double add(double a, double b) {
  return a+b;
}


PYBIND11_MODULE(example1, m) {
  m.def("add", &add);
}

/*
<%
setup_pybind11(cfg)
%>
*/
