#include "doctest.h"
#include <stdexcept>
#include <iostream>
#include <typeinfo> 
#include <sstream>
using namespace std;
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Create an object from Fraction type") {
    Fraction f(5, 13);

    // Check that the numbers secceed to get the value
    CHECK(f.getNumerator() == 5);
    CHECK(f.getDenominator() == 13);
}


TEST_CASE("Create an object from Fraction that is from flaut type"){
    Fraction f(0.60);
    // Check that the number falling apart to two number
    CHECK(f.getNumerator() == 3);
    CHECK(f.getDenominator() == 5);
}

// -------- operators --------

TEST_CASE("If we try to devide the number by zero") {
    Fraction f(5, 13);
    CHECK_THROWS(f / 0);
}


TEST_CASE("If we put zero in the setDenominator") {
    Fraction f(5, 13);
    CHECK_THROWS(f.setDenominator(0));

}


TEST_CASE("Operator add + ") {
    // Fraction type with another Fraction
    
    Fraction f1(5, 13), f2(6, 10); 
    Fraction ffloat(0.5);
    Fraction f3 = f1 + f2;
    
    CHECK(f3.getNumerator() == 64 );
    CHECK(f3.getDenominator() == 65);
    
    // Fraction type with float type
    
    f3 = f1 + ffloat; 
    CHECK(f3.getNumerator() == 23);
    CHECK(f3.getDenominator() == 26);
    
    // Float type with Fraction type
    
    f3 = ffloat + f2; 
    CHECK(f3.getNumerator() == 11 );
    CHECK(f3.getDenominator() == 10);
    
    
    
}

TEST_CASE("Operator minus - ") {
    // Fraction type with another Fraction
    Fraction f1(5, 13), f2(6, 10); 
    Fraction f3 = f2 - f1;
    Fraction ffloat(0.5);
    
    CHECK(f3.getNumerator() == 14 );
    CHECK(f3.getDenominator() == 65);
        
    // Fraction type with float type
    
    f3 = f1 - ffloat; 
    CHECK(f3.getNumerator() == (-3));
    CHECK(f3.getDenominator() == 26);
    
    // Float type with Fraction type
    
    f3 = ffloat - f2; 
    CHECK(f3.getNumerator() == (-1) );
    CHECK(f3.getDenominator() == 10);
}


TEST_CASE("Operator mult * ") {
    // Fraction type with another Fraction
    Fraction f1(5, 13), f2(6, 10); 
    Fraction f3 = f2 * f1;
    Fraction ffloat(0.5);
    
    CHECK(f3.getNumerator() == 3 );
    CHECK(f3.getDenominator() == 13);
    
    // Fraction type with float type
    
    f3 = f1 * ffloat; 
    CHECK(f3.getNumerator() == 5);
    CHECK(f3.getDenominator() == 26);
    
    // Float type with Fraction type
    
    f3 = ffloat * f2; 
    CHECK(f3.getNumerator() == 3 );
    CHECK(f3.getDenominator() == 10);
}


TEST_CASE("Operator mult / ") {
    // Fraction type with another Fraction
    Fraction f1(5, 13), f2(6, 10); 
    Fraction f3 = f2 / f1;
    Fraction ffloat(0.5);
    
    CHECK(f3.getNumerator() == 39 );
    CHECK(f3.getDenominator() == 25);
    
    // Fraction type with float type
    
    f3 = f1 / ffloat; 
    CHECK(f3.getNumerator() == 10);
    CHECK(f3.getDenominator() == 13);
    
    // Float type with Fraction type
    
    f3 = ffloat / f2; 
    CHECK(f3.getNumerator() == 5 );
    CHECK(f3.getDenominator() == 6);
}

// ------- Comparisons --------

TEST_CASE("Operator equal ==") {
    Fraction f1(6 , 10);
    Fraction f2(3 , 5);
    Fraction f3(1 , 5);
    Fraction ffloat(0.2);
    
    // Fraction type with another Fraction
    CHECK(f1 == f2);
    CHECK_FALSE(f1 == f3); 
    
    // Fraction type with float type
    CHECK(f3 == ffloat);
    CHECK_FALSE(f1 == ffloat); 
    
    // Float type with Fraction type
    CHECK(ffloat == f3);
    CHECK_FALSE(ffloat == f1); 

}



TEST_CASE("Operator bigger equal >=") {
    Fraction f1(6 , 10);
    Fraction f2(3 , 5);
    Fraction f3(1 , 5);
    Fraction f4(1 , 6);
    Fraction ffloat(0.2);
    
    // Fraction type with another Fraction
    CHECK(f1 >= f2);
    CHECK_FALSE(f3 >= f1); 
    
    // Fraction type with float type
    CHECK(f3 >= ffloat);
    CHECK_FALSE(f4 >= ffloat); 
    
    // Float type with Fraction type
    CHECK(ffloat >= f4);
    CHECK_FALSE(ffloat >= f1); 

}


TEST_CASE("Operator smaller equal <=") {
    Fraction f1(6 , 10);
    Fraction f2(3 , 5);
    Fraction f3(1 , 5);
    Fraction f4(1 , 6);
    Fraction ffloat(0.2);
    
    // Fraction type with another Fraction
    CHECK(f1 <= f2);
    CHECK_FALSE(f4 <= f1); 
    
    // Fraction type with float type
    CHECK(f4 <= ffloat);
    CHECK_FALSE(f1 <= ffloat); 
    
    // Float type with Fraction type
    CHECK(ffloat <= f1);
    CHECK_FALSE(ffloat <= f4); 

}


TEST_CASE("Operator smaller equal <") {
    Fraction f1(6 , 10);
    Fraction f2(3 , 5);
    Fraction f3(1 , 5);
    Fraction f4(1 , 6);
    Fraction ffloat(0.2);
    
    // Fraction type with another Fraction
    CHECK(f4 < f2);
    CHECK_FALSE(f3 < f1); 
    
    // Fraction type with float type
    CHECK(f4 < ffloat);
    CHECK_FALSE(f1 < ffloat); 
    
    // Float type with Fraction type
    CHECK(ffloat < f1);
    CHECK_FALSE(ffloat < f4); 

}


TEST_CASE("Operator smaller equal >") {
    Fraction f1(6 , 10);
    Fraction f2(3 , 5);
    Fraction f3(1 , 5);
    Fraction f4(1 , 6);
    Fraction ffloat(0.2);
    
    // Fraction type with another Fraction
    CHECK(f2 > f4);
    CHECK_FALSE(f1 > f3); 
    
    // Fraction type with float type
    CHECK(f1 > ffloat);
    CHECK_FALSE(f4 > ffloat); 
    
    // Float type with Fraction type
    CHECK(ffloat > f4);
    CHECK_FALSE(ffloat > f1); 

}


TEST_CASE("Increment to fraction") {
    Fraction f1(3, 4);
    Fraction f2 = ++f1;
    Fraction f3(3 , 4);
    Fraction f4 = f3++;
    
    // We check that the value in f1 & f2 increase by 1
    CHECK(f1.getNumerator() == f2.getNumerator());
    CHECK(f1.getDenominator() == f2.getDenominator());
    
    // We check that the value in f3 increase by 1 but the value in f4 isn't
    CHECK(f4.getNumerator() == 3);
    CHECK(f4.getDenominator() == 4);
    CHECK_FALSE(f3.getNumerator() == f4.getNumerator());
    CHECK_FALSE(f3.getDenominator() == f4.getDenominator());
    
}

TEST_CASE("Decrement to fraction") {
    Fraction f1(3, 4);
    Fraction f2 = --f1;
    Fraction f3(3 , 4);
    Fraction f4 = f3--;
    
    // We check that the value in f1 & f2 decrease by 1
    CHECK(f1.getNumerator() == f2.getNumerator());
    CHECK(f1.getDenominator() == f2.getDenominator());
    
    // We check that the value in f3 decrease by 1 but the value in f4 isn't
    CHECK(f4.getNumerator() == 3);
    CHECK(f4.getDenominator() == 4);
    CHECK_FALSE(f3.getNumerator() == f4.getNumerator());
    CHECK_FALSE(f3.getDenominator() == f4.getDenominator());
    
}

TEST_CASE("Output << and Input >>") { 
// I take this example from https://stackoverflow.com/questions/13056799/unit-testing-operator-in-c 

    Fraction f1(5, 13);
    Fraction f2;
    stringstream string_os;

    // Test operator<<
    string_os << f1;
    CHECK(string_os.str() == "5/13");

    // Test operator>>
    string_os.str("");
    string_os << "5/13";
    string_os >> f2;
    CHECK(f2.getNumerator() == 5);
    CHECK(f2.getDenominator() == 13);
}





