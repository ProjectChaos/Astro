#include "Planet.h"


Planet::Planet()
{
    //ctor
}

Planet::Planet(std::string s, Koord koo, double em, double xa, double ya, double vx, double vy){
    name = s;
    k = koo;
    r0 = koo;
    earthMass = em;
    xAcc = xa;
    yAcc = ya;
    v0X = vx;
    v0Y = vy;
}

 std::string name;
        Koord k;

        Koord r0;

        double earthMass;
        double xAcc;
        double yAcc;

        double v0X;
        double v0Y;

Planet::~Planet()
{
    //dtor
}
