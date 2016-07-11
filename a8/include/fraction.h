#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
    public:
        fraction();
        fraction(int whole);
        fraction(int num, int den);
        fraction operator+(const fraction f2)const;
        fraction operator-(const fraction f2)const;
        fraction operator*(const fraction f2)const;
        fraction operator/(const fraction f2)const;
        void operator<<(fraction f);
        bool operator<(fraction f2);
        bool operator<=(fraction f2);
        bool operator>(fraction f2);
        bool operator>=(fraction f2);
        bool operator==(fraction f2);
        bool operator!=(fraction f2);
        fraction operator+=(fraction f2);
        fraction operator-=(fraction f2);
        fraction operator*=(fraction f2);
        fraction operator/=(fraction f2);
        void operator++(fraction f);
        void operator--(fraction f);

    private:
        int numValue;
        int denValue;
};

#endif // FRACTION_H
