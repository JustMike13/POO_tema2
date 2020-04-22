#pragma once
#include <iostream>
#include <string>
#include "exceptie.h"
class produs
{
protected:
    std::string den;//denumire
    std::string masura;//bucata/greutate/volum
    int pret;
    int stoc;

public:
    produs();
    produs(std::string d,std::string m,int p,int s);
    produs(const produs &x);
    virtual ~produs();
    virtual int cumpara(int cant);
    virtual int ver_stoc();
    virtual void mod_stoc(int x);
    virtual int ver_pret();
    virtual std::string ver_masura();
    friend std::istream& operator>>(std::istream&, produs&);
    friend std::ostream& operator<<(std::ostream&, produs&);
    friend bool operator==(produs&,produs&);
};
