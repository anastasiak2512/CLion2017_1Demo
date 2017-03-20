#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "sample_lib.h"

TEST_CASE( "Life, the universe and everything", "[theAnswer]" ) {
    SECTION("Just the Answer") {
        CHECK(theAnswer() == 42);
    }

    SECTION("Increase the Answer") {
        CHECK(increase(1) == 43);
    }
}

