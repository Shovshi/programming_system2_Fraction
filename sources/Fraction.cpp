#include "Fraction.hpp"
#include <cmath>

namespace ariel{

// Constructors
    Fraction::Fraction(int numerator, int denominator)
    {
        this->numerator= numerator;
        this->denominator = denominator;
    }
    Fraction::Fraction(float num)
    {
        // Convert the float to numeratorfraction
        int sign = (num >= 0) ? 1 : -1;
        num *= sign;
        int int_part = (int)num;
        int frac_part = round((num - int_part) * 1000);
        int gcd_val = gcd(frac_part, 1000);
        this->numerator= sign * (int_part * 1000 / gcd_val) + frac_part / gcd_val;
        this->denominator = 1000 / gcd_val;
    }
    Fraction::Fraction(const Fraction& other)
    {
        this->numerator= other.numerator;
        this->denominator = other.numerator;
    }

    // Destructor
    Fraction::~Fraction(){}

    // Operators 

    std::ostream& operator<<(std::ostream& ostr, const ariel::Fraction& f)
    {
        ostr << f.numerator<< "/" << f.denominator;
        return ostr;
    }

    Fraction operator+(const Fraction& frac1, const Fraction& frac2)
    {
        return 1;
    }
    Fraction operator+(const Fraction &frac1, const float num)
    {
        return 1;
    }
    Fraction operator-(const Fraction& frac1 , const Fraction& frac2)
    {
        return 1;
    }
    Fraction operator-(const Fraction& frac1 , const int num)
    {
        return 1;
    }
    Fraction operator/(const Fraction& frac1 , const Fraction& frac2)
    {
        return 1;
    }
    Fraction operator*(const Fraction& frac1 , const Fraction& frac2)
    {
        return 1;
    }
    Fraction operator*(const float num , const Fraction& frac1)
    {
        return 1;
    }
    Fraction operator++(const Fraction& frac1 , int num)
    {
        return 1;
    }
    Fraction& operator--(const Fraction& frac1)
    {
    Fraction& f = const_cast<Fraction&>(frac1);
    f.numerator-= f.denominator;
    //f.reduce();
    return f;
    }
    bool operator>(const Fraction& frac1, const float num)
    {
        return true;
    }
    bool operator>=(const Fraction& frac1,const Fraction& frac2)
    {
        return true;
    }

    int Fraction::gcd(int num1, int num2)
    {
        if (num2 == 0) return num1;
        return Fraction::gcd(num2, num1 % num2);
    }

}


