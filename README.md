# Pybind11 Tech Share 

# Slides
- [pdf render is available](slides.pdf)
- See [BUILDING](BUILDING.md) to build/run the slideshow in the browser

# Examples
- These minimal examples from the presentation are a good starting point for someone who wants to play around with the
  various concepts discussed.
- The [environment file](conda_env.yaml) provided is the environment I used to build/run all examples.

## python-binding-examples
- This folder contains examples using pybind11 in the canonical way, generating python bindings for c++ code. 
- These examples use [cppimport](https://github.com/tbenthompson/cppimport). Which is a very handy tools for creating
  minimal standalone "playgrounds" for these concepts.
- Each example in this folder `run_ex<number>.py` has a corresponding `example<number>.cpp` file in the `cpp` subfolder
  where the example library and binding directives are.
- If you wish to experiment, simply editing the `.cpp` file will ensure it is rebuilt the next time it is imported. 

## embed-example
- This folder contains a simple interpreter embedding example. 
- This example uses CMake. 
- The configuration file is a minimal example demonstrating the use of the `pybind11::embed` target.


## Contributing
I am happy to accept issues pointing out (or better PRs correcting) any errata. 

## License
This repo is under the [MIT License](LICENSE).
