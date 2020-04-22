#include <iostream>
#include <string>
#include "bere_doza.h"
bere_doza::bere_doza():produs()
{
    this->brand="";
    this->tip="";
    std::cout<<"bere la doza fp\n";
}
bere_doza::bere_doza(std::string d,int p,int s,std::string b,std::string t):produs(d,"buc",p,s)
{
    this->brand=b;
    this->tip=t;
    std::cout<<"bere la doza\n";
}
bere_doza::~bere_doza()
{
    std::cout<<"del bere la doza\n";
}
bere_doza::bere_doza(const bere_doza &x):produs(x),brand(x.brand),tip(x.tip)
{
    std::cout<<"CC bere_doza\n";
};
std::string bere_doza::get_brand()
{
    return this->brand;
}
std::string bere_doza::get_tip()
{
    return this->tip;
}
std::istream& operator>>(std::istream& in, bere_doza& b)
{
    std::cout<<"den,masura,pret,stoc,brand,tip\n";
    in >> b.den;
    in >> b.masura;
    in >> b.pret;
    in >> b.stoc;
    in >> b.brand;
    in >> b.tip;
    return in;
}
std::ostream& operator<<(std::ostream& out, bere_doza& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    out << "brand:"<< p.brand << '\n';
    out << "tip:"<< p.tip << '\n';
    return out;
}

bool operator==(bere_doza& a,bere_doza& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret &&
       a.brand==b.brand &&
       a.tip==b.tip )
        return true;
    return false;
}
