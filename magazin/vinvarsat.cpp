#include <iostream>
#include <string>
#include "vinvarsat.h"
vin_varsat::vin_varsat():produs()
{
    std::cout<<"vin_varsat fp\n";
}
vin_varsat::vin_varsat(std::string d,int p,int s):produs(d,"litru",p,s)
{
    std::cout<<"vin_varsat\n";
}
vin_varsat::~vin_varsat()
{
    std::cout<<"del vin varsat";
}
vin_varsat::vin_varsat(const vin_varsat &x):produs(x)
{
    std::cout<<"CC vin_varsat\n";
};
std::istream& operator>>(std::istream& in, vin_varsat& p)
{
    std::cout<<"den,masura,pret,stoc\n";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    return in;
}
std::ostream& operator<<(std::ostream& out, vin_varsat& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    return out;
}

bool operator==(vin_varsat& a,vin_varsat& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret )
        return true;
    return false;
}
