#include "Ellipse.h"
#include "math.h"
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <conio.h>


using namespace std;



Ellipse::Ellipse()
{
    //ctor
}


Ellipse::Ellipse(double b, double a){
        gHA=a;
        kHA=b;
        std::vector<double> v;

        //punkteBerechnen(a,b);


}
vector<double> punkteBerechnen(){
            int i= 0;
            double x=-gHA;
            double y1;
            double y2;
            std::vector<double> v;
            while(i<=200){
            cout << "Schritt" << i << endl;
            if(i=0){
                y1=0;
                y2=0;
                //vector an den stellen 0,1,2,3 die wertte x, y1, x und y2 setzten
                v[0]=x;
                v[1]=y1;
                v[2]=x;
                v[3]=y2;
                cout << "x " << x << " y1 " <<y1 << " y2 " << y2 << endl;
                i++;
            }
            else{
                x=-gHA+(i*gHA)/100;
                y1=kHA*sqrt((1-((pow(x,2))/pow(a,2)) ));
                y2=-y1;
                //zum erweitern des vectors, einfach den neu erstellten vector anhaengen
                std::vector<double> v1;
                v1[0]=x;
                v1[1]=y1;
                v1[2]=x;
                v1[3]=y2;

                v.insert(v.end(), v1.begin(), v1.end());
                i++;

            }
            return v;

            }};


Ellipse::~Ellipse()
{
    //dtor
}
