#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class cartofi : public virtual produs
{
    std::string tip;//rosii sau albi
public:
    cartofi();
    cartofi(std::string d,int p,int s,std::string tip);
    ~cartofi();
    std::string get_tip();
    cartofi(const cartofi &x);
    friend std::istream& operator>>(std::istream&, cartofi&);
    friend std::ostream& operator<<(std::ostream&, cartofi&);
    friend bool operator==(cartofi&,cartofi&);
};
