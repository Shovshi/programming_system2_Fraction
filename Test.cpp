#include "sources/Fraction.hpp"
#include "doctest.h"


namespace ariel{
TEST_CASE("Constructor check") {
    Fraction f1(2, 3);
    Fraction f2(1, 2);

    CHECK(f1.a == 2);
    CHECK(f1.b == 3);
    CHECK(f2.a == 1);
    CHECK(f2.b == 2);
}
TEST_CASE("Second constructor check"){
    Fraction f3(0.7);
    Fraction f4(0.3);

    CHECK(f3.a == 7);
    CHECK(f3.b == 10);
    CHECK(f4.a == 3);
    CHECK(f4.b == 10);
}
TEST_CASE("Sum of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f5 = f1 + f2;
    CHECK(f5.a == 7);
    CHECK(f5.b == 6);
}
TEST_CASE("Sub of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f6 = f1 - f2;
    CHECK(f6.a == 1);
    CHECK(f6.b == 6);
}
TEST_CASE("Multiple of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f7 = f1 * f2;
    CHECK(f7.a == 1);
    CHECK(f7.b == 3);
}
TEST_CASE("Divide of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f8 = f1 / f2;
    CHECK(f8.a == 4);
    CHECK(f8.b == 3);
}
TEST_CASE("Who is bigger check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    CHECK(f1 > 0.5);
    CHECK(!(f1 > 1));
    CHECK(f1 >= f2);
}
TEST_CASE("Postfix add check"){

    Fraction f1(2, 3);
    Fraction f9 = f1++;
    CHECK(f1.a == 5);
    CHECK(f1.b == 3);
    CHECK(f9.a == 2);
    CHECK(f9.b == 3);
}
TEST_CASE("Prefix sub check"){

    Fraction f2(1, 2);
    Fraction f10 = --f2;
    CHECK(f2.a == 1);
    CHECK(f2.b == 4);
    CHECK(f10.a == 3);
    CHECK(f10.b == 4);
}
TEST_CASE("Sum of a fraction number and a float number check"){

    Fraction f1(2, 3);
    Fraction f11 = f1 + 0.5;
    CHECK(f11.a == 8);
    CHECK(f11.b == 3);
}


}



