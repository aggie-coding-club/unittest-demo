#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "math.h"

TEST_CASE("basic add tests") {
    CHECK(add(0, 0) == 0);
    // CHECK(add(1, 1) == 2);
    // CHECK(add(2, 2) == 4);
}

// TEST_CASE("basic factorial tests") {
//     CHECK(factorial(1) == 1);
// }

// TEST_CASE("square root") {
//     CHECK_THROWS_AS(checked_sqrt(-1), std::domain_error);
// }

