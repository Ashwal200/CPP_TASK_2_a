#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Fraction.hpp"
using namespace ariel;

namespace ariel {

// Constructors

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
}

Fraction::Fraction(float number){}



// Operators

 
// Plus

Fraction Fraction::operator+(const Fraction& other) const {
    int new_denominator = denominator * other.denominator;
    int new_numerator = numerator * other.denominator + other.numerator * denominator;
    return Fraction(new_numerator, new_denominator);
}

Fraction operator+(const Fraction& f, float d) { Fraction a(0,1); return a;}

Fraction operator+(float d, const Fraction& f) {Fraction a(0,1); return a;}

// Minus

Fraction Fraction::operator-(const Fraction& other) const {
    int new_denominator = denominator * other.denominator;
    int new_numerator = numerator * other.denominator - other.numerator * denominator;
    return Fraction(new_numerator, new_denominator);
}

Fraction operator-(const Fraction& f, float d) {Fraction a(0,1); return a;}

Fraction operator-(float d, const Fraction& f) {Fraction a(0,1); return a;}

// Multiply

Fraction Fraction::operator*(const Fraction& other) const {
    int new_numerator = numerator * other.numerator;
    int new_denominator = denominator * other.denominator;
    return Fraction(new_numerator, new_denominator);
}

Fraction operator*(const Fraction& f, float d) {Fraction a(0,1); return a;}

Fraction operator*( float d, const Fraction& f) {
    return f*d;
}

// Divide

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0) {
        throw std::invalid_argument("Division by zero!");
    }
    int new_numerator = numerator * other.denominator;
    int new_denominator = denominator * other.numerator;
    return Fraction(new_numerator, new_denominator);
}

Fraction operator/(const Fraction& f, const float d) {Fraction a(0,1); return a;}

Fraction operator/(const float d, const Fraction& f) {Fraction a(0,1); return a;}

// Comparisons

bool Fraction::operator==(const Fraction& other) const {return true;}
bool operator==(const Fraction&, float) {return true;}
bool operator==(float, const Fraction&) {return true;}

bool Fraction::operator>=(const Fraction& other) const {return true;}
bool operator>=(const Fraction&, float) {return true;}
bool operator>=(float, const Fraction&) {return true;}

bool Fraction::operator<=(const Fraction& other) const {return true;}
bool operator<=(const Fraction&, float) {return true;}
bool operator<=(float, const Fraction&) {return true;}

bool Fraction::operator>(const Fraction& other) const {return true;}
bool operator>(const Fraction&, float) {return true;}
bool operator>(float, const Fraction&) {return true;}

bool Fraction::operator<(const Fraction& other) const {return true;}
bool operator<(const Fraction&, float) {return true;}
bool operator<(float, const Fraction&) {return true;}

    // increment and decrement
    Fraction& Fraction::operator++(){return *this;}
    Fraction Fraction::operator++(int)const{return *this;}
    Fraction& Fraction::operator--(){return *this;}
    Fraction Fraction::operator--(int)const{return *this;}

    ostream& operator<<(ostream& oss, const Fraction& fraction) {return oss;}
    istream& operator>>(istream& iss, Fraction& fraction){return iss;}
    
    int Fraction::getNumerator(){ return numerator;}
    void Fraction::setNumerator(int num){}
    
    int Fraction::getDenominator() { return denominator;}
    void Fraction::setDenominator(int num){}
    

}
