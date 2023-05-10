#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
using namespace std;

namespace ariel{
    class Fraction{
        private:
        int _num, _den; //numerator, denominator
        public:
        //constuctors
        Fraction(const int& num,const int& den);
        Fraction(double);
        Fraction():_num(0), _den(1){};
        //setters
        void setNum(int);
        void setDen(int);
        //getters
        int num() const{
            return _num;
        }
        int den() const{
            return _den;
        }
        int getDenominator() const{
            return _den;
        }
        int getNumerator() const{
            return _num;
        }
        Fraction reduceFrac();
        Fraction float2fract(float&);
        Fraction& operator++();
        Fraction operator++(int);
        Fraction& operator--();
        Fraction operator--(int);
    };
    Fraction operator+(const Fraction&, float);
    Fraction operator+(float, const Fraction&);
    Fraction operator+(const Fraction&, const Fraction&);
    Fraction operator-(const Fraction&, float);
    Fraction operator-(float, const Fraction&);
    Fraction operator-(const Fraction&, const Fraction&);
    Fraction operator*(const Fraction&, float);
    Fraction operator*(float, const Fraction&);
    Fraction operator*(const Fraction&, const Fraction&);
    Fraction operator/(const Fraction&, float);
    Fraction operator/(float, const Fraction&);
    Fraction operator/(const Fraction&, const Fraction&);
    bool operator==(const Fraction&, float);
    bool operator==(float, const Fraction&);
    bool operator==(const Fraction&, const Fraction&);
    bool operator>(const Fraction&, float);
    bool operator>(float, const Fraction&);
    bool operator>(const Fraction&, const Fraction&);
    bool operator<(const Fraction&, float);
    bool operator<(float, const Fraction&);
    bool operator<(const Fraction&, const Fraction&);
    bool operator>=(const Fraction&, float);
    bool operator>=(float, const Fraction&);
    bool operator>=(const Fraction&, const Fraction&);
    bool operator<=(const Fraction&, float);
    bool operator<=(float, const Fraction&);
    bool operator<=(const Fraction&, const Fraction&);
    ostream &operator<<(ostream &, const Fraction &);
    istream &operator>>(istream &, Fraction &);
}

#endif
