#include <iostream>
#include <string>
#include "faina.h"
faina::faina():produs()
{
    this->cal=0;
    std::cout<<"faina fp\n";
}
faina::faina(std::string d,int p,int c=1,int s=0):produs(d,"kg",p,s)
{
    this->cal=c;
    std::cout<<"faina\n";
}
faina::~faina()
{
    std::cout<<"del faina\n";
}
int faina::get_cal()
{
    return this->cal;
}
faina::faina(const faina &x):produs(x),cal(x.cal)
{
    std::cout<<"CCFaina\n";
};
std::istream& operator>>(std::istream& in, faina& p)
{
    std::cout<<"den,masura,pret,stoc,cal";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    in >> p.cal;
    return in;
}
std::ostream& operator<<(std::ostream& out, faina& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    out << "calitate:"<< p.cal << '\n';
    return out;
}

bool operator==(faina& a,faina& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret &&
       a.cal==b.cal)
        return true;
    return false;
}
