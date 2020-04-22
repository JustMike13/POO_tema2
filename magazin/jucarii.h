#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class jucarii : public virtual produs
{
public:
    jucarii();
    jucarii(std::string d,int p,int s);
    ~jucarii();
    jucarii(const jucarii &x);
    friend std::istream& operator>>(std::istream&, jucarii&);
    friend std::ostream& operator<<(std::ostream&, jucarii&);
    friend bool operator==(jucarii&,jucarii&);
};
