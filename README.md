# Unit-testing Demo
This repo contains some (flawed) C++ code. We'll use https://github.com/doctest/doctest for our test harness.

## Definitions
- unit test: small piece of code that checks the correctness of other code
- assertion: check if something is true; if it's not, explode (example below)
```c++
// this...
CHECK(2 + 2 == 4);
// ...expands (basically) to this
if (!(2 + 2 == 4)) {
    throw std::runtime_error("assertion failed, here's what actually happened: ...");
}
```
- test harness/framework: tool (usually a library) that automates unit test execution
- CI (continous integration): run your test harness automatically whenever you add more code
- regression testing: make sure new code doesn't reintroduce old bugs

## Running the stuff here
If you don't have `make` or `g++`, install them. Example for Ubuntu:
```sh
sudo apt update -y
sudo apt install build-essential -y
```
To run the test suite, run
```sh
make test
./test
```
To run the main binary, run
```sh
make main
./main
```
