#include <iostream>
#include <string>
#include "varza.h"


varza::varza():produs()
{
    std::cout<<"vara fp\n";
}
varza::varza(std::string d,int p,int s=0):produs(d,"buc",p,s)
{
    std::cout<<"varza\n";
}
varza::~varza()
{
    std::cout<<"del varza\n";
}
varza::varza(const varza &x):produs(x)
{
    std::cout<<"CCVarza\n";
};
std::istream& operator>>(std::istream& in, varza& p)
{
    std::cout<<"den,masura,pret,stoc";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    return in;
}
std::ostream& operator<<(std::ostream& out, varza& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    return out;
}

bool operator==(varza& a,varza& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret )
        return true;
    return false;
}
