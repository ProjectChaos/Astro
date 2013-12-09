#ifndef ELLIPSE_H
#define ELLIPSE_H
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>


class Ellipse
{
    public:
        Ellipse();
        Ellipse(double, double);

        virtual ~Ellipse();
        double GetkHA() { return kHA; }
        void SetkHA(double val) { kHA = val; }
        double GetgHA() { return gHA; }
        void SetgHA(double val) { gHA = val; }
        double Getx() { return x; }
        void Setx(double val) { x = val; }
        double Gety() { return y; }
        std::vector<double> Getv() { return v; }
        void Sety(double val) { y = val; }
        void Setv(std::vector<double> val) { v = val; }
        void punkteBerechnen();

        double kHA;
        double gHA;
        double x;
        double y;
        std::vector<double> v;
};

#endif // ELLIPSE_H
