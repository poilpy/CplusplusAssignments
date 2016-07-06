#include <iostream>

using namespace std;


class fraction
{
    public:
        void set(int num, int den);
        fraction addedTo(fraction f2);
        fraction subtract(fraction f2);
        fraction multipliedBy(fraction f2);
        fraction dividedBy(fraction f2);
        bool isEqualTo(fraction f2);
        void print();

    private:
        int numValue;
        int denValue;
};






void fraction::set(int num, int den)
{
    numValue = num;
    denValue = den;
}






fraction fraction::addedTo(fraction f2)
{
    int modNum1;
    int modNum2;
    int modDen;

    modDen = denValue * f2.denValue;
    modNum1 = numValue * f2.denValue;
    modNum2 = f2.numValue * denValue;

    fraction result;
    result.set(modNum1 + modNum2, modDen);

    return result;
}






fraction fraction::subtract(fraction f2)
{
    int modNum1;
    int modNum2;
    int modDen;

    modDen = denValue * f2.denValue;
    modNum1 = numValue * f2.denValue;
    modNum2 = f2.numValue * denValue;

    fraction result;
    result.set(modNum1 - modNum2, modDen);
    return result;
}






fraction fraction::multipliedBy(fraction f2)
{
    fraction result;
    result.set(numValue * f2.numValue, denValue * f2.denValue);
    return result;
}






fraction fraction::dividedBy(fraction f2)
{
    fraction result;
    result.set(numValue * f2.denValue, denValue * f2.numValue);
    return result;
}






bool fraction::isEqualTo(fraction f2)
{
    if (numValue == f2.numValue && denValue == f2.denValue)
        return true;
    else
        return false;
}






void fraction::print()
{
    cout << numValue << "/" << denValue;
}






int main()
{
    fraction f1;
    fraction f2;
    fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }
}













