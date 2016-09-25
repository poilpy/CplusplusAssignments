// FILE calculator.h
// Name:  Colin Murphy
// GID:  G00994745
// Date:  9/06/2016
// Environment: GNU GCC Code::Blocks 16.01
#ifndef COLIN_MURPHY_ADDSUBMULT
#define COLIN_MURPHY_ADDSUBMULT

namespace colin_murphy_L1
{
class AddSubMult
{
public:
    AddSubMult();
    int getTotal();
    bool addNum(int n);
    bool subNum(int n);
    bool multNum(int n);

private:
    int total;
};
}

#endif // COLIN_MURPHY_ADDSUBMULT
