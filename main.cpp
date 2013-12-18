#include <iostream>
#include <conio.h>
#include <math.h>
#include <sstream>
#include <string>
#include <stdlib.h>
#include "Koord.h"
#include "Planet.h"
#include "hello.h"
#include "Ellipse.h"

#include <iostream>
#include <fstream>


using namespace std;
using std::cin;

int globalTime =0;
long gravcon_M = 398600420000000;

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

double abstand(Koord a, Koord b){
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

double abstandP(Planet a, Planet b){
        return abstand(a.getK(), b.getK());
}

//r(t)= r(0)+dr/dt *t + 1/2 d^2r/dt^2 * t^2
//stepper berechnet für 50 Zeitschritte den Abstand zwischen 2 planeten
void stepper(Planet pa, Planet pb){
    int time=0;
while(time<50){
    cout << "Zeitpunkt" << time << endl;
    pa.konstantBewegen(time);
    pb.konstantBewegen(time);
    cout << "Abstand zwischen " <<pa.getName() <<" und "<< pb.getName() <<" betraegt:" << abstandP(pa,pb) <<endl;
    time++;

        }
}

void writeEllipseCSV(vector<double> v){
    std::ofstream myfile;
    //ersetzt jetzt wieder, std::ios_base::app einkommentieren wenn er wieder nr anfügen soll
    string fileToOpen ="test.csv";
    myfile.open("test.csv");//, std::ios_base::app);
    int i=0;
    int j=v.size();//größe unseres eingabevektors
    int appendStreamOpen = 0; //um rechnenzeit zu sparen öfnnen wir nur einen append stream
    while(i<j){
        //erster Schritt, file im Überschreibenmodus noch geöffnet
        if(i==0){
        myfile <<v[i]<<" "<<v[i+1]<<" \n";
        i++;
        i++;//i=2
        myfile.close();
        }
        //zweiter schritt, datei im
        if(appendStreamOpen<1){
        myfile.open("test.csv", std::ios_base::app);
        myfile <<v[i]<<" "<<v[i+1]<<" \n";
        i++;
        i++;
        appendStreamOpen=1;
        }
        //Der letzte schreibschritt, vektor ist fast fertig
        if((i==(j-2))){
        myfile <<v[i]<<" "<<v[i+1]<<" \n";
        i++;
        i++;
        myfile.close();
        cout << "saved in CSV-File" <<endl;

        }
        else{
        myfile <<v[i]<<" "<<v[i+1]<<" \n";
        i++;
        i++;
        }
        }
    }

vector<double> ellipse(){
double a,b,y,x;
int t,e;
int j=0;//stellelaufvariable fr vktor, hier wird immer eingefügt
    cout << "*******************************************************"<< endl ;
    cout << "*                                                     *"<< endl ;
    cout << "*        >>>>>>Ellipsenberechnung<<<<<<               *" << endl;
    cout << "*                                                     *"<< endl ;
    cout << "*******************************************************"<< endl << endl;

cout << "Geben sie die Laenge der grossen Halbachse an" << endl;
cout << "a=";
cin >> a;
cout << "Geben sie die Laenge der kleinen Halbachse an" << endl;
cout << "b=";
cin >> b;
cout << "Waehlen sie die gewuenschte Aufloesung" << endl;
cout << "e=";
cin >> e;
int vektorgr = 4*e+4;
std::vector<double> v(vektorgr);
t=0;
while(t<=e){
    if (t==0){
        x=-a;
        y=0;
        cout<< x <<  "\t"  << y << endl;
        v[j]=x;
        j++;
        v[j]=y;
        j++;
        t++;
    }
    if (t==e){

        x=a;
        y=0;
       cout<< x <<  "\t"  << y << endl;
       v[j]=x;
       j++;
       v[j]=y;
       j++;
       t++;
       }
    else{
        //bereich 1-199
        x=-a+(t*a)/100;
        y=b*sqrt((1-((pow(x,2))/pow(a,2))));
        cout<< x << "\t" <<y<< endl;

        v[j]=x;
        j++;
        v[j]=y;
        j++;
        y*=-1;
        cout<< x<< "\t" << y << endl;
        v[j]=x;
        j++;
        v[j]=y;
        j++;
        t++;
        }
}
return v;
 }



int main()

{
    Koord k1(0,0,0);
    Koord k2(1,2,3);
    Koord k3(10,10,10);


    Planet earth("earth", k1, 1,1,2,0,0);
    Planet mars("mars", k2, 0.107, -1, -1,0,0);
    Planet venus("venus", k3, 0.8, 50, 50,0,0);

    hello();

    int i =10;
    while(i>0){
    cout << endl << endl <<endl;
    cout << "*******************************************************"<< endl ;
    cout << "*                                                     *"<< endl ;
    cout << "*   xXPROJECTXx CHAOS98 Takes no prisoners RECHNER    *"<<endl;
    cout << "*                                                     *"<< endl ;
    cout << "*******************************************************"<< endl << endl<< endl << endl<< endl << endl;


cout<< "Waehlen Sie die gewuenschte Operation aus" <<endl
<< "(a) Wurzel ziehen" <<endl
<< "(b) Dezimalzahl in Binaerzahl umrechnen"<<endl
<<"(c) Planetensimulation starten"<<endl
<< "(d)Ellipse berechnen"<<endl
<< "(f) CSV-Schreiben"<<endl
<<"(x)Programm verlassen"<<endl;
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
stepper(earth,venus);
stepper(mars,venus);
}
if(selection1=="d"){
    ellipse();
}
if(selection1=="f"){
  //  Ellipse e1(2.5,3.5);//kl dann große halbachse
    writeEllipseCSV(ellipse());
}
if(selection1=="x"){
    return 0;
}

i--;
}
getch();
return 0;
}
