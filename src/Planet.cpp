#include "Planet.h"


Planet::Planet()
{
    //ctor
}

Planet::Planet(std::string s, Koord koo, double em, double xa, double ya){
    name = s;
    k = koo;
    earthMass = em;
    xAcc = xa;
    yAcc = ya;
}

Planet::~Planet()
{
    //dtor
}
