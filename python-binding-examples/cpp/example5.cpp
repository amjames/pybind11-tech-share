// cppimport
#include <pybind11/pybind11.h>
#include <iostream>

struct Reader {
  int size;
  // reads all
  int read() {
    std::cout << "Read all!"<< std::endl;
    return size;
  }

  // reads from begin_off to end
  int read(int begin_off) {
    std::cout << "Read from " << begin_off << "!" << std::endl;
    return std::max(size - begin_off, 0);
  }

  // reads from begin_off to end_off
  int read(int begin_off, int end_off) {
    std::cout << "Read from " << begin_off << " to " << end_off << "!" << std::endl;
    return std::max(size - begin_off - end_off, 0);
  }
};

namespace py = pybind11;
PYBIND11_MODULE(example5, m) {
  py::class_<Reader>(m, "Reader")
      .def(py::init<int>())
      .def("read", py::overload_cast<>(&Reader::read))
      .def("read", py::overload_cast<int>(&Reader::read))
      .def("read", py::overload_cast<int,int>(&Reader::read));
}
/*
<%
cfg['extra_compile_args'] = ['--std=c++14']
setup_pybind11(cfg)
%>
*/
