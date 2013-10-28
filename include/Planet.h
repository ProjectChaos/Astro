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

        double getXAcc(){return xAcc;}
        double getYAcc(){return yAcc;}
        void setXAcc(double val){xAcc = val;}
        void setYAcc(double val){yAcc = val;}

        double  getMass() {return mass;}
        void       setMass(double val){mass = val;}

        std::string name;
        Koord k;
        double earthMass;
        double mass;

        double xAcc;
        double yAcc;

        void bewegen(){
            double xkoord = k.getX() + xAcc;
            double ykoord = k.getY() + yAcc;
            k.setX(xkoord);
            k.setY(ykoord);
        }
};

#endif // PLANET_H
