#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class varza : public virtual produs
{
public:
    varza();
    varza(std::string d,int p,int s);
    virtual ~varza();
    varza(const varza &x);
    friend std::istream& operator>>(std::istream&, varza&);
    friend std::ostream& operator<<(std::ostream&, varza&);
    friend bool operator==(varza&,varza&);
};
