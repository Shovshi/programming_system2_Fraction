#pragma once

namespace ariel
{
    class Fraction{

    public:
    int a;
    int b;

    // Constructors
    Fraction(int a, int b);
    Fraction(int a, double b);
    Fraction(double a , int b);
    Fraction(){}

    // Operators 
    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator+(const Fraction &f1, const double num);
    friend Fraction operator-(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator-(const Fraction& f1 , const int num);
    friend Fraction operator/(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator*(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator*(const double num , const Fraction& f1);
    friend Fraction operator++(const Fraction& f1 , int num);
    friend Fraction& operator--(const Fraction& f1);
    friend bool operator>(const Fraction& f1, const double num);
    friend bool operator>=(const Fraction& f1,const Fraction& f2);
    };
}
   


