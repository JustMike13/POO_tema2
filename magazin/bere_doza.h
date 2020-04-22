#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class bere_doza : public virtual produs
{
    std::string brand,tip;
public:
    bere_doza();
    bere_doza(std::string d,int p,int s,std::string b,std::string t);
    virtual ~bere_doza();
    std::string get_brand();
    std::string get_tip();
    bere_doza(const bere_doza &x);
    friend std::istream& operator>>(std::istream&, bere_doza&);
    friend std::ostream& operator<<(std::ostream&, bere_doza&);
    friend bool operator==(bere_doza&,bere_doza&);
};
