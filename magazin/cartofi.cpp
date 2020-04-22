#include <iostream>
#include <string>
#include "cartofi.h"

cartofi::cartofi()
{
    this->tip="";
    std::cout<<"cartofi fp\n";
}
cartofi::cartofi(std::string d,int p,int s,std::string tip):produs(d,"kg",p,s)
{
    this->tip=tip;
    std::cout<<"cartofi\n";
}
cartofi::~cartofi()
{
    std::cout<<"del cartofi/n";
}
std::string cartofi::get_tip()
{
    return this->tip;
}
cartofi::cartofi(const cartofi &x):produs(x),tip(x.tip)
{
    std::cout<<"CC cartofi\n";
};
std::istream& operator>>(std::istream& in, cartofi& p)
{
    std::cout<<"den,masura,pret,stoc,tip";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    in >> p.tip;
    return in;
}
std::ostream& operator<<(std::ostream& out, cartofi& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    out << "tip" << p.tip << '\n';
    return out;
}

bool operator==(cartofi& a,cartofi& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret &&
       a.tip==b.tip )
        return true;
    return false;
}
