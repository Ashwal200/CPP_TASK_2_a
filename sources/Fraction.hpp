#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;




namespace ariel {


class Fraction
{
// Private members
private:
    int numerator;
    int denominator;
public:
    // Constructor
    Fraction();
    Fraction(int , int);
    Fraction(float number);

    
    
    // Operators
    // - PLUS
    Fraction operator+(const Fraction& ) const; 
    friend Fraction operator+(const Fraction& , float); 
    friend Fraction operator+(float ,const Fraction&);

    // - MINUS
    Fraction operator-(const Fraction&) const; 
    friend Fraction operator-(const Fraction& , float); 
    friend Fraction operator-(float ,const Fraction&);
    
    // - MULT
    Fraction operator*(const Fraction&) const;
    friend Fraction operator*(const Fraction& , float); 
    friend Fraction operator*(float ,const Fraction&);

    // - DIVID
    Fraction operator/(const Fraction&) const; 
    friend Fraction operator/(const Fraction& , float); 
    friend Fraction operator/(float ,const Fraction&);

    // Comparisons
    bool operator==(const Fraction&) const;
    friend bool operator==(const Fraction&, float);
    friend bool operator==(float, const Fraction&);

    bool operator>=(const Fraction&) const;
    friend bool operator>=(const Fraction&, float);
    friend bool operator>=(float, const Fraction&);

    bool operator<=(const Fraction&) const;
    friend bool operator<=(const Fraction&, float);
    friend bool operator<=(float, const Fraction&) ;

    bool operator>(const Fraction&) const;
    friend bool operator>(const Fraction&, float);
    friend bool operator>(float, const Fraction&) ; 

    bool operator<(const Fraction&) const;
    friend bool operator<(const Fraction&, float);
    friend bool operator<(float, const Fraction&) ;

    // increment and decrement
    Fraction& operator++(); // ++i
    Fraction operator++(int) const; // i++
    Fraction& operator--(); // --i
    Fraction operator--(int) const; // i--

    friend ostream& operator<<(ostream& oss, const Fraction& fraction);
    friend istream& operator>>(istream& iss, Fraction& fraction);
    
    // Getter & Setter
    int getNumerator();
    void setNumerator(int num);
    
    int getDenominator();
    void setDenominator(int num);
};

}

#endif


