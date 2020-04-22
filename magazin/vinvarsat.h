#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class vin_varsat : public virtual produs
{
public:
    vin_varsat();
    vin_varsat(std::string d,int p,int s);
    ~vin_varsat();
    vin_varsat(const vin_varsat &x);
    friend std::istream& operator>>(std::istream&, vin_varsat&);
    friend std::ostream& operator<<(std::ostream&, vin_varsat&);
    friend bool operator==(vin_varsat&,vin_varsat&);
};
