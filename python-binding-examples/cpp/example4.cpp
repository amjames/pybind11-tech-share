// cppimport
#include <pybind11/pybind11.h>

struct Pet {
    std::string name;
};


namespace py = pybind11;
PYBIND11_MODULE(example4, m) {
  py::class_<Pet>(m, "Pet")
    .def(py::init<const std::string&>())
    .def_property("name_prop", [](Pet const& self){ return self.name; },
                      [](Pet& self, std::string& value) {self.name = value;})
    .def_readwrite("name_attr", &Pet::name);
}
/*
<%
setup_pybind11(cfg)
%>
*/
