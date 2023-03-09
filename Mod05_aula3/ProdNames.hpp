#ifndef PRODNAMES
#define PRODNAMES

#include "ProdPrice.hpp"

class ProdNames
{
public:
    ProdNames(const char * const, const ProdPrice &);
    void results() const;

private:
    char product1[20];
    const ProdPrice price1;
};

#endif // PRODNAMES
