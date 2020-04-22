#pragma once
#include <iostream>
#include <string>
#include "produs.h"

class vin_soi : public virtual produs
{
    std::string soi;
    int an;
    std::string tara_or;
public:
    vin_soi();
    vin_soi(std::string d,int p,int s,std::string soi,int an,std::string tara_or);
    ~vin_soi();
    std::string  get_soi();
    int get_an();
    std::string get_tara();
    vin_soi(const vin_soi &x);
    friend std::istream& operator>>(std::istream&, vin_soi&);
    friend std::ostream& operator<<(std::ostream&, vin_soi&);
    friend bool operator==(vin_soi&,vin_soi&);
};
