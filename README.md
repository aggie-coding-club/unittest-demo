# Unit-testing Demo
This repo contains some (flawed) C++ code. We'll use https://github.com/doctest/doctest for our test harness.

## Definitions
- unit test: small piece of code that checks the correctness of other code
- assertion: check if something is true; if it's not, explode
- test harness/framework: tool (usually a library) that automates unit test execution
- CI (continous integration): run your test harness automatically whenever you add more code
- regression testing: make sure new code doesn't reintroduce old bugs

## Running the stuff here
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
