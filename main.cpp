#include <iostream>
#include <conio.h>
#include <math.h>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;
using std::cin;

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
cout << "Zum Beenden beliebige Taste druecken"<<endl;
   return 0;
}


string convertIntToString(int number){
    stringstream ss;
    ss << number;
return ss.str();
}


string dezToBin(int dez){
    string output = "";
    if (dez==0){
    return "0";
    }
    while (dez>0){
        output = convertIntToString(dez%2) + output;
        dez = floor (dez/2);
    }
    return output;
    }

//int convertstringtoint(string str){
//char bin[]= str;
//int i = atoi( bin );
//return i;
//
//}
//int binToDez
int main()
{



return 0;
}
