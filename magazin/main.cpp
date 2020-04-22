#include <iostream>
#include "produs.h"
#include "bere_doza.h"
#include "cartofi.h"
#include "faina.h"
#include "jucarii.h"
#include "varza.h"
#include "vinsoi.h"
#include "vinvarsat.h"
#include <exception>
using namespace std;

int main()
{
    //copy constructor vin_soi
    //vin_soi *y=new vin_soi("jidvei",15,20,"Chardonnay",1999,"Italia");
    //vin_soi *x=new vin_soi(*y);
    //std::cout<<x->get_soi()<<endl;
    //std::cout<<x->get_an()<<endl;
    //std::cout<<x->get_tara()<<endl;
    //std::cout<<x->cumpara(3)<<endl;
    //delete x;


    //operator >>
    //vin_varsat *x=new vin_varsat();
    //cin>>*x;
    //std::cout<<x->cumpara(2)<<"\n";
    //delete x;


    // operator <<
    //bere_doza *x=new bere_doza("bere_doza_ciuc",5,20,"ciuc","blonda");
    //cout<<*x;
    //delete x;

    //operator == true
    //produs *a=new produs("faina","kg",5,20);
    //produs *b=new produs("faina","kg",5,200);
    //std::cout<<(*a==*b)<<"\n";

    //operator == false
    //produs *c=new produs("faina","kg",5,20);
    //produs *d=new produs("faina","kg",50,200);
    //std::cout<<(*c==*d)<<"\n";

    //exception
    try    {produs s;}
    catch   (std::exception& e)   {std::cout << e.what() << "\n\n";}
    return 0;
}
