#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    class Fraction{

    public:
    int a;
    int b;

    //Help functions
    int gcd(int a, int b);

    // Constructors
    Fraction(int a, int b);
    Fraction(float num);
    Fraction(const Fraction& other);
    Fraction(){}

    // Operators 
    friend ostream& operator<<(ostream& os, const Fraction& f);
    friend Fraction operator+(const Fraction& f1, const Fraction& f2);
    friend Fraction operator+(const Fraction &f1, const float num);
    friend Fraction operator-(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator-(const Fraction& f1 , const int num);
    friend Fraction operator/(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator*(const Fraction& f1 , const Fraction& f2);
    friend Fraction operator*(const float num , const Fraction& f1);
    friend Fraction operator++(const Fraction& f1 , int num);
    friend Fraction& operator--(const Fraction& f1);
    friend bool operator>(const Fraction& f1, const float num);
    friend bool operator>=(const Fraction& f1,const Fraction& f2);
    };

}
   


