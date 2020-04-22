#include <iostream>
#include <string>
#include "jucarii.h"
jucarii::jucarii():produs()
{
    std::cout<<"jucarii fp\n";
}
jucarii::jucarii(std::string d,int p,int s):produs(d,"buc",p,s)
{
    std::cout<<"jucarii\n";
}
jucarii::~jucarii()
{
    std::cout<<"del jucarii\n";
}
jucarii::jucarii(const jucarii &x):produs(x)
{
    std::cout<<"CC jucarii\n";
};
std::istream& operator>>(std::istream& in, jucarii& p)
{
    std::cout<<"den,masura,pret,stoc";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    return in;
}
std::ostream& operator<<(std::ostream& out, jucarii& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    return out;
}

bool operator==(jucarii& a,jucarii& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret )
        return true;
    return false;
}
