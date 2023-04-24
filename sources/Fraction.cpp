#include "Fraction.hpp"
#include <cmath>

namespace ariel{

// Constructors
    Fraction::Fraction(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Fraction::Fraction(float num)
    {
        // Convert the float to a fraction
        int sign = (num >= 0) ? 1 : -1;
        num *= sign;
        int int_part = (int)num;
        int frac_part = round((num - int_part) * 1000);
        int gcd_val = gcd(frac_part, 1000);
        this->a = sign * (int_part * 1000 / gcd_val) + frac_part / gcd_val;
        this->b = 1000 / gcd_val;
    }
    Fraction::Fraction(const Fraction& other)
    {
        this->a = other.a ;
        this->b = other.a ;
    }

    // Operators 
    std::ostream& operator<<(std::ostream& os, const ariel::Fraction& f)
    {
        os << f.a << "/" << f.b;
        return os;
    }

    Fraction operator+(const Fraction& f1, const Fraction& f2)
    {
        return 1;
    }
    Fraction operator+(const Fraction &f1, const float num)
    {
        return 1;
    }
    Fraction operator-(const Fraction& f1 , const Fraction& f2)
    {
        return 1;
    }
    Fraction operator-(const Fraction& f1 , const int num)
    {
        return 1;
    }
    Fraction operator/(const Fraction& f1 , const Fraction& f2)
    {
        return 1;
    }
    Fraction operator*(const Fraction& f1 , const Fraction& f2)
    {
        return 1;
    }
    Fraction operator*(const float num , const Fraction& f1)
    {
        return 1;
    }
    Fraction operator++(const Fraction& f1 , int num)
    {
        return 1;
    }
    Fraction& operator--(const Fraction& f1)
    {
    Fraction& f = const_cast<Fraction&>(f1);
    f.a -= f.b;
    //f.reduce();
    return f;
    }
    bool operator>(const Fraction& f1, const float num)
    {
        return true;
    }
    bool operator>=(const Fraction& f1,const Fraction& f2)
    {
        return true;
    }

    int Fraction::gcd(int a, int b)
    {
        if (b == 0) return a;
        return Fraction::gcd(b, a % b);
    }

}


