#include <iostream>
#include <conio.h>
#include <math.h>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "Koord.h"
#include "Planet.h"
#include "hello.h"


using namespace std;
using std::cin;

int globalTime =0;

double abs(double c){
if(c<0){
    c=-1*c;
}
return c;
}
double power(int exp, double val){
    double acc=1;
    if (exp<0){
        acc=1/(power (-1*exp, val));
    }
    else {
        while (exp>0){
                acc=acc * val;
        exp --;
            }
    }
    return acc;
}
double wurzelinout(){
    double a,x,y;
    int j=1;
    string komplex="";

    cout << "*******************************************************"<< endl ;
    cout << "*                                                     *"<< endl ;
    cout << "*     WURZELBERECHNUNG MIT DEM HERON ALGORITHMUS      *" << endl;
    cout << "*                                                     *"<< endl ;
    cout << "*******************************************************"<< endl << endl;
    cout << "Geben sie die zu wurzelnde Zahl ein:"<< endl;
    cout << "a=";
    cin >>a;
    x=1;
    y= (x+a/x)/2;
    string punkte="";
if (a<0){
    a*=-1;
    komplex="*i";
}
else {}
     while (abs(x-y)>=power(-7,10)){
        x=y;
        y= (x+a/x)/2;
        punkte+=".";
        j++;
        cout << "Berechne" << punkte << endl;
    }
cout << endl << "ERGEBNIS: Wurzel a=:  " << x << komplex <<endl;
cout << endl << "Benoetigte Berechnungschritte= " << j << endl;
cout << endl << "Genaugikeit:"  << abs(x-y) << endl;
return 0;
}
string convertIntToString(int number){
    stringstream ss;
    ss << number;
return ss.str();
}
string dezToBin(){
    dezString();
    cout << "a= ";
    int dez;
    cin >> dez;
    cout << endl;

    string output = "";
    if (dez==0){
    return "0";
    }
    while (dez>0){
        output = convertIntToString(dez%2) + output;
        dez = floor (dez/2);
    }
    cout << output;
    return output;

    }


int l;double abstand(Koord a, Koord b){
int x1= a.x;
int x2= b.x;
int y1= a.y;
int y2= b.y;
int z1= a.z;
int z2= b.z;
double r;
int l;
l= power(2,(x1-x2)) + power(2,(y1-y2)) + power(2,(z1-z2));
r=sqrt(l);
return r;
}

//int convertstringtoint(string str){
//char bin[]= str;
//int i = atoi( bin );
//return i;
//
//}
//int binToDez
double abstandP(Planet a, Planet b){
        return abstand(a.getK(), b.getK());
}


//stepper berechnet für 50 Zeitschritte den Abstand zwischen 2 planeten
void stepper(Planet pa, Planet pb){
while(globalTime<50){
    cout << globalTime << endl;
    pa.bewegen();
    pb.bewegen();
    cout << abstandP(pa,pb) <<endl;
    globalTime++;
        }
}

int main()
{
    Koord k1;
    Koord k2;// k1,k2;
    k1.setKoord(0,0,0);
    k2.setKoord(1,2,3);

    Planet earth;
    Planet mars;
    earth.setK(k1);
    earth.setName("earth");
    earth.setEarthMass(1);
    earth.setXAcc(1);
    earth.setYAcc(2);
    mars.setK(k2);
    mars.setName("mars");
    mars.setEarthMass(0.107);
    mars.setXAcc(-1);
    mars.setYAcc(-1);

    //cout << abstand(k1,k2)<< endl;
    //cout << abstandP(earth,mars);

    hello();
    int i =10;
    while(i>0){
    cout << endl << endl <<endl;
    cout << "*******************************************************"<< endl ;
    cout << "*                                                     *"<< endl ;
    cout << "*   xXPROJECTXx CHAOS98 Takes no prisoners RECHNER    *"<<endl;
    cout << "*                                                     *"<< endl ;
    cout << "*******************************************************"<< endl << endl<< endl << endl<< endl << endl;


cout<< "Waehlen Sie die gewuenschte Operation aus" <<endl<< "(a) Wurzel ziehen" <<endl<< "(b) Dezimalzahl in Binaerzahl umrechnen"<<endl<<"(c) Planetensimulation starten"<<endl<< "(x)Programm verlassen"<<endl;
string selection1;
cin >> selection1;
if(selection1=="a"){
    wurzelinout();
}
if(selection1=="b"){
dezToBin();

}
if(selection1=="c"){
stepper(earth,mars);
}
if(selection1=="x"){
    return 0;
}
i--;
}
getch();
return 0;
}
