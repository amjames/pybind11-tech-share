#include <pybind11/embed.h>
namespace py = pybind11;
int main()
{
    using namespace py::literals;
    py::scoped_interpreter guard{};
    py::module_ np = py::module_::import("numpy");
    py::object x = np.attr("arange")(0, 100);
    py::module_ plots= py::module_::import("plots");
    plots.attr("plot_x_squared")(x);
    return 0;
}