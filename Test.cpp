#include "sources/Fraction.hpp"
#include "doctest.h"


namespace ariel{
TEST_CASE("Constructor check") {
    Fraction f1(2, 3);
    Fraction f2(1, 2);

    CHECK(f1.numerator == 2);
    CHECK(f1.denominator == 3);
    CHECK(f2.numerator == 1);
    CHECK(f2.denominator == 2);
}
TEST_CASE("Second constructor check"){
    Fraction f3(0.7);
    Fraction f4(0.3);

    CHECK(f3.numerator == 7);
    CHECK(f3.denominator == 10);
    CHECK(f4.numerator == 3);
    CHECK(f4.denominator == 10);
}
TEST_CASE("Sum of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f5 = f1 + f2;
    CHECK(f5.numerator == 7);
    CHECK(f5.denominator == 6);
}
TEST_CASE("Sub of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f6 = f1 - f2;
    CHECK(f6.numerator == 1);
    CHECK(f6.denominator == 6);
}
TEST_CASE("Multiple of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f7 = f1 * f2;
    CHECK(f7.numerator == 1);
    CHECK(f7.denominator == 3);
}
TEST_CASE("Divide of two fractions check"){

    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f8 = f1 / f2;
    CHECK(f8.numerator == 4);
    CHECK(f8.denominator == 3);
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
    CHECK(f1.numerator == 5);
    CHECK(f1.denominator == 3);
    CHECK(f9.numerator == 2);
    CHECK(f9.denominator == 3);
}
TEST_CASE("Prefix sub check"){

    Fraction f2(1, 2);
    Fraction f10 = --f2;
    CHECK(f2.numerator == 1);
    CHECK(f2.denominator == 4);
    CHECK(f10.numerator == 3);
    CHECK(f10.denominator == 4);
}
TEST_CASE("Sum of a fraction number and a float number check"){

    Fraction f1(2, 3);
    Fraction f11 = f1 + 0.5;
    CHECK(f11.numerator == 8);
    CHECK(f11.denominator == 3);
}


}



