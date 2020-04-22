#include <iostream>
#include <string>
#include "vinsoi.h"

vin_soi::vin_soi():produs()
{
    this->soi="";
    this->an=0;
    this->tara_or="";
    std::cout<<"vin soi fp\n";
}
vin_soi::vin_soi(std::string d,int p,int s,std::string soi,int an,std::string tara_or):produs(d,"sticla",p,s)
{
    this->soi=soi;
    this->an=an;
    this->tara_or=tara_or;
    std::cout<<"vin soi\n";
}
vin_soi::~vin_soi()
{
    std::cout<<"del vin soi\n";
}
std::string  vin_soi::get_soi()
{
    return this->soi;
}
int vin_soi::get_an()
{
    return this->an;
}
std::string vin_soi::get_tara()
{
    return this->tara_or;
}
vin_soi::vin_soi(const vin_soi &x):produs(x),soi(x.soi),an(x.an),tara_or(x.tara_or)
{
    std::cout<<"CC vin_soi\n";
};
std::istream& operator>>(std::istream& in, vin_soi& p)
{
    std::cout<<"den,masura,pret,stoc,soi,an,tara_or";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    in >> p.soi;
    in >> p.an;
    in >> p.tara_or;
    return in;
}
std::ostream& operator<<(std::ostream& out, vin_soi& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    out << "soi:"<< p.soi << '\n';
    out << "an:"<< p.an << '\n';
    out << "tara origine:"<< p.tara_or << '\n';
    return out;
}

bool operator==(vin_soi& a,vin_soi& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret &&
       a.soi==b.soi &&
       a.an==b.an &&
       a.tara_or==b.tara_or )
        return true;
    return false;
}
