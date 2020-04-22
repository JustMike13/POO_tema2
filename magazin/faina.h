#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class faina: public virtual produs
{
    int cal;
public:
    faina();
    faina(std::string d,int p,int s,int c);
    virtual ~faina();
    virtual int get_cal();
    faina(const faina &x);
    friend std::istream& operator>>(std::istream&, faina&);
    friend std::ostream& operator<<(std::ostream&, faina&);
    friend bool operator==(faina&,faina&);
};
