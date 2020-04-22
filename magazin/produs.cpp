#pragma once
#include <iostream>
#include <string>
#include "produs.h"

produs::produs()
{
    this->den="";
    this->masura="";
    this->pret=0;
    this->stoc=0;
    std::cout<<"const_fp\n";
};
produs::produs(std::string d,std::string m,int p,int s)
{
    this->den=d;
    this->masura=m;
    this->pret=p;
    this->stoc=s;
    std::cout<<"const_cp\n";
};
produs::produs(const produs &x):den(x.den),masura(x.masura),pret(x.pret),stoc(x.stoc)
{
    std::cout<<"CCProd\n";
};
produs::~produs()
{
    std::cout<<"produs sters";
};
int produs::cumpara(int cant)
{
   if (cant<=(this->stoc))
       {
            (this->stoc)-=cant;
            return (this->pret)*cant;
        }
   return 0;

};
int produs::ver_stoc()
{
    return this->stoc;
};
void produs::mod_stoc(int x)
{
    this->stoc+=x;
};
int produs::ver_pret()
{
    return this->pret;
};
std::string produs::ver_masura()
{
    return this->masura;
};
std::istream& operator>>(std::istream& in, produs& p)
{
    std::cout<<"den,masura,pret,stoc";
    in >> p.den;
    in >> p.masura;
    in >> p.pret;
    in >> p.stoc;
    return in;
}
std::ostream& operator<<(std::ostream& out, produs& p)
{
    out << "produs:"<< p.den << '\n';
    out << "pret:"<< p.pret <<"/"<<p.masura <<'\n';
    return out;
}
bool operator==(produs& a,produs& b)
{
    if(a.den==b.den &&
       a.masura==b.masura &&
       a.pret==b.pret )
        return true;
    return false;
}
