//file Planet.h

#ifndef PLANET_H
#define PLANET_H
#include <string>
#include "Koord.h"



class Planet

{
    public:
        Planet();
        Planet(std::string, Koord, double, double, double, double, double);

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

        std::string name;
        Koord k;

        Koord r0;


        double earthMass;
        double xAcc;
        double yAcc;

        double v0X;
        double v0Y;

        void konstantBewegen(int i){
            double xkoord = r0.getX() + v0X*i + 0.5 * xAcc * (i*i);
            double ykoord = r0.getY() + v0Y*i + 0.5 * yAcc * (i*i);

            k.setX(xkoord);
            k.setY(ykoord);
        }
};

#endif // PLANET_H
