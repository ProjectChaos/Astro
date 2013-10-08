#ifndef PLANET_H
#define PLANET_H
#include <string>
#include "Koord.h"



class Planet

{
    public:
        Planet();
        ~Planet();

        std::string getName() { return name; }
        void setName(std::string val) { name = val; }

        Koord getK() { return k; }
        void setK(Koord val) { k = val; }

        double getEarthMass(){return earthMass;}
        void setEarthMass(double val){earthMass = val;}

        std::string name;
        Koord k;
        double earthMass;
};

#endif // PLANET_H
