// cppimport
#include <pybind11/pybind11.h>

double subtract(double a, double b) {
  return a-b;
}

namespace py = pybind11;
PYBIND11_MODULE(example2, m) {
  m.def("subtract", &subtract, "Computes a - b",
      py::arg("a") = 1, py::arg("b") = 2);

  m.def("subtract_cat", &subtract, "Opps, bad default!",
      py::arg("a") = "cat", py::arg("b") = 2);

}

/*
<%
setup_pybind11(cfg)
%>
*/
