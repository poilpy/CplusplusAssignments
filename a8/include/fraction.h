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
        bool isEqualTo(const fraction f2)const;
        void operator<<();
        bool operator<();
        bool operator<=();
        bool operator>();
        bool operator>=();
        bool operator==();
        bool operator!=();

    private:
        void simplify();
        int numValue;
        int denValue;
};

#endif // FRACTION_H
