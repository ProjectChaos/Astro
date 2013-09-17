#include <iostream>
#include <conio.h>
using namespace std;
using std::cin;

<<<<<<< HEAD
double abs(double c){
if(c<0){
    c= -1*c;
}
return c;
}

double power(int exponent, double val){
double acc = 1;
// ist exponent negativ?
    if(exponent < 0){
    acc = 1/ (power(-1*exponent, val));
    }
    else {
        while (exponent>0){
            acc = acc * val;
            exponent --;
        }
}
return acc;
}
//double wurzel (double a){
//    double x;
//    double y;
//    x =1;
//    double betrag;
//    double abbruch = power (-7,10);
//    while(abs(x-y)>=abbruch){
//                x=y;
//                y = ((x+a/x)/2);
//
//    }
//    cout  << "wurzel von "<< a << " ist " << x;
//    }

    double wurzelInOut(){
    double in;
    cin >>in;

    double x;
    double y;
    string punkte="";
    x =1;
    y = ((x+in/x)/2);
    while(abs(x-y)>(power (-7,10) )){
                x=y;
                y = ((x+in/x)/2);
            punkte +=".";
            cout  << "Berechne "<< punkte << endl;
    }
    cout << "Ergebnis ist: " << x << endl;
    return x;
    }


int main()
{
wurzelInOut();



=======


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
    double a;
    double x;
    double y;
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
int main()
{
>>>>>>> origin/master

//    cout << "Hello world!" << endl;
//    long long x;
//    cout << "geben sie eine Zahl von 0 bis 1000000000000 ein: ";
//    cin >>x;
//    long long y=x*x;
//    cout <<(x*x)<< endl;
//    cout << y << endl;
//
//    cout <<"j"<< endl;

wurzelinout();

//        cout << power(-2,2);
     getch();
    return 0;

}
