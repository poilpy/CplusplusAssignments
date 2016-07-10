/*
The Fraction class provides a constructor for a fraction with a
numerator and denominator value. The class also has operations for adding,
subtracting, multiplying and dividing fractions as well as finding the
equivalence of two fractions and outputting the numerator and denominator of
a fraction.


    fraction()
        postcondition: constructs a fraction with a numerator value of
            0 and a denominator value of 1.
    fraction(int num, int den)
        precondition: num is the numerator value of the fraction while
            den is the denominator value of the fraction.
        postcondition: constructs a fraction object with the given numerator and
            denominator values in a simplified form.
    fraction addedTo(const fraction f2)const
        precondition: f2 is a fraction with a numerator and a denominator.
        postcondition: returns a new fraction in a simplified form that is the addition of f2
            and the calling object.
    fraction subtract(const fraction f2)const
        precondition: f2 is a fraction with a numerator and a denominator.
        postcondition: returns a new fraction in a simplified form that is the subtraction of f2
            and the calling object.
    fraction multipliedBy(const fraction f2)const
        precondition: f2 is a fraction with a numerator and a denominator.
        postcondition: returns a new fraction in a simplified form that is the multiplication of f2
            and the calling object.
    fraction dividedBy(const fraction f2)const
        precondition: f2 is a fraction with a numerator and a denominator.
        postcondition: returns a new fraction in a simplified form that is the division of f2
            and the calling object.
    bool isEqualTo(const fraction f2)const
        precondition: f2 is a fraction with a numerator and a denominator.
        postcondition: returns true if f2 is equivalent to the calling object.
    void print()const
        postcondition: outputs the numerator and the denominator of the calling object.
*/





#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
    public:
        fraction();
        fraction(int num, int den);
        fraction addedTo(const fraction f2)const;
        fraction subtract(const fraction f2)const;
        fraction multipliedBy(const fraction f2)const;
        fraction dividedBy(const fraction f2)const;
        bool isEqualTo(const fraction f2)const;
        void print()const;

    private:
        void simplify();
        int numValue;
        int denValue;
};

#endif // FRACTION_H



/*
The result starts off at 0/1
The product of 9/8 and 2/3 is 3/4
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two fractions are not equal.
The product of 3/2 and 2/3 is 1/1
*/
