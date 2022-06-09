// cppimport
#include <pybind11/pybind11.h>

struct Pet {
    std::string name;
};


namespace py = pybind11;
PYBIND11_MODULE(example3, m) {
  py::class_<Pet>(m, "Pet")
    .def(py::init<const std::string&>());
}
/*
<%
setup_pybind11(cfg)
%>
*/
